/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128248
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
    var_19 = ((((/* implicit */unsigned int) var_13)) * (((((/* implicit */_Bool) ((unsigned int) var_14))) ? (max((((/* implicit */unsigned int) (unsigned char)30)), (0U))) : (var_6))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1 + 1] [i_0] [i_0] = ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 1567882882U)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -210338734)))) : (((unsigned int) arr_3 [i_0])));
                        arr_11 [i_0] [i_2] = ((/* implicit */int) ((unsigned int) min((var_3), (((var_4) - (arr_9 [i_0] [i_0] [8U] [i_0] [i_0] [i_3 + 1]))))));
                        arr_12 [i_1 + 1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_8);
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)51)) ? (461519017) : (774769778))))));
                        var_22 = ((((unsigned int) ((1019158229U) | (var_6)))) | (var_12));
                    }
                    for (int i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) arr_15 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0] [i_0] [i_0 - 2]);
                        arr_17 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_5);
                        var_24 = ((/* implicit */unsigned int) ((min((arr_13 [i_0] [i_4 - 1]), (arr_13 [i_0] [i_4 + 1]))) | (((((/* implicit */_Bool) 239242220U)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4 + 2]))))));
                        var_25 = -1227167615;
                    }
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 0))) || (((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_12))))))));
                        var_27 = ((/* implicit */unsigned char) max((var_7), (var_13)));
                        var_28 = ((/* implicit */int) var_9);
                    }
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 18; i_6 += 4) 
                    {
                        var_29 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 516431662U)) ? (((/* implicit */int) ((unsigned char) (unsigned char)206))) : (((/* implicit */int) var_5))))) : (var_12));
                        arr_25 [i_0 + 2] [i_1 - 3] [i_0 + 2] [i_0] = ((((/* implicit */unsigned int) 1342113611)) / (((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_13 [i_0] [i_0])) : (var_17))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        var_30 = ((/* implicit */int) var_17);
                        arr_28 [i_0] [i_0] [6U] [i_0] = ((int) arr_27 [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0]);
                        arr_29 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16646144)) && (((/* implicit */_Bool) arr_3 [i_1 - 1]))));
                        var_31 = ((/* implicit */unsigned char) ((int) -1));
                        arr_30 [i_1] [i_2] [i_0] = ((/* implicit */int) 3926586535U);
                    }
                }
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1905154445)) ? (67092480) : ((+(((/* implicit */int) ((1534947221) >= (1227167614))))))));
                arr_31 [i_0] [12U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_27 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0]), (max((((/* implicit */int) var_15)), (arr_26 [i_1] [i_0 - 3] [i_0 - 3]))))))));
                var_33 = ((/* implicit */int) arr_18 [i_0] [i_0] [15U]);
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 7; i_8 += 2) 
    {
        for (int i_9 = 3; i_9 < 9; i_9 += 4) 
        {
            {
                var_35 = ((((/* implicit */_Bool) ((unsigned int) arr_16 [i_8 - 1] [i_8 - 2] [i_8 + 3] [i_8 - 3] [11]))) ? (max((min((var_0), (var_0))), (((/* implicit */unsigned int) -1227167612)))) : (((/* implicit */unsigned int) 446394661)));
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 9; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            arr_42 [i_8] [4U] [i_10] [4U] = ((/* implicit */int) ((unsigned char) arr_20 [15U] [i_10] [9U] [i_10 + 1] [(unsigned char)10] [i_10]));
                            var_36 = ((unsigned int) arr_3 [i_10]);
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) arr_9 [i_8 - 2] [i_8 - 2] [i_11] [i_8 - 2] [i_9] [0U]))));
                        }
                    } 
                } 
                arr_43 [i_8] = (-(var_18));
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        var_38 = arr_15 [i_9 - 2] [i_9] [i_9 - 2] [0U] [i_9 + 1] [i_9 - 2];
                        var_39 = ((/* implicit */unsigned int) max((((arr_24 [i_8 - 2] [i_9 - 2] [i_9 - 1]) ^ (arr_24 [i_8 + 2] [i_9 + 1] [i_9 - 3]))), (max((arr_24 [i_8 - 3] [i_9 - 2] [i_9 - 3]), (var_10)))));
                    }
                    arr_51 [i_8] [i_8] = min((((/* implicit */unsigned int) ((1534947218) / (arr_40 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 + 3] [i_8 + 2])))), (((((/* implicit */_Bool) arr_50 [i_9 - 1] [i_8 - 1] [i_8])) ? (arr_22 [i_8 + 3]) : (((/* implicit */unsigned int) arr_49 [(unsigned char)6] [i_9] [i_8] [i_9 - 3])))));
                    arr_52 [i_8] [i_8] = ((arr_5 [i_8] [i_8 + 1] [17U] [i_9 - 2]) & (0U));
                }
                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((max((((3909075135U) >> (((var_2) + (1717394613))))), (126523270U))) != (min((2291422856U), (((/* implicit */unsigned int) var_2)))))))));
            }
        } 
    } 
}
