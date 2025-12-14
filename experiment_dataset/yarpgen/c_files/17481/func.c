/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17481
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
    var_15 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) min(((+(1880288178))), (((/* implicit */int) arr_2 [i_0]))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1])) - (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
                    arr_10 [i_0] [i_1] [8U] = arr_6 [i_0];
                }
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    var_16 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_2 [i_0])))), (max((((((/* implicit */_Bool) -1764135469)) ? (565646233) : (arr_11 [i_0]))), (((arr_12 [(short)5] [i_1] [i_1] [i_0]) - (86671453)))))));
                    arr_15 [i_0] [i_0] [i_0] = ((int) ((((/* implicit */_Bool) min((400857354U), (3073313875U)))) ? (1880288166) : (max((((/* implicit */int) (_Bool)1)), (-1764135474)))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max(((-(min((-984541014), (arr_12 [i_0] [i_1] [8U] [i_1]))))), ((~(((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_2))))))))))));
                }
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    var_18 = ((/* implicit */int) (!((((~(arr_4 [i_1]))) == (((/* implicit */unsigned int) min((((/* implicit */int) (short)-8977)), (-984541014))))))));
                    arr_18 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned int) arr_16 [i_0] [i_1] [9U] [i_4]);
                    arr_19 [i_0] = ((/* implicit */short) var_7);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */int) arr_22 [i_0] [i_5 + 2] [i_5] [i_5 + 2] [i_0] [i_5] [i_5 + 2])), (arr_11 [i_5 - 2]))), (((/* implicit */int) ((arr_12 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_0]) > (arr_12 [i_5 + 1] [i_5] [i_5 + 1] [i_0]))))));
                                arr_26 [i_0] = ((/* implicit */int) ((arr_12 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_0]) <= (((int) arr_12 [i_5 + 2] [i_5 + 2] [i_5 + 3] [i_0]))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) arr_2 [i_0]);
                            var_20 = ((/* implicit */int) ((1570153277U) * (min((332946458U), (((/* implicit */unsigned int) (unsigned char)41))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                            {
                                arr_33 [9U] [9U] [9U] [i_0] [i_7] [2] [i_9] = (-(((((/* implicit */_Bool) 350548059)) ? (((/* implicit */int) (unsigned char)86)) : (var_8))));
                                arr_34 [i_0] [i_0] [i_8] [i_0] = ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) arr_23 [i_7] [i_1] [i_0] [i_8] [i_8])) : (((/* implicit */int) var_1)));
                                arr_35 [i_0] [i_1] [i_1] [i_0] [i_9] [3] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))) + ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))) : (arr_30 [i_0] [i_0] [1U] [1U]))));
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_5);
    var_23 = ((/* implicit */unsigned char) var_9);
}
