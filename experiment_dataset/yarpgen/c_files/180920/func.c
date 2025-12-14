/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180920
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
    var_17 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned char) 2343076881U);
                            var_19 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) > ((-(var_14))))))) < (var_10)));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) 1168051467);
                var_20 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)18711))));
            }
        } 
    } 
}
