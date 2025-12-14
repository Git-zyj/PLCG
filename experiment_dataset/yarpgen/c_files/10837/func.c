/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10837
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
    var_16 = min((max((2323132210U), (((((/* implicit */_Bool) 3351198065U)) ? (4161063108U) : (0U))))), (var_13));
    var_17 = var_6;
    var_18 = ((((/* implicit */_Bool) (+(var_9)))) ? (((max((4294967282U), (var_9))) | (((11U) * (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 12U)) || (((/* implicit */_Bool) max((var_8), (11U)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1 + 3] = max((22U), (18U));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_5 [i_0] [i_1 + 1] [i_1]), (var_2)))) ? (((((/* implicit */_Bool) 4294967273U)) ? (22U) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2U)) && (((/* implicit */_Bool) var_7)))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_2) : (11U)))) ? (var_2) : (4294967269U)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_4] [i_4] = arr_4 [i_2] [i_2] [i_4];
                                var_19 = ((((/* implicit */_Bool) min((var_9), (arr_14 [13U] [i_0] [i_1] [i_4] [i_3 - 2] [i_4])))) ? ((~(min((28U), (7U))))) : (((var_9) ^ (((unsigned int) var_11)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_1] [i_5] [15U] = ((((/* implicit */_Bool) (+(((4294967273U) / (var_15)))))) ? (var_3) : (var_8));
                            arr_23 [i_0] [i_1] [i_5] [i_5] [i_5] = 0U;
                            /* LoopSeq 1 */
                            for (unsigned int i_7 = 4; i_7 < 16; i_7 += 2) 
                            {
                                arr_26 [i_0] [i_1 + 1] [i_5] [2U] [i_7] = arr_3 [i_1 + 2] [9U] [i_1 + 2];
                                arr_27 [i_1 + 2] [i_5] = ((4294967295U) * (0U));
                            }
                            var_20 = ((/* implicit */unsigned int) max((var_20), (4294967267U)));
                        }
                    } 
                } 
            }
        } 
    } 
}
