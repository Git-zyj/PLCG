/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170505
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((var_8) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_1] [i_3])))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) : (((arr_0 [i_1] [i_2]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3])))))))))));
                        arr_9 [i_0] [i_1] [i_1] [i_3] [i_1] = ((unsigned char) max((((arr_5 [(unsigned char)4] [(unsigned char)1] [i_1] [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_1] [i_1] [(unsigned char)0])))), (((/* implicit */int) var_5))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_4]))))) ? ((+(((/* implicit */int) arr_11 [i_4] [(_Bool)1] [i_3] [(_Bool)1] [(_Bool)1] [i_0] [i_0])))) : (((((/* implicit */int) arr_4 [i_0] [i_0] [(_Bool)1])) * (((/* implicit */int) var_1))))));
                            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((arr_7 [i_0] [i_0] [i_2] [i_3]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1] [i_1 + 3] [i_1] [i_1 - 1] [i_1 - 1])))))));
                            arr_13 [i_0] [i_1] [(unsigned char)3] [i_3] [i_0] = ((((/* implicit */int) arr_3 [i_0] [(unsigned char)14])) < (((/* implicit */int) ((unsigned char) arr_4 [i_4] [(_Bool)1] [i_0]))));
                            arr_14 [(unsigned char)0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                            arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [(_Bool)1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1]))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5] [(unsigned char)12] [i_5 - 1])) >> (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1] [i_3] [i_3]))));
                            var_14 = ((/* implicit */unsigned char) ((arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5]) ? (((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1] [(unsigned char)6] [(unsigned char)3]))));
                            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_7 [i_1] [(unsigned char)9] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_0 [(_Bool)1] [i_1]))));
                            var_15 = var_1;
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_16 &= ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) << (((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 4])) - (22)))));
                            var_17 = arr_1 [i_2];
                            var_18 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_3 [i_1] [i_0])))) ^ (((((/* implicit */int) arr_2 [i_2] [i_1] [(unsigned char)9])) * (((/* implicit */int) var_6))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (_Bool)1))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_0] [i_6] [i_6] [i_2] [i_0])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned char)15] [i_0])))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [(_Bool)1] [i_3] [i_2] [i_3] [i_7] [i_3])))), (((/* implicit */int) arr_7 [i_0] [i_1] [(_Bool)1] [i_3]))));
                            arr_26 [i_7] [i_3] [(_Bool)0] [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) max((var_2), (arr_21 [i_0] [i_1 + 2] [i_1] [i_2] [i_3] [(unsigned char)5] [i_7])))) : (((/* implicit */int) arr_24 [i_1] [(_Bool)1] [i_1]))))) && (arr_18 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_2] [i_3] [(unsigned char)3])));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_0] [i_8] = ((/* implicit */unsigned char) arr_19 [i_1]);
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_8] [i_1] [i_2] [i_1] [i_8] = (_Bool)1;
                            arr_34 [i_9] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_8] [i_8 - 1] [i_8 - 1])) | (((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_22 [i_0] [(_Bool)1] [(_Bool)1] [i_8] [(unsigned char)11])) : (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_11 = 3; i_11 < 14; i_11 += 4) 
                        {
                            arr_41 [i_0] [i_10] [i_10] = ((/* implicit */_Bool) arr_32 [i_1 + 2] [(unsigned char)12] [i_1 + 2]);
                            var_21 -= ((/* implicit */_Bool) min((((((/* implicit */int) max(((_Bool)1), (arr_36 [(unsigned char)5] [i_1] [i_2] [i_10] [i_10])))) ^ (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))), (max(((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_0] [i_1 + 2] [(unsigned char)2] [i_2])))), (((/* implicit */int) var_5))))));
                            arr_42 [(_Bool)1] [i_10] [(unsigned char)14] [i_1] [i_10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_25 [(unsigned char)4] [(_Bool)1] [(_Bool)1])))) : (((((/* implicit */int) arr_31 [i_11] [i_10] [i_2] [i_1] [(_Bool)1] [(unsigned char)7])) * (((/* implicit */int) arr_30 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_0] [(unsigned char)8] [i_0] [i_0] [(_Bool)1] [i_0])) + (((/* implicit */int) arr_2 [i_11] [i_2] [i_1]))))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_19 [i_1 + 2])))) : (((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_21 [(_Bool)1] [i_0] [(unsigned char)3] [(_Bool)1] [i_10] [(unsigned char)14] [i_11])))))) : (((arr_22 [i_11 + 2] [i_11 + 2] [i_0] [(unsigned char)10] [i_11]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_11 - 3] [i_11 + 2] [i_2] [(unsigned char)11] [i_11] [(_Bool)1]))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            arr_45 [i_0] [i_10] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_10] [i_1 + 4] [i_12] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_1 + 4] [i_2] [i_10] [i_1 + 4] [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_12] [i_12] [i_1 + 4] [i_12] [i_2]))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (var_1)));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            arr_49 [i_10] [i_10] [i_10] [i_10] = ((((/* implicit */int) var_2)) < (((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))));
                            var_23 *= arr_44 [i_0] [(unsigned char)2] [i_2] [i_10] [i_13];
                            arr_50 [i_10] = ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_13] [i_13] [i_10] [i_2] [(unsigned char)9] [i_0] [i_0]))))) || (((/* implicit */_Bool) ((unsigned char) arr_37 [i_0] [(unsigned char)14] [i_10] [i_0] [i_0] [i_0]))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            var_24 &= ((/* implicit */unsigned char) arr_22 [i_0] [(_Bool)1] [i_2] [i_1 - 2] [i_0]);
                            var_25 ^= ((/* implicit */_Bool) ((max((((var_4) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) arr_8 [i_0])) * (((/* implicit */int) var_1)))))) << (((/* implicit */int) ((_Bool) arr_30 [i_1] [i_2] [i_14])))));
                        }
                        arr_54 [i_0] [i_10] [i_1] [i_2] [i_10] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_55 [i_2] [i_1] [i_1 + 2] [i_1] [i_1] |= ((/* implicit */unsigned char) ((min(((((_Bool)1) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_2] [i_10])) : (((/* implicit */int) var_4)))), (((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_2])) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_40 [i_10] [(_Bool)1] [(_Bool)1] [i_1] [i_0])) >> (((((/* implicit */int) arr_3 [i_0] [i_0])) - (28))))) : (((/* implicit */int) min((var_0), (arr_36 [i_0] [i_1] [i_0] [i_2] [i_0]))))))));
                        arr_56 [i_10] [(unsigned char)11] [i_2] [i_10] [i_0] = ((/* implicit */unsigned char) var_2);
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)177)) | (max((((((/* implicit */int) var_5)) * (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) arr_4 [(unsigned char)13] [i_1] [i_1])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] [i_10])) : (((/* implicit */int) var_3))))))));
                    }
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2] [i_1 + 2])) ? (((/* implicit */int) arr_35 [i_2])) : (((/* implicit */int) arr_35 [i_2]))))) ? (((/* implicit */int) arr_18 [(unsigned char)4] [(unsigned char)7] [(unsigned char)7] [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1])) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(_Bool)1] [i_0] [i_2] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_24 [i_1] [i_1] [(_Bool)1])))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)178)))))));
    var_29 += ((/* implicit */unsigned char) var_7);
    var_30 &= var_9;
    var_31 &= var_3;
}
