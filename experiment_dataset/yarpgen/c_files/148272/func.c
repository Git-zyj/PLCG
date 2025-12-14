/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148272
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned char) (unsigned char)63)), (((/* implicit */unsigned char) var_14))))) ? (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_11)))) : (((var_12) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)125))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_21 -= ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_9 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_2] [i_0])) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))));
            }
            for (unsigned char i_3 = 4; i_3 < 8; i_3 += 1) 
            {
                var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)31))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)64495)) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [(unsigned char)4] [i_3] [i_4])) : (((/* implicit */int) arr_13 [i_1] [i_1]))))));
                    var_24 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_0] [i_4 + 1]))));
                    var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)79))));
                }
                var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)32)) / (((/* implicit */int) (unsigned char)177))))));
                arr_14 [i_0] = (!(((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 - 2] [i_3 - 4])));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_17 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned short)55204)) + (((/* implicit */int) arr_5 [(unsigned char)9] [i_1]))))));
                arr_18 [i_0] = ((/* implicit */unsigned short) arr_15 [i_0]);
                arr_19 [i_1] |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_11 [i_5] [i_0] [i_0])) << (((((/* implicit */int) var_13)) - (60))))));
            }
            arr_20 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_0]))));
            arr_21 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)202)) | (((/* implicit */int) var_11)))) + (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_8)))))));
            var_27 ^= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)180)) * (((/* implicit */int) var_9))));
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
        {
            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)37882))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) arr_8 [i_6] [i_6] [i_0] [i_0]))));
            /* LoopSeq 4 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_8 = 3; i_8 < 9; i_8 += 3) 
                {
                    var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)8191))));
                    var_30 = ((/* implicit */_Bool) var_2);
                }
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 2; i_10 < 8; i_10 += 4) 
                    {
                        arr_35 [i_0] [i_0] [i_6] [i_6] [i_0] [i_9] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        var_31 ^= ((/* implicit */unsigned short) arr_29 [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1]);
                        var_32 = ((/* implicit */unsigned char) var_10);
                    }
                    arr_36 [i_9] [i_0] [i_7] [i_6] [i_0] [i_0] = var_11;
                }
                for (unsigned char i_11 = 1; i_11 < 6; i_11 += 3) 
                {
                    arr_40 [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0]);
                    arr_41 [i_6] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_12))));
                    arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_2))))));
                }
                var_33 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) arr_3 [i_6] [i_6])) : (((/* implicit */int) arr_15 [i_6]))))) ? (((((/* implicit */int) (unsigned short)37882)) | (((/* implicit */int) arr_23 [i_7] [i_0])))) : (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_38 [i_0] [i_0] [i_7] [(unsigned char)2] [i_7] [i_7]))))));
                arr_43 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_23 [i_0] [i_6]);
            }
            for (unsigned char i_12 = 3; i_12 < 9; i_12 += 1) 
            {
                arr_48 [i_0] [i_0] = (unsigned char)125;
                var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_0] [(unsigned char)5] [(unsigned char)7])) % (((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned char)153)) : ((~(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 1; i_14 < 7; i_14 += 3) 
                    {
                        var_35 += ((/* implicit */_Bool) ((((arr_28 [i_13] [(unsigned char)3] [i_0]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))) & (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
                        arr_55 [i_0] [i_0] [i_12 - 2] [i_6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_14 + 1] [i_14 + 2] [i_12 + 1] [i_0])) % (((/* implicit */int) arr_7 [i_14 - 1] [i_14 + 3] [i_12 - 3] [i_0]))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_58 [i_0] [(unsigned char)4] = ((unsigned short) arr_33 [i_0] [i_13] [(_Bool)0] [i_12 + 1] [(unsigned char)7] [i_15]);
                        arr_59 [i_6] [i_6] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_0] [i_6] [(unsigned char)1] [i_0] [i_15])) ? (((/* implicit */int) arr_24 [i_12 - 1] [i_12 - 3] [i_12 - 2])) : (((/* implicit */int) arr_11 [i_12 - 3] [i_12 - 3] [i_12 - 2]))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_62 [i_0] [i_6] [i_6] [i_6] [i_6] = var_4;
                        var_36 = ((_Bool) arr_29 [i_6] [i_12 - 3] [i_6] [i_6] [i_6] [i_6]);
                        arr_63 [i_12] [i_6] [i_0] [i_6] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_37 [(unsigned char)9] [i_6] [i_6] [(unsigned char)1] [i_0] [i_6])))) : ((-(((/* implicit */int) var_11))))));
                        arr_64 [i_0] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_12 + 1] [i_16] [i_16])) <= (((/* implicit */int) arr_39 [i_12 + 1] [i_12 + 1]))));
                        arr_65 [i_0] [i_0] [i_0] = ((unsigned char) (_Bool)1);
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        arr_68 [(unsigned short)9] [(unsigned short)9] [i_0] [i_17] = ((unsigned short) var_5);
                        var_37 = ((unsigned short) arr_29 [i_0] [i_6] [i_6] [(unsigned char)8] [i_12 + 1] [i_13]);
                        arr_69 [i_6] [i_6] [i_12] [(unsigned char)8] [i_17] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(var_16))))));
                        var_38 |= ((/* implicit */_Bool) ((unsigned short) (unsigned short)1055));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41666)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                    }
                }
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    var_40 += ((_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_6] [i_6] [i_6]))));
                    arr_73 [i_0] [i_6] [(_Bool)1] [i_6] = ((/* implicit */_Bool) var_0);
                }
                for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    var_41 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [(unsigned char)1] [(_Bool)1] [(unsigned short)6] [(_Bool)0])) : (((((/* implicit */int) (unsigned short)31744)) * (((/* implicit */int) var_0))))));
                    var_42 = arr_45 [i_0] [i_6] [i_12] [i_19];
                    arr_76 [i_0] = ((arr_61 [i_12] [i_12 - 1] [i_12] [i_12 - 2] [(unsigned char)2]) && (arr_61 [i_12] [i_12 - 1] [i_12] [i_12 - 2] [i_12 - 1]));
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_19] [i_12])) ? (((/* implicit */int) arr_27 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12])) : (((/* implicit */int) arr_33 [i_12 - 3] [(unsigned short)9] [(unsigned short)0] [i_12] [i_12 + 1] [i_12]))));
                }
            }
            for (unsigned short i_20 = 0; i_20 < 10; i_20 += 1) 
            {
                var_44 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_61 [i_0] [i_0] [(unsigned char)2] [i_0] [i_0])) | (((((/* implicit */int) arr_53 [i_6])) - (((/* implicit */int) var_14))))));
                arr_79 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_14);
            }
            for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
            {
                var_45 += var_17;
                var_46 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
            }
        }
        var_47 = ((/* implicit */unsigned short) var_15);
    }
    /* vectorizable */
    for (unsigned char i_22 = 2; i_22 < 9; i_22 += 4) 
    {
        arr_85 [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_22 [i_22 - 1])) : (((/* implicit */int) (_Bool)1))));
        var_48 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_46 [(unsigned char)6] [i_22] [(_Bool)1])))));
    }
    /* vectorizable */
    for (unsigned char i_23 = 0; i_23 < 25; i_23 += 2) 
    {
        var_49 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned short)50626))) ^ (((/* implicit */int) arr_86 [i_23]))));
        arr_88 [(_Bool)0] = ((/* implicit */_Bool) arr_87 [i_23] [i_23]);
        /* LoopSeq 1 */
        for (unsigned char i_24 = 2; i_24 < 24; i_24 += 1) 
        {
            var_50 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_90 [i_24 - 1])) << (((((/* implicit */int) arr_87 [i_23] [i_24])) - (70))))) >> (((((((/* implicit */int) (unsigned char)50)) | (((/* implicit */int) var_16)))) - (40)))));
            var_51 *= ((/* implicit */unsigned short) ((_Bool) arr_90 [i_24 - 2]));
            var_52 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_89 [i_24 + 1] [i_24] [i_24 + 1]))));
            /* LoopNest 2 */
            for (unsigned short i_25 = 0; i_25 < 25; i_25 += 1) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_54 *= ((/* implicit */_Bool) arr_92 [i_24 + 1] [i_24 - 1]);
                    }
                } 
            } 
        }
    }
    var_55 ^= ((/* implicit */unsigned char) (~(((var_12) ? (((((/* implicit */int) var_6)) << (((((/* implicit */int) var_15)) - (48))))) : (((/* implicit */int) var_9))))));
    var_56 &= ((/* implicit */unsigned short) var_11);
}
