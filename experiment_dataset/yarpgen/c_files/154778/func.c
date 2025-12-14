/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154778
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)251);
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)107))));
        arr_5 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)130))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            arr_11 [i_1] [i_2 - 1] [i_1] = ((/* implicit */signed char) var_11);
            arr_12 [(signed char)0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_10))) - (((/* implicit */int) var_5))));
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-113))))));
            arr_16 [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_7))))) / ((-(((/* implicit */int) var_12))))));
            arr_17 [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (signed char)-76))));
            /* LoopSeq 3 */
            for (unsigned char i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                arr_21 [i_1] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) ((signed char) ((signed char) (unsigned char)246)));
                arr_22 [(unsigned char)18] [i_4] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)82))));
            }
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                arr_25 [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-30))));
                arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)90))));
                /* LoopSeq 4 */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                {
                    arr_30 [i_3] [i_3] = ((/* implicit */signed char) var_7);
                    arr_31 [i_1] [(unsigned char)9] [i_5] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                    arr_32 [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_6))));
                    arr_33 [i_5] [i_3] [i_5] [(signed char)1] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) var_0)))));
                }
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                {
                    arr_36 [i_1] [i_5] [i_5] [i_7] = ((/* implicit */signed char) var_0);
                    arr_37 [i_1] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) / ((~(((/* implicit */int) (signed char)31))))));
                }
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    arr_41 [i_1] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_8)))));
                    arr_42 [i_1] [i_5] [i_5] = var_12;
                    arr_43 [i_1] [i_3] [i_5] [i_5] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-93))));
                    arr_44 [i_5] [(signed char)7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)248)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))));
                }
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    arr_48 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)212)) : (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))));
                    arr_49 [(signed char)9] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255)))))));
                    arr_50 [i_1] [i_3] [i_5] [i_5] [i_1] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)232))));
                    arr_51 [i_9] [i_9] [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                }
            }
            for (unsigned char i_10 = 4; i_10 < 21; i_10 += 2) 
            {
                arr_54 [i_1] [i_3] [(signed char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_7))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) var_7))));
                arr_55 [i_1] [i_3] [i_10 - 2] = ((/* implicit */signed char) var_8);
                arr_56 [i_1] [i_3] [i_10] [i_10 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (signed char)21))));
                arr_57 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                arr_58 [i_1] [i_3] [(unsigned char)13] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)107)))))));
            }
        }
        for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            arr_63 [i_1] [(signed char)4] [i_11] = var_11;
            /* LoopSeq 3 */
            for (unsigned char i_12 = 1; i_12 < 20; i_12 += 3) 
            {
                arr_66 [i_1] = ((unsigned char) (unsigned char)5);
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    for (signed char i_14 = 3; i_14 < 18; i_14 += 3) 
                    {
                        {
                            arr_72 [i_1] [i_11] [i_13] [i_1] [(signed char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned char)120)))) : ((+(((/* implicit */int) var_0))))));
                            arr_73 [i_1] [i_11] [i_12] [(signed char)6] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned char)245))))) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) (signed char)-64)))) : (((((/* implicit */int) (signed char)46)) >> (((((/* implicit */int) (unsigned char)252)) - (246)))))));
                            arr_74 [i_11] [i_13] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)127))));
                            arr_75 [(signed char)12] [(signed char)12] [i_14] [i_13] [i_14] [i_14] [i_13] = ((/* implicit */unsigned char) (signed char)127);
                        }
                    } 
                } 
                arr_76 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((unsigned char) (signed char)-8));
                arr_77 [(signed char)2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-69)) * (((/* implicit */int) (signed char)-85)))))));
                arr_78 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_5))))));
            }
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                arr_81 [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) var_3)))));
                arr_82 [i_1] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)83)))))));
                arr_83 [i_1] [i_1] [(signed char)1] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))))));
            }
            for (unsigned char i_16 = 2; i_16 < 21; i_16 += 2) 
            {
                arr_88 [i_1] [(unsigned char)5] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */int) (unsigned char)136)) >> (((((/* implicit */int) var_7)) - (222))))) : (((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))));
                /* LoopSeq 1 */
                for (signed char i_17 = 3; i_17 < 21; i_17 += 3) 
                {
                    arr_91 [i_1] [i_11] [i_16] [i_11] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_2)))));
                    arr_92 [i_1] [i_1] [i_1] = (unsigned char)239;
                    arr_93 [i_1] [i_11] [i_11] [i_16] [i_17 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned char)230))));
                    arr_94 [(signed char)21] [(signed char)21] [i_17] [(unsigned char)12] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                    arr_95 [i_1] [i_11] [i_1] [i_17] [i_17] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (unsigned char)255))));
                }
            }
            arr_96 [i_1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_7))))));
            /* LoopSeq 2 */
            for (unsigned char i_18 = 1; i_18 < 19; i_18 += 2) 
            {
                arr_99 [i_1] [i_11] [i_18] [i_1] = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned char)86))))));
                arr_100 [i_1] [i_11] [(unsigned char)14] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-23)) != (((/* implicit */int) (signed char)81))));
                arr_101 [i_11] [i_18] |= ((/* implicit */signed char) var_0);
            }
            for (signed char i_19 = 0; i_19 < 22; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        {
                            arr_109 [i_21] [i_21] [(signed char)20] [i_21] [(signed char)18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)1))))));
                            arr_110 [i_1] [i_21] [i_19] [i_20] [i_19] [i_11] [i_20] = ((/* implicit */unsigned char) var_9);
                            arr_111 [i_1] [(unsigned char)7] [i_1] [i_1] [i_1] [i_21] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (signed char)-106))))));
                        }
                    } 
                } 
                arr_112 [i_11] [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)212))));
            }
            arr_113 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) (unsigned char)239))))) ? ((~(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) var_4))));
        }
        arr_114 [i_1] [i_1] = var_4;
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)1))))))) ? (((/* implicit */int) (signed char)-18)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (unsigned char)93))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)0))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((-(((/* implicit */int) var_7)))) + (2147483647))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-14)))) - (112)))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_0))))) < ((+(((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))));
    var_17 = var_7;
}
