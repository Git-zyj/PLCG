/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179829
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
    var_16 = ((/* implicit */short) var_15);
    var_17 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_1 - 1] [i_4] [i_3] [i_3] [i_1 - 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_14))), (((/* implicit */unsigned int) var_5))));
                                arr_18 [i_2] [i_2] [i_2] [8LL] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) min((var_2), (((/* implicit */long long int) var_10))));
                            }
                        } 
                    } 
                } 
                var_18 -= ((/* implicit */long long int) var_6);
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) var_5)), (var_14)));
}
