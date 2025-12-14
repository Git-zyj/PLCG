/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117733
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (unsigned char)12)))) : (min((((((/* implicit */int) var_2)) / (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) 1856289915U)) ? (868710357) : (((/* implicit */int) (unsigned char)18)))))));
                            var_12 ^= ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) min((((/* implicit */short) var_4)), ((short)17193)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((unsigned short) ((((/* implicit */int) var_2)) > ((+(((/* implicit */int) (_Bool)1))))));
}
