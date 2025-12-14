/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12785
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
    var_18 = var_14;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0 + 2])) | (((/* implicit */int) arr_0 [i_0 + 1])))) - (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_14))))));
        arr_4 [i_0] [i_0] = max((max((((/* implicit */unsigned short) max(((_Bool)1), (arr_2 [i_0] [i_0])))), ((unsigned short)40427))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)7810))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (unsigned short)31840)) : (((/* implicit */int) var_9)))) < (((/* implicit */int) arr_0 [i_1]))))), ((((((_Bool)1) ? (((/* implicit */int) (unsigned short)31438)) : (((/* implicit */int) (unsigned short)17420)))) - (((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) var_3))))))));
        var_20 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)19375)) ? (((/* implicit */int) (unsigned short)42099)) : (((/* implicit */int) arr_3 [i_1] [(unsigned short)1])))) << (((/* implicit */int) arr_3 [i_1] [i_1]))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)45912)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            arr_11 [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) min((arr_1 [i_1]), (arr_9 [i_2])))) : ((-(((/* implicit */int) arr_2 [i_1] [i_2]))))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                var_21 ^= ((_Bool) arr_3 [i_3 + 1] [i_3 + 1]);
                arr_16 [i_1] [i_3 + 1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((unsigned short) var_4));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 1])))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_20 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_18 [i_1] [i_3 + 1])) - (((/* implicit */int) var_8))))));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 1; i_6 < 13; i_6 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) (_Bool)1);
                    arr_25 [i_1] [i_3 + 1] [i_5] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                }
                for (unsigned short i_7 = 1; i_7 < 13; i_7 += 1) /* same iter space */
                {
                    arr_29 [(unsigned short)15] [i_1] [i_1] = (_Bool)1;
                    var_24 = ((/* implicit */_Bool) ((arr_3 [i_3 + 1] [i_7 - 1]) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_7 - 1])) : (((/* implicit */int) arr_3 [i_3 + 1] [i_7 - 1]))));
                    var_25 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [(unsigned short)2])) ? (((/* implicit */int) arr_17 [i_1] [i_3] [i_5] [i_1])) : (((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) ((var_15) ? (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned short)28658))))) : (((/* implicit */int) (_Bool)1))));
                        arr_32 [i_1] [i_3] [i_5] [i_7 + 2] [(_Bool)1] = ((unsigned short) arr_24 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_7 + 2]);
                        var_27 = ((unsigned short) arr_21 [i_8 - 1] [i_1] [i_5] [i_5] [i_1] [(unsigned short)13]);
                        arr_33 [(_Bool)1] [i_3] [i_5] [i_7] [i_1] [i_8 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)42968))));
                    }
                    for (unsigned short i_9 = 1; i_9 < 15; i_9 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) (unsigned short)32265);
                        var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1]))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9] [i_9] [(_Bool)1] [i_9 + 1] [i_9 - 1])) ? (((/* implicit */int) arr_28 [i_3 + 1] [i_3 + 1] [i_3] [i_3])) : (((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 1] [i_1]))));
                        var_31 ^= ((_Bool) var_13);
                    }
                    for (unsigned short i_10 = 1; i_10 < 15; i_10 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */_Bool) var_2);
                        arr_38 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_10] [i_1] [(_Bool)0] [i_7 - 1] [i_1] [(unsigned short)11])) ? (((/* implicit */int) arr_19 [i_1])) : (((/* implicit */int) (!(arr_24 [i_1] [i_3 + 1] [i_1] [i_7]))))));
                        arr_39 [i_1] [(_Bool)1] [i_5] [i_5] [i_5] [i_1] [i_10] = ((/* implicit */unsigned short) arr_13 [i_1] [i_1] [i_7]);
                    }
                    var_33 = arr_13 [i_1] [i_1] [i_5];
                }
                for (unsigned short i_11 = 1; i_11 < 13; i_11 += 1) /* same iter space */
                {
                    var_34 ^= ((/* implicit */unsigned short) (_Bool)1);
                    var_35 ^= ((unsigned short) arr_2 [i_1] [i_3 + 1]);
                    var_36 ^= ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_9 [i_3])))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31589)) ? (((/* implicit */int) arr_27 [i_1] [i_12 - 1] [(unsigned short)0] [(unsigned short)0] [(_Bool)0] [i_12])) : (((/* implicit */int) arr_17 [i_12] [i_12] [i_5] [(unsigned short)10]))))) || (((/* implicit */_Bool) var_4)))))));
                        var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_31 [i_1]))));
                        var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_5]))));
                        arr_47 [i_1] [i_3] [(_Bool)1] [i_1] [i_12] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned short i_13 = 4; i_13 < 15; i_13 += 3) 
                {
                    arr_50 [i_1] [i_1] [i_5] [i_13] = ((/* implicit */_Bool) (unsigned short)24111);
                    arr_51 [i_1] = (_Bool)1;
                    arr_52 [(unsigned short)13] [i_1] [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_13 - 2]))));
                }
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_55 [i_1] [i_1] [i_14] = arr_23 [i_1] [(_Bool)1] [i_14] [i_14] [i_14];
                var_40 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_3 + 1] [i_1]))));
            }
            var_41 = ((/* implicit */_Bool) ((unsigned short) arr_42 [i_1] [i_3 + 1] [i_3 + 1] [i_3]));
            var_42 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1]))));
        }
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            var_43 = arr_23 [i_1] [i_1] [i_1] [i_1] [i_1];
            var_44 -= ((unsigned short) arr_21 [i_1] [(unsigned short)8] [i_1] [i_15] [i_15] [i_15]);
        }
        arr_58 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((arr_23 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_49 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)36868))))))) ? (((arr_36 [i_1] [i_1]) ? (((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_54 [i_1] [i_1] [i_1] [i_1])), (arr_1 [i_1])))))) : (max(((+(((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)19208)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_43 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_35 [i_1] [i_1] [(unsigned short)0] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_44 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) > (((/* implicit */int) var_15)))))));
    }
}
