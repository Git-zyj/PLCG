/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178752
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((_Bool) (~(((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0]))));
    }
    var_13 -= ((/* implicit */unsigned char) ((var_11) ? (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)15)))) >= (((/* implicit */int) var_7))))) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_1 - 2] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_2])))))))));
                /* LoopSeq 4 */
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max(((unsigned char)127), (arr_6 [i_2] [i_3])))) ? (((/* implicit */int) max((arr_14 [i_1 + 2] [i_2]), ((_Bool)1)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_14 [i_2] [i_2]), (arr_4 [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_8 [i_1 + 3] [i_5 - 1] [i_5 - 1]))));
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_2]);
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)188)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 1] [i_1 + 3])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])))))) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_18 [i_2] [i_2] [i_3] [i_2] [i_2])))))));
                }
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) max((((_Bool) var_1)), (((_Bool) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_27 [i_1] [i_2] = ((unsigned char) max((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) arr_20 [i_1] [i_2] [i_2] [i_6] [i_1])) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((unsigned char) ((((/* implicit */_Bool) arr_28 [i_8 + 4] [i_7] [i_7] [i_2] [i_1])) ? (((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)108)))) : (((/* implicit */int) arr_16 [i_7] [i_1] [i_7])))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), ((_Bool)0)));
                                var_20 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                                arr_33 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (((arr_4 [i_7]) ? (((/* implicit */int) arr_16 [i_8] [i_2] [i_6])) : (((/* implicit */int) (unsigned char)236)))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [i_1] [i_7]))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_8] [i_7] [i_2] [i_1 - 1]))))) ? (((/* implicit */int) max((var_11), (arr_4 [i_1])))) : (((((/* implicit */int) arr_23 [i_1] [i_2] [i_2])) + (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_2] [i_8] [i_1])))))) : (((/* implicit */int) (!(arr_8 [i_8 + 1] [i_6] [i_1 - 2]))))));
                                arr_34 [i_2] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                }
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    arr_39 [i_1] [i_2] [i_9] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) > ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) (_Bool)1))));
                    var_21 *= (unsigned char)21;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            arr_45 [i_2] [i_1] [i_1] [i_2] [i_9] [i_10] [i_11] = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_9] [i_10] [i_9] [i_1 + 2])) / (((((/* implicit */int) arr_9 [i_1 + 3] [i_1 + 3] [i_2])) * (((/* implicit */int) (unsigned char)40))))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_9] [i_10] [i_9] [i_1 + 2])) * (((((/* implicit */int) arr_9 [i_1 + 3] [i_1 + 3] [i_2])) * (((/* implicit */int) (unsigned char)40)))))));
                            arr_46 [i_2] [i_2] [i_2] [i_9] [i_10] [i_11] = (!(var_2));
                            var_22 = ((((((/* implicit */int) var_1)) * (((/* implicit */int) var_3)))) >= (((/* implicit */int) arr_4 [i_1 + 2])));
                        }
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((_Bool) var_6)))));
                        arr_47 [i_2] = var_10;
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_52 [i_9] [i_9] [i_2] [i_9] = arr_37 [i_1] [i_2] [i_1] [i_2];
                        var_24 -= ((((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_1 - 1] [i_1])) && (arr_38 [i_1 - 2]));
                        var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_1]))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_56 [i_2] = arr_9 [i_1] [i_13] [i_2];
                        var_26 -= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_1 - 2] [i_1 + 3]))))) > ((-(((/* implicit */int) var_3)))));
                    }
                    arr_57 [i_1] [i_2] [i_2] = (unsigned char)255;
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        arr_63 [i_2] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)98)) * (((/* implicit */int) (_Bool)1))));
                        var_27 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_55 [i_1] [i_2] [i_14] [i_14])) % ((+(((/* implicit */int) arr_49 [i_15] [i_1] [i_2] [i_1] [i_1]))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        arr_66 [i_16] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_23 [i_1] [i_2] [i_14])) : (((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */int) (unsigned char)233)) : (((var_1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_5))));
                    }
                    arr_67 [i_2] = (unsigned char)234;
                }
            }
        } 
    } 
}
