/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183037
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
    var_11 = var_2;
    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_7)))));
    var_13 = var_4;
    var_14 = ((unsigned short) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_5 [i_2 + 2] [i_2 + 1] [i_2 + 2])))));
                    var_16 = (unsigned short)11431;
                    arr_9 [i_2] = ((/* implicit */_Bool) ((arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) min((var_4), (arr_0 [i_0 - 3]))))));
                }
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    arr_12 [i_3] [i_0 - 4] [i_0 - 4] = ((min((((/* implicit */int) ((unsigned short) (unsigned short)22844))), (((((/* implicit */_Bool) arr_5 [i_3] [i_1] [i_3])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)4095)))))) <= (((/* implicit */int) var_9)));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0 - 2])))))));
                }
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((var_0) ? (((/* implicit */int) arr_15 [i_0] [i_0 - 3] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))))) ? (((arr_15 [i_0 - 4] [i_1] [i_4]) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_1])) != (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_4]))))) : (((arr_10 [i_4] [i_1] [(unsigned short)2] [i_0]) ? (((/* implicit */int) arr_14 [i_4] [i_1] [i_0] [i_0 - 3])) : (((/* implicit */int) (unsigned short)59272)))))) : (((/* implicit */int) ((unsigned short) arr_8 [i_0 - 1] [i_1] [i_1])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_4] [i_1] [i_0 - 2])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_6 + 1] [i_6 - 2])) + (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_6 + 1] [i_6 - 2]))))) ? (((/* implicit */int) ((unsigned short) arr_19 [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6] [i_6] [i_6] [i_6]))) : (((/* implicit */int) var_5))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_9)))) * ((~(((/* implicit */int) var_2))))));
                            var_21 = ((/* implicit */unsigned short) ((((arr_10 [i_6 + 1] [i_5] [i_4] [i_1]) ? (((((/* implicit */int) var_0)) | (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) var_10))))) + (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)4102)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 3] [i_0 - 1] [(_Bool)1])))) : ((~(((/* implicit */int) (unsigned short)45731))))))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_2)))))));
                            var_23 &= ((/* implicit */unsigned short) (((_Bool)0) || ((_Bool)1)));
                        }
                        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)4105))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40156))))) : (((/* implicit */int) max(((unsigned short)4105), (((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_0] [i_0])) >= (((/* implicit */int) arr_7 [i_0] [i_0] [i_5]))))))))));
                    }
                    var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 4])) : (((/* implicit */int) arr_7 [i_0 - 4] [i_0 - 4] [i_0 - 2]))))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 4])) ? (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 - 3] [i_0] [i_0 + 1])))) : (((/* implicit */int) ((unsigned short) arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                    arr_23 [i_0] [i_1] [i_4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_4] [i_4] [i_1] [i_0]) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_4] [i_4])) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_14 [i_0 - 2] [i_0 - 2] [i_1] [(unsigned short)2])) : (((/* implicit */int) ((unsigned short) var_5)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_15 [i_0 - 2] [i_1] [i_9])) < (((/* implicit */int) arr_15 [i_9] [i_1] [i_0 - 2])))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned short i_10 = 1; i_10 < 20; i_10 += 4) 
                            {
                                var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_8] [i_9] [i_10])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_28 [i_10 + 3] [i_10 + 3] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_7 [i_8] [(unsigned short)4] [i_10 + 1]))));
                                var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_0 [i_1])) : (((arr_10 [i_0] [i_8] [i_9] [i_9]) ? (((/* implicit */int) (unsigned short)6410)) : (((/* implicit */int) (unsigned short)65469))))));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 3])) + (((/* implicit */int) arr_30 [i_10 + 1] [i_10 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 4] [i_0 + 1]))));
                            }
                            /* vectorizable */
                            for (unsigned short i_11 = 4; i_11 < 20; i_11 += 1) 
                            {
                                arr_35 [i_0] [i_0 - 3] [i_1] [i_8] [i_9] [i_11] = ((/* implicit */unsigned short) ((_Bool) arr_32 [i_0 - 3] [i_0 - 4] [i_11 + 1]));
                                var_30 = ((/* implicit */unsigned short) min((var_30), (((unsigned short) (unsigned short)15242))));
                                var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_0] [i_9] [i_9] [i_11 + 1]))));
                                var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0 - 4] [i_0 - 3])) ? (((/* implicit */int) arr_30 [i_0] [i_1] [i_8] [i_8] [(unsigned short)9] [i_8])) : (((/* implicit */int) arr_16 [i_9] [i_8] [i_1] [i_0]))))) ? (((/* implicit */int) arr_31 [i_11] [i_1])) : (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_8] [(unsigned short)21])) : (((/* implicit */int) (unsigned short)50294))))));
                                arr_36 [i_0] [i_1] [i_8] [i_9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0] [i_0 - 2])) && (arr_28 [i_0 - 2] [i_11 - 2] [i_11 + 2] [i_11 + 3])));
                            }
                            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                            {
                                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((unsigned short) (unsigned short)2814)))));
                                arr_41 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_18 [i_9] [i_12]), (arr_18 [i_8] [i_12])))) ? (((/* implicit */int) (unsigned short)4108)) : (((/* implicit */int) min((min((((/* implicit */unsigned short) var_0)), ((unsigned short)62967))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)4))))))))));
                                var_34 = arr_1 [i_0];
                                var_35 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_8))))));
                                var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_0])) - (((((/* implicit */int) arr_14 [i_0 - 2] [i_0 - 4] [i_0 + 1] [i_0 - 1])) ^ (((/* implicit */int) (unsigned short)45978))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_13 = 2; i_13 < 19; i_13 += 3) 
                            {
                                var_37 = arr_21 [i_0 - 4] [i_1] [i_8] [i_1] [i_13];
                                arr_45 [i_1] [i_8] [i_9] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_0] [i_13 + 3] [i_8] [i_9] [i_0 - 1] [i_9])) <= (((/* implicit */int) (_Bool)0))));
                                var_38 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)5348)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)1)))) : (((((/* implicit */int) arr_18 [i_0 - 2] [(unsigned short)13])) % (((/* implicit */int) var_9))))));
                            }
                            var_39 = ((/* implicit */unsigned short) max((var_39), (arr_17 [i_0] [i_1] [i_8])));
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((unsigned short) arr_31 [i_0 - 1] [i_0 - 1]))));
                            arr_46 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47840)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)6087))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_31 [i_8] [i_8]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [(unsigned short)18] [(unsigned short)18])) ? (((/* implicit */int) (unsigned short)510)) : (((/* implicit */int) arr_34 [i_8] [i_1] [i_0]))))) ? ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned short) ((unsigned short) (_Bool)1))))));
                        }
                    } 
                } 
                arr_47 [i_0] [i_1] [(unsigned short)2] = ((/* implicit */_Bool) var_7);
            }
        } 
    } 
}
