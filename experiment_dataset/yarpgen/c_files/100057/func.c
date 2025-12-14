/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100057
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_2] [i_0] &= ((/* implicit */_Bool) -1005674858);
                    var_20 = ((/* implicit */signed char) (((-(((/* implicit */int) var_12)))) | (((/* implicit */int) (unsigned char)5))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (long long int i_4 = 3; i_4 < 23; i_4 += 2) 
        {
            {
                arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((max((var_16), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
                var_21 = var_12;
                arr_15 [i_3] = ((/* implicit */short) 4320141837084843646ULL);
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((max(((unsigned short)7986), (var_2))), (((/* implicit */unsigned short) (unsigned char)247)))))));
            }
        } 
    } 
}
