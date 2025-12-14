/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153738
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((int) (signed char)-71))))) ? ((~(((/* implicit */int) var_2)))) : (((((((/* implicit */int) var_0)) + (2147483647))) << (((max((624640910), (((/* implicit */int) var_2)))) - (624640910)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1] [i_1]), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)115))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (var_4))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)-116)) : (var_3))) != (max((((/* implicit */int) var_1)), (arr_1 [i_0])))))));
            arr_5 [i_0] = ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0])) > (((/* implicit */int) var_11))))) << ((((-(((/* implicit */int) arr_2 [i_0] [i_0])))) + (53))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_13 = ((((/* implicit */_Bool) -67158294)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))) : ((+(arr_3 [i_2] [i_0] [i_0]))));
            var_14 = ((((/* implicit */int) (signed char)38)) << (((((/* implicit */int) arr_2 [i_0] [i_2])) - (27))));
            arr_9 [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
        }
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 130023424))));
            arr_12 [i_3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (signed char)74))))))));
            arr_13 [i_0] [i_3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (signed char)103)) : (1930018036)))));
        }
        /* LoopSeq 4 */
        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            arr_17 [i_0] [i_4] [i_4] = 857601545;
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_1 [i_4]) : (arr_1 [i_0])))))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_5] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_5]) : (arr_3 [i_0] [i_5] [i_0])));
            var_18 = (signed char)-44;
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
            var_20 = ((/* implicit */int) (signed char)123);
        }
        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_21 = arr_23 [i_0] [i_6];
            arr_25 [i_6] = ((((/* implicit */_Bool) max((((/* implicit */int) max((arr_19 [i_0] [i_0] [i_0]), ((signed char)-57)))), (((((/* implicit */_Bool) 237108759)) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) arr_11 [i_0] [i_6] [i_6])) : (max((((/* implicit */int) ((signed char) 857601545))), ((~(((/* implicit */int) (signed char)-125)))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            arr_28 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-20))))) ? (((((/* implicit */int) arr_22 [i_0] [i_0] [i_7])) / (((/* implicit */int) arr_21 [i_7] [i_0])))) : (((/* implicit */int) (signed char)52))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) (signed char)123)) ^ (((/* implicit */int) (signed char)31))))));
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_7] [i_8]))));
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            arr_39 [i_0] [i_7] [i_8] [i_9] [i_10] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -3))));
                            arr_40 [i_10] [i_10] [i_9] [i_8] [i_7] [i_10] [i_0] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) arr_22 [i_0] [i_7] [i_8]))) : (var_8));
                            var_23 = ((/* implicit */signed char) (~(2147483647)));
                            arr_41 [i_10] [i_7] [i_9] [i_10] = arr_35 [i_0] [i_7] [i_10] [i_9] [i_10] [i_10];
                            var_24 = (+(((/* implicit */int) arr_23 [i_9] [i_7])));
                        }
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            arr_44 [i_11] [i_9] [i_8] [i_7] [i_0] = ((arr_24 [i_8]) % (arr_24 [i_11]));
                            var_25 = ((signed char) (signed char)-97);
                        }
                        arr_45 [i_8] [i_9] = ((15) >> (((((/* implicit */int) arr_19 [i_9] [i_8] [i_0])) + (73))));
                    }
                } 
            } 
        }
        arr_46 [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) max(((signed char)-120), (var_1)))))) != (max((((((/* implicit */int) (signed char)124)) & (-1502984449))), ((~(-857601545)))))));
    }
    for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        arr_50 [i_12] = ((((/* implicit */_Bool) (+(max((2147483647), (-857601546)))))) ? (min((arr_38 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */int) min(((signed char)33), ((signed char)12)))))) : (((/* implicit */int) (signed char)93)));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((-1502984449) % (((/* implicit */int) arr_47 [i_12] [i_12]))))) ? ((-(((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_14 [i_12])))))) : ((~(arr_6 [i_12]))))))));
        arr_51 [i_12] [i_12] = arr_11 [i_12] [i_12] [i_12];
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 22; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    {
                        arr_59 [i_13] [i_14] [i_13] [i_13] [i_13] = max(((signed char)-32), ((signed char)2));
                        var_27 = ((/* implicit */signed char) min((var_27), (arr_8 [i_12] [i_12])));
                        arr_60 [i_12] [i_13] [i_13] [i_15] [i_13] [i_12] = ((/* implicit */int) min(((signed char)123), (((/* implicit */signed char) ((((/* implicit */_Bool) 33030144)) || (((/* implicit */_Bool) (signed char)-2)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 16; i_16 += 3) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_16])) ? (((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (signed char)-27)))) : (((/* implicit */int) arr_14 [i_16]))));
        /* LoopSeq 3 */
        for (signed char i_17 = 0; i_17 < 16; i_17 += 4) 
        {
            arr_65 [i_17] [i_16] = ((/* implicit */int) (signed char)84);
            arr_66 [i_17] = ((arr_52 [i_17] [i_17] [i_17]) | (((/* implicit */int) ((((/* implicit */int) (signed char)24)) == (((/* implicit */int) (signed char)-12))))));
            /* LoopSeq 3 */
            for (signed char i_18 = 0; i_18 < 16; i_18 += 2) 
            {
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (((~(((/* implicit */int) (signed char)0)))) - ((-(902319908))))))));
                var_30 = ((((/* implicit */_Bool) arr_70 [i_16] [i_17] [i_18])) ? (arr_70 [i_18] [i_17] [i_16]) : (arr_70 [i_18] [i_17] [i_16]));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 16; i_19 += 3) 
                {
                    for (signed char i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        {
                            arr_75 [i_19] [i_18] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_16])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-97))))) : (arr_3 [i_16] [i_16] [i_16])));
                            arr_76 [i_16] [i_17] [i_18] [i_19] [i_19] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_16] [i_17]))));
                        }
                    } 
                } 
                arr_77 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_16] [i_16] [i_16] [i_17] [i_18])) ? (((/* implicit */int) arr_30 [i_16] [i_16] [i_16])) : ((~(((/* implicit */int) (signed char)41))))));
            }
            for (signed char i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                arr_81 [i_16] [i_17] [i_21] [i_21] = var_11;
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) arr_55 [i_16] [i_17] [i_21] [i_16])) : (((/* implicit */int) arr_18 [i_16] [i_17] [i_21]))))) ? (((/* implicit */int) (signed char)-32)) : (((((/* implicit */_Bool) (signed char)-73)) ? (857601544) : (1018378329)))));
            }
            for (signed char i_22 = 0; i_22 < 16; i_22 += 4) 
            {
                arr_85 [i_16] [i_17] = ((/* implicit */int) var_1);
                arr_86 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_61 [i_22] [i_22])) ? (var_7) : (((/* implicit */int) arr_61 [i_16] [i_22]))));
                arr_87 [i_16] [i_17] [i_22] = ((/* implicit */signed char) ((arr_37 [i_16] [i_16] [i_17] [i_22]) & (741095200)));
                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) -902319908))));
                /* LoopNest 2 */
                for (signed char i_23 = 0; i_23 < 16; i_23 += 4) 
                {
                    for (signed char i_24 = 0; i_24 < 16; i_24 += 3) 
                    {
                        {
                            arr_94 [i_16] [i_16] [i_16] [i_16] = (-(((/* implicit */int) var_1)));
                            arr_95 [i_16] [i_17] [i_22] [i_22] = ((((/* implicit */_Bool) 1677046700)) ? (-735365507) : (((/* implicit */int) ((signed char) 12))));
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_82 [i_22] [i_23] [i_24])) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) arr_22 [i_22] [i_17] [i_17])))))));
                        }
                    } 
                } 
            }
        }
        for (int i_25 = 0; i_25 < 16; i_25 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_26 = 0; i_26 < 16; i_26 += 3) 
            {
                arr_100 [i_25] [i_16] = ((/* implicit */signed char) ((arr_53 [i_25]) == (((/* implicit */int) (signed char)108))));
                arr_101 [i_26] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_16])) ? (arr_24 [i_16]) : (arr_24 [i_16])));
            }
            for (int i_27 = 0; i_27 < 16; i_27 += 3) 
            {
                arr_105 [i_16] [i_27] [i_16] [i_16] = ((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)115)) + (((/* implicit */int) (signed char)115)))));
                arr_106 [i_27] = ((((int) arr_16 [i_16] [i_25])) << (((var_8) - (604380779))));
            }
            arr_107 [i_25] [i_16] [i_16] = ((((/* implicit */_Bool) -857601516)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (signed char)19)));
        }
        for (signed char i_28 = 0; i_28 < 16; i_28 += 4) 
        {
            arr_111 [i_16] [i_28] = ((/* implicit */signed char) ((((arr_24 [i_16]) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_92 [i_16] [i_28] [i_16] [i_16] [i_28]))))) - (1)))));
            arr_112 [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)25)) | (((/* implicit */int) (signed char)13))));
            arr_113 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (-1992061578)))) ? (((/* implicit */int) ((var_8) <= (((/* implicit */int) (signed char)-17))))) : (arr_103 [i_16])));
        }
    }
    var_34 = ((/* implicit */signed char) ((((int) var_8)) % (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (signed char)-102)) + (118)))))) ? (((/* implicit */int) ((signed char) 902319908))) : ((~(((/* implicit */int) var_11))))))));
    var_35 = var_5;
}
