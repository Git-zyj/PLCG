/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164334
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
    var_10 += ((/* implicit */_Bool) var_4);
    var_11 += ((/* implicit */unsigned short) min((max((((((/* implicit */int) var_2)) << (((((/* implicit */int) var_0)) - (38741))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (unsigned short)21841)))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)65524))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned short)65523)), (((((/* implicit */int) (unsigned short)65523)) + (((/* implicit */int) (unsigned short)65521)))))) + (((/* implicit */int) max(((unsigned short)27), (((/* implicit */unsigned short) (signed char)125)))))));
        var_13 = ((/* implicit */_Bool) (((-(((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_1 [i_0]))))))) ^ (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-123)))) << ((((-(((/* implicit */int) arr_1 [i_0])))) + (20773)))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (((((/* implicit */int) min((arr_1 [(unsigned short)4]), (((/* implicit */unsigned short) (signed char)-52))))) * (((((/* implicit */int) (unsigned short)38277)) / (((/* implicit */int) (unsigned short)46421))))))));
        var_14 = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_0 [(unsigned short)8] [i_0])))));
    }
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = arr_7 [i_1] [i_1 + 2] [i_1 - 1];
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19)) ? (((((/* implicit */_Bool) (unsigned short)38277)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_6 [i_2]))));
        }
        arr_10 [i_1] = ((/* implicit */unsigned short) var_2);
    }
    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                for (signed char i_6 = 1; i_6 < 19; i_6 += 4) 
                {
                    {
                        arr_21 [i_3 + 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) var_5))))))) ? (max((((((/* implicit */_Bool) arr_3 [i_3 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_3])))), (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)561)) << (((((/* implicit */int) (unsigned short)64961)) - (64959)))))) ? (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_19 [i_6])))) : (((((/* implicit */int) arr_17 [i_3] [i_5] [i_6])) << (((((/* implicit */int) (unsigned short)21918)) - (21893)))))))));
                        arr_22 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (_Bool)0);
                    }
                } 
            } 
            var_17 = (((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38280))))));
            /* LoopSeq 3 */
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 2] = ((/* implicit */unsigned short) (-(max((((((/* implicit */int) (signed char)15)) ^ (((/* implicit */int) (signed char)25)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-56)) != (((/* implicit */int) arr_1 [i_3])))))))));
                            arr_33 [i_7] [i_4] [i_7] [i_8] [i_9] [i_7] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (unsigned short)64813)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_1))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((signed char) (signed char)48))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)20)) << (((/* implicit */int) (_Bool)1))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) (signed char)-52))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) ? ((~((((_Bool)1) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (unsigned short)56991)))))) : (((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_3 - 2])) ? (((/* implicit */int) arr_11 [i_3 + 3])) : (((/* implicit */int) arr_23 [i_3 + 3] [i_3 + 1] [i_10] [i_10])))) ^ ((~(((/* implicit */int) (unsigned short)11))))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_3] [i_3] [i_3] [i_3] [i_3])) << (((((/* implicit */int) ((signed char) (signed char)-46))) + (48)))))) ? (((var_8) ? (((/* implicit */int) ((unsigned short) (signed char)72))) : (((/* implicit */int) arr_12 [i_3 - 2] [i_3 + 3])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)24553)) : (((/* implicit */int) (unsigned short)9))))) ? (((((/* implicit */int) arr_17 [i_3] [i_4] [i_4])) << (((((/* implicit */int) var_4)) + (35))))) : (((/* implicit */int) ((((/* implicit */int) arr_26 [i_3] [i_3] [i_3] [i_3] [i_3])) != (((/* implicit */int) arr_6 [i_10])))))))));
                }
                var_23 |= ((/* implicit */_Bool) ((unsigned short) var_3));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) min((((signed char) max(((signed char)-116), (((/* implicit */signed char) (_Bool)1))))), (var_4)));
                /* LoopNest 2 */
                for (signed char i_12 = 2; i_12 < 18; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        {
                            var_25 = max(((unsigned short)30614), (((/* implicit */unsigned short) (signed char)108)));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_13] [i_11] [i_3] [i_3])) << (((((/* implicit */int) var_0)) - (38754)))));
                            arr_43 [i_3] [i_4] [i_11] [i_3] [i_13] [(unsigned short)0] = ((/* implicit */signed char) max((max((((((/* implicit */int) var_0)) | (((/* implicit */int) (unsigned short)15088)))), (((/* implicit */int) (signed char)101)))), (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)44651)) ^ (((/* implicit */int) (_Bool)0))));
                /* LoopSeq 2 */
                for (unsigned short i_14 = 1; i_14 < 20; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_3 + 2])) != (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)58)) != (((/* implicit */int) (_Bool)1))))) != (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (signed char)72))))))))));
                        var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)25914)))) : (((((/* implicit */int) var_0)) << (((/* implicit */int) arr_38 [i_4])))))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)56991)) != (((((/* implicit */int) arr_8 [i_11])) | (((/* implicit */int) (_Bool)1)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 1; i_16 < 20; i_16 += 1) 
                    {
                        arr_50 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_3 + 3] [i_3 + 1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_15 [(_Bool)1])) ? (((/* implicit */int) arr_45 [i_3] [i_3] [i_11] [i_14] [i_16])) : (((/* implicit */int) var_2))))));
                        var_30 = ((/* implicit */unsigned short) (signed char)-32);
                        arr_51 [i_11] [i_4] [i_11] [i_11] [i_16] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                        var_31 = ((/* implicit */signed char) (+((((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-115))))));
                        arr_52 [i_4] [i_11] [i_4] [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) arr_34 [i_11])) && (((/* implicit */_Bool) var_3)));
                    }
                    var_32 = ((/* implicit */unsigned short) ((arr_17 [i_3 + 1] [i_11 - 1] [i_14 + 1]) ? ((~(((/* implicit */int) arr_17 [i_3 - 1] [i_11 - 1] [i_14 - 1])))) : (((/* implicit */int) min(((signed char)88), (((/* implicit */signed char) (_Bool)1)))))));
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)0)))) ^ ((-(((/* implicit */int) var_0)))))))));
                }
                /* vectorizable */
                for (signed char i_17 = 3; i_17 < 20; i_17 += 2) 
                {
                    arr_56 [i_11] [i_11] [i_4] [(signed char)12] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)96)) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (signed char i_18 = 3; i_18 < 21; i_18 += 3) 
                    {
                        arr_59 [i_3] [i_11] [(_Bool)1] [i_17] [i_18] = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)61879)));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_3 [i_17]))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (_Bool)0))))));
                    }
                    var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) arr_29 [i_3] [i_3] [i_4] [i_3] [i_17] [i_17 - 2])))) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_34 [i_11])) : (((/* implicit */int) arr_30 [i_3] [i_11] [i_3] [i_3]))))));
                }
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) /* same iter space */
                {
                    var_36 = (signed char)-63;
                    /* LoopSeq 4 */
                    for (unsigned short i_21 = 0; i_21 < 22; i_21 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) var_1)))));
                        var_38 = var_2;
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_7 [i_3 + 2] [i_3 + 2] [i_3])) << (((/* implicit */int) var_5))))));
                    }
                    for (unsigned short i_22 = 0; i_22 < 22; i_22 += 2) /* same iter space */
                    {
                        arr_73 [i_20] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_71 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1])) << (((/* implicit */int) max((var_2), ((_Bool)1)))))) ^ (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-125)))) ? (((/* implicit */int) arr_64 [i_3] [i_20] [i_19] [i_20])) : (((/* implicit */int) arr_8 [i_20]))))));
                        var_40 |= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)28)))))))) ^ (((/* implicit */int) min((var_3), (((/* implicit */signed char) (_Bool)1)))))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 22; i_23 += 2) /* same iter space */
                    {
                        arr_77 [i_3] [i_20] [i_3] [i_20] [i_23] [i_23] = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)9330)))) ^ (((/* implicit */int) min((var_4), (var_9))))));
                        var_41 = ((/* implicit */_Bool) min((var_41), ((((-(((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned short)65535)) - (65527))))))) != ((((((~(((/* implicit */int) (signed char)127)))) + (2147483647))) << ((((((-(((/* implicit */int) var_3)))) + (32))) - (5)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_24 = 0; i_24 < 22; i_24 += 2) /* same iter space */
                    {
                        var_42 = (signed char)6;
                        var_43 -= ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) (_Bool)1)))));
                        arr_81 [i_3] [i_3] [i_20] [i_20] [i_24] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)30645))));
                        var_44 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)9325)) != (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) ((_Bool) arr_31 [i_24] [i_24])))));
                        arr_82 [(signed char)4] [i_20] [i_19] [i_19 - 1] [i_20] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)9313)) << (((((/* implicit */int) (signed char)49)) - (49)))))));
                    }
                    arr_83 [i_19] [i_3] [i_20] = ((/* implicit */unsigned short) (signed char)49);
                }
                /* vectorizable */
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) /* same iter space */
                {
                    var_45 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1))))) != ((+(((/* implicit */int) (signed char)-109)))));
                    /* LoopSeq 1 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_88 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9299)))))));
                        var_46 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                    }
                    var_47 = ((/* implicit */_Bool) min((var_47), (((_Bool) var_4))));
                }
                var_48 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_28 [i_3] [i_4] [i_4] [i_3 - 1] [i_19] [i_4])) : (((/* implicit */int) var_1))));
            }
        }
        arr_89 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56186))));
        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) max((var_3), (arr_30 [i_3] [i_3] [i_3] [i_3 + 1]))))) ? (max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)55821)))) : (((/* implicit */int) (signed char)59))));
    }
}
