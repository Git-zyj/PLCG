/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158433
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
    var_16 = ((/* implicit */short) max((((/* implicit */int) var_8)), (var_15)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] = max((((/* implicit */unsigned long long int) var_11)), (((arr_12 [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_3] [i_1] [i_3 + 2]) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) var_1)))));
                                var_17 = var_2;
                                var_18 *= ((/* implicit */_Bool) ((int) arr_7 [i_3 - 1] [i_0] [i_3] [i_3 + 4]));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */_Bool) (~(max((var_6), (((/* implicit */unsigned long long int) arr_4 [i_0]))))));
                    var_20 = ((unsigned long long int) 2147483647);
                    var_21 += ((/* implicit */int) ((_Bool) (-(((/* implicit */int) ((_Bool) 18446744073709551615ULL))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_12);
}
