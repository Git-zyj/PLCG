/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124556
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_15 = ((((/* implicit */_Bool) 2327509229U)) ? (arr_3 [i_0] [i_1 + 2]) : (var_4));
                        var_16 = ((((/* implicit */_Bool) 6U)) ? (6U) : (3817969028U));
                    }
                    var_17 = ((/* implicit */unsigned int) max((var_17), (var_4)));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            {
                                var_18 = var_2;
                                var_19 = 6U;
                                arr_13 [i_0] [i_1 - 1] [2U] [i_4] [i_1 - 1] [i_0] = arr_6 [i_1] [i_1] [i_2 + 3];
                                arr_14 [i_0] [i_4] = ((((unsigned int) 3325957817U)) + ((+(arr_7 [i_2] [i_2 + 1] [i_2] [i_2]))));
                                arr_15 [2U] [i_4] [i_2] [10U] [10U] = 870942337U;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) 4294967284U)) ? (20U) : (2001266267U));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2 + 4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 16U)))))))));
    var_23 = (-(201683052U));
    var_24 = var_10;
}
