/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119497
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
    var_18 = ((/* implicit */int) var_1);
    var_19 += var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (max((var_17), (((/* implicit */unsigned short) var_8))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_0] = ((var_2) ? (((/* implicit */int) max((max((((/* implicit */unsigned short) var_13)), (var_17))), (((/* implicit */unsigned short) var_13))))) : (max((((/* implicit */int) var_4)), (var_9))));
                                var_21 += max((max((max((var_15), (((/* implicit */int) var_5)))), (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */int) var_10)))));
                                var_22 += ((/* implicit */unsigned short) var_9);
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((max((((/* implicit */int) max((var_16), (var_8)))), (max((((/* implicit */int) var_6)), (var_0))))), (max((var_9), (((var_1) ? (var_14) : (((/* implicit */int) var_7))))))));
                                arr_13 [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) max((max((((/* implicit */int) var_13)), (var_15))), (max((max((var_12), (var_15))), (max((var_0), (((/* implicit */int) var_17))))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) max((max((var_0), (var_0))), (((/* implicit */int) max((var_17), (var_17))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */int) min((var_23), (max((((/* implicit */int) max((((/* implicit */unsigned short) max((var_13), (var_2)))), (max((((/* implicit */unsigned short) var_16)), (var_3)))))), (max((((/* implicit */int) var_6)), (var_9)))))));
                        var_24 = var_3;
                    }
                }
            } 
        } 
    } 
}
