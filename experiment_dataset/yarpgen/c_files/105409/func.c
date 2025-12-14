/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105409
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((_Bool) ((arr_1 [i_0]) + (((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(((/* implicit */int) var_16)))) : (min((-1086488586), (-1086488571))))), (((/* implicit */int) arr_3 [i_0] [i_1]))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 = ((/* implicit */int) arr_9 [i_2] [i_1] [i_2]);
                var_18 = (!(((/* implicit */_Bool) ((int) arr_6 [i_1] [i_2]))));
                var_19 = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -369082948))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (int i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (_Bool)1))));
                            arr_16 [i_0] [i_5] [i_0] [i_0] [i_0] |= ((arr_7 [i_0] [i_1] [i_4] [i_5 - 2]) && (((/* implicit */_Bool) var_12)));
                            var_21 = ((int) ((((/* implicit */int) arr_6 [i_0] [i_0])) & (((/* implicit */int) min((var_3), ((_Bool)1))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    arr_21 [i_0] [9] [i_3] [9] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_3] [(_Bool)1])) : (((arr_15 [i_6] [i_3] [i_1] [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */int) var_16))))));
                    arr_22 [i_6] [i_0] [i_1] [i_0] [i_0] = var_14;
                    arr_23 [i_0] [i_1] [i_1] [i_3] = ((_Bool) (_Bool)1);
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_22 += ((((/* implicit */_Bool) arr_12 [i_7] [12] [i_1] [12] [i_0])) ? ((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_3])))) : (((/* implicit */int) (_Bool)1)));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_7] [i_0] [i_1] [i_0] = var_12;
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_6)));
                        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */int) arr_7 [i_7] [i_3] [i_1] [i_0])) * (((/* implicit */int) arr_0 [i_3]))))));
                        var_24 = ((/* implicit */_Bool) arr_25 [i_8] [9] [9] [i_1]);
                    }
                    var_25 = arr_24 [i_1] [i_3];
                    arr_30 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) (((_Bool)1) ? (1086488571) : (((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_3] [i_0])))));
                }
            }
            for (int i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [i_0] [i_9] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_9] [i_9]))))) ? (((/* implicit */int) min((((var_13) > (((/* implicit */int) arr_6 [i_0] [i_0])))), (((_Bool) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) || ((_Bool)1)))))))));
                var_27 = ((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_0] [i_0] [i_0]);
            }
            /* LoopSeq 1 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_28 = ((/* implicit */int) max((var_28), (min(((~(min((var_9), (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((arr_14 [(_Bool)1]), (var_4)))) : (arr_25 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            var_29 += ((((/* implicit */_Bool) (-(min((-554735405), (((/* implicit */int) arr_15 [i_12] [i_11] [i_10 - 1] [i_1] [i_0]))))))) ? (((/* implicit */int) (_Bool)1)) : (min((((1476410819) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_0))))))));
                            var_30 *= ((arr_15 [i_10] [i_1] [(_Bool)1] [i_10] [i_10 - 1]) ? (((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_11])) << (((/* implicit */int) arr_31 [i_0] [i_1] [i_10 - 1] [i_11])))) : ((~(((/* implicit */int) arr_15 [i_11] [i_12] [i_0] [i_12] [i_10 - 1])))));
                            var_31 *= min((((/* implicit */int) ((-1476410812) >= (arr_32 [i_1] [i_11] [i_12])))), (min((((int) arr_10 [i_1] [i_1] [i_10])), (((var_7) ? (arr_25 [i_0] [i_11] [i_10] [i_0]) : (268435455))))));
                            arr_41 [i_0] [i_0] = ((/* implicit */_Bool) ((-708573208) ^ ((-(((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))));
                            var_32 = ((/* implicit */_Bool) arr_1 [i_0]);
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_48 [i_0] [i_13 - 1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */int) (_Bool)1)), (134217726))) - (((((/* implicit */_Bool) -1476410812)) ? (((/* implicit */int) (_Bool)1)) : (-984941071)))));
                    var_33 = ((/* implicit */int) min((var_33), ((-(((int) var_3))))));
                    var_34 = ((int) ((int) ((int) var_16)));
                }
                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_13 - 1] [i_0] [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */int) (_Bool)1)))), (((arr_32 [i_13] [7] [i_0]) ^ (arr_42 [i_0])))))) ? (((arr_35 [i_13 - 1] [10]) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(1367519812))))) : ((-(((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_24 [i_13] [i_13])))))))));
            }
            for (int i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                arr_51 [i_0] [i_1] [i_15] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((var_3) ? (((/* implicit */int) arr_20 [i_0])) : (arr_17 [i_0] [i_0] [i_0] [i_15] [i_15]))))), (((var_10) ? (((/* implicit */int) arr_49 [i_15] [i_0] [i_15])) : (((/* implicit */int) arr_49 [i_0] [i_0] [i_15]))))));
                var_36 += (-(max((arr_36 [i_0] [i_0] [i_0] [i_1] [i_1] [i_15]), (((/* implicit */int) arr_13 [i_0] [i_1] [i_15] [i_15])))));
                var_37 = ((((/* implicit */int) arr_44 [i_15] [i_15] [i_1] [i_0])) << ((+(((/* implicit */int) arr_4 [i_0] [i_15])))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_38 += ((((_Bool) arr_49 [i_0] [(_Bool)1] [i_16])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) ? (((/* implicit */int) arr_19 [i_0] [i_0] [10] [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((int) (_Bool)1))))));
                var_39 = var_16;
            }
            var_40 += ((/* implicit */int) ((max((((/* implicit */int) arr_47 [i_1])), ((~(var_13))))) < (((int) var_5))));
        }
        var_41 = (((_Bool)1) ? (33554431) : (1476410813));
    }
    var_42 = (+((+(min((var_1), (var_1))))));
    var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((var_8), (var_4)))) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) ((_Bool) (_Bool)1))))) : (((((var_7) || ((_Bool)1))) ? (((((/* implicit */int) var_2)) >> (((var_13) - (1092935080))))) : (((/* implicit */int) ((var_14) < (((/* implicit */int) (_Bool)1)))))))));
}
