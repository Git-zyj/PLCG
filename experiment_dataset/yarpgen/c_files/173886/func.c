/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173886
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
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)105))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)1023))))), (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [7U] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned int) min((max((((/* implicit */short) arr_0 [i_0])), (((short) var_10)))), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_1))))) == (((/* implicit */int) ((_Bool) arr_0 [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_19 *= ((/* implicit */_Bool) max((((((((/* implicit */_Bool) 1647843310U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (arr_4 [i_1]))) | (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) | (1647843314U))))), (min((((/* implicit */unsigned int) (_Bool)1)), (4081722762U)))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((arr_1 [i_1]) ? (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) max(((_Bool)1), (var_10)))))) : (((/* implicit */int) var_13))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])))) ? (((arr_4 [i_1]) | (arr_4 [i_1]))) : ((-(arr_4 [i_1])))));
        arr_9 [i_1] = var_8;
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 15; i_4 += 2) 
                {
                    {
                        arr_18 [i_1] [i_4] [(short)15] [i_4] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)53))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (signed char)96))))))));
                            arr_21 [i_4] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)7242))));
                            var_21 = ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))))))));
                        }
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_19 [i_2 + 1] [i_2] [i_2] [i_4 - 3] [i_4]) ? (((/* implicit */int) arr_19 [i_2 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 3] [(short)3])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) arr_19 [i_2 - 1] [i_3] [i_4 + 1] [i_4 + 2] [(_Bool)1])))))));
                        var_23 -= ((/* implicit */unsigned int) max((var_2), (((signed char) max((var_10), (var_5))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) arr_0 [i_6]);
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) (short)32756))), (max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2647123998U))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_8 = 3; i_8 < 15; i_8 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 1; i_9 < 16; i_9 += 1) 
                {
                    arr_33 [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)14))));
                    var_26 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) : (3983596648U))));
                    /* LoopSeq 1 */
                    for (short i_10 = 2; i_10 < 14; i_10 += 2) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (_Bool)1))));
                        arr_37 [i_8] [(signed char)13] [i_8] [i_10 - 2] = ((/* implicit */_Bool) var_16);
                        arr_38 [i_6] [i_7] [i_7] [i_9] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (short)-5930)) ? (((/* implicit */int) arr_14 [i_10] [i_7] [(signed char)1] [i_9])) : (((/* implicit */int) arr_5 [i_10])))) : (((/* implicit */int) arr_20 [i_6] [i_10 + 3] [i_9] [i_9] [i_10 + 3] [i_7]))));
                    }
                }
                arr_39 [i_6] [i_8] [i_8 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1338993177U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)63))))) : (((var_10) ? (arr_6 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                arr_40 [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((((/* implicit */_Bool) var_12)) ? (3142980861U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_8 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-22)))))));
                var_28 &= ((/* implicit */signed char) (~(((/* implicit */int) ((3020960571U) > (var_3))))));
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_29 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (854300866U))) * ((((_Bool)0) ? (2821435142U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_7] [i_11] [i_6])))))));
                    arr_43 [i_6] [i_7] [i_7] [i_8] [i_6] = ((/* implicit */signed char) ((short) (signed char)94));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_47 [i_6] [(short)15] [i_8] = ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) arr_10 [i_8 - 1] [i_8 + 1] [i_8 + 2])) : (((((/* implicit */int) var_12)) - (((/* implicit */int) (_Bool)1))))));
                    var_30 *= ((/* implicit */signed char) ((unsigned int) arr_14 [i_8 + 1] [i_8] [i_8] [i_8 - 2]));
                    arr_48 [i_6] [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned int) var_11);
                    arr_49 [i_8] [i_8] [i_7] [i_7] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) (signed char)-107)) != (((/* implicit */int) (short)-4))));
                    var_31 = ((/* implicit */unsigned int) var_5);
                }
                for (short i_13 = 4; i_13 < 16; i_13 += 2) 
                {
                    arr_52 [i_8] [i_8] [i_7] [i_6] [i_8] [i_6] = ((/* implicit */short) arr_11 [i_6] [i_6] [i_6]);
                    arr_53 [i_8] [i_8] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8] [i_8] [i_8])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)24)) & (((/* implicit */int) var_5))))) : (arr_28 [i_6] [i_8 - 3] [i_13 - 1])));
                }
            }
            /* vectorizable */
            for (signed char i_14 = 3; i_14 < 15; i_14 += 2) /* same iter space */
            {
                arr_56 [i_7] [i_14] [i_7] [i_14] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) / (((/* implicit */int) arr_15 [i_14] [i_7] [i_14] [i_6])))) > (((/* implicit */int) ((short) 2695981489U)))));
                /* LoopSeq 4 */
                for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    var_32 = ((/* implicit */short) ((arr_16 [i_6] [i_14 + 1] [i_14] [i_14 - 3]) ? (3591788568U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_59 [i_14] [i_14 - 2] [i_14 - 1] [(_Bool)1] [i_14] [i_7] = ((/* implicit */signed char) ((arr_4 [i_6]) + (arr_4 [i_14 - 1])));
                }
                for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    var_33 &= ((/* implicit */unsigned int) var_0);
                    var_34 = var_8;
                }
                for (unsigned int i_17 = 2; i_17 < 14; i_17 += 2) 
                {
                    arr_65 [i_17] [i_7] [i_7] [i_7] |= ((/* implicit */short) ((((/* implicit */int) arr_13 [i_6] [i_6])) ^ ((~(((/* implicit */int) arr_27 [i_6] [i_6] [i_6]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2721673741U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7] [i_7] [i_14] [i_17 + 3] [i_18] [i_7])))));
                        arr_68 [i_17] [i_7] [i_14] [i_14] [i_14] = ((signed char) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_1))));
                        arr_69 [i_6] [i_6] [i_7] [(short)1] [i_17] [i_14] = ((/* implicit */short) 1598985802U);
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_14] [i_17] [i_17])) ? (1151986435U) : (arr_34 [i_18])))) ? ((+(((/* implicit */int) (signed char)12)))) : (((/* implicit */int) arr_54 [i_6] [i_7] [i_7] [i_17]))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_37 -= ((/* implicit */signed char) (~((+(((/* implicit */int) var_7))))));
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_39 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3033998115U)) ? (((/* implicit */int) arr_44 [i_6] [i_6] [i_14] [i_14] [i_6])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) var_0))));
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_7] [(_Bool)1] [i_7])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (((unsigned int) 1151986435U)) : (arr_26 [i_14 - 1])));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_7] [i_14] [i_14 + 2] [i_14])) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_15))))));
                        arr_74 [i_6] [i_6] [i_14] [5U] = ((/* implicit */_Bool) arr_67 [i_6] [i_7] [i_14] [i_6] [14U]);
                        var_42 = ((/* implicit */short) var_4);
                    }
                }
                for (short i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    var_43 = ((/* implicit */short) (-(((/* implicit */int) arr_16 [i_6] [i_14 - 2] [i_14] [(_Bool)1]))));
                    /* LoopSeq 1 */
                    for (short i_22 = 0; i_22 < 17; i_22 += 2) 
                    {
                        arr_81 [i_14] [9U] [i_14] [i_14] [i_7] = ((/* implicit */short) (+(((/* implicit */int) ((var_15) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                        arr_82 [i_14] [i_7] [i_14] [i_21] [i_22] [i_22] = ((/* implicit */_Bool) var_0);
                    }
                }
            }
            var_44 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_11 [i_6] [i_6] [i_7]))) ? ((-(arr_46 [i_7] [i_7] [i_7]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_6] [i_7] [i_6] [(signed char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_15)))) ? (((((/* implicit */_Bool) arr_34 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_29 [(short)4] [i_6] [i_7] [(short)4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1598985815U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
        }
        for (unsigned int i_23 = 0; i_23 < 17; i_23 += 2) /* same iter space */
        {
            arr_85 [i_6] = ((/* implicit */signed char) (!((((~(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (signed char)-118))))));
            arr_86 [i_6] [i_6] [i_23] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_25 [i_6] [i_6] [i_23])) <= (((/* implicit */int) ((signed char) arr_54 [i_6] [i_6] [i_6] [(short)8]))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_11))))), (4245609723U))) : (max((min((((/* implicit */unsigned int) var_13)), (arr_26 [i_6]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)1)))))))));
            arr_87 [i_6] [i_6] [15U] = ((/* implicit */signed char) var_14);
            arr_88 [i_23] &= ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (short)-19904)))), (((/* implicit */int) ((((/* implicit */_Bool) 642470042U)) && (((/* implicit */_Bool) var_16))))))), (((/* implicit */int) var_0))));
        }
    }
    for (unsigned int i_24 = 0; i_24 < 17; i_24 += 3) /* same iter space */
    {
        arr_91 [i_24] [i_24] |= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        arr_92 [i_24] [i_24] = ((/* implicit */short) var_7);
        arr_93 [i_24] &= var_1;
        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) var_9))));
    }
}
