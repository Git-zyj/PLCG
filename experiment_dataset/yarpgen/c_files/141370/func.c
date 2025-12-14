/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141370
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (8808248030530822677LL)));
        arr_2 [i_0] = ((/* implicit */short) 8808248030530822674LL);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))));
        arr_6 [3ULL] |= ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2])) + ((~(((/* implicit */int) arr_8 [0ULL])))))))));
        arr_11 [(short)16] &= ((/* implicit */unsigned int) (-(8808248030530822674LL)));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            arr_14 [i_2] [i_2] = arr_12 [i_2];
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 + 2]))))))))));
            /* LoopSeq 4 */
            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) (signed char)-45)))), ((+(((((/* implicit */_Bool) 3503661516880766973LL)) ? (((/* implicit */int) (unsigned short)25469)) : (((/* implicit */int) (unsigned short)40066))))))));
                var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-9)), ((unsigned char)238)))), (16368U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12625)))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_4))))))));
            }
            for (int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        arr_25 [i_6] [i_2] [i_2] [i_6] = ((/* implicit */_Bool) min(((+((~(631672493029783259LL))))), (max((((8808248030530822673LL) ^ (-8808248030530822678LL))), (((/* implicit */long long int) arr_22 [i_2] [i_3 + 1] [i_6] [i_6]))))));
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_24 [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3] [i_3 + 2])), ((unsigned char)208))))));
                        arr_26 [i_2] [(unsigned char)18] [i_3] [i_2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [13] [i_5] [i_2] [i_2]))) & (((((/* implicit */_Bool) var_0)) ? (1795819642U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))), (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2]))))) / (4294967295U)))));
                        var_23 -= ((/* implicit */short) (((~(-1638570207267185671LL))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29516)) & (((/* implicit */int) var_6)))))));
                    }
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_24 ^= max((((((/* implicit */_Bool) ((unsigned char) 8808248030530822677LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [i_3 - 1] [i_5 - 1] [i_6 + 1]))) : ((+(var_13))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_2] [i_3 + 2] [i_5] [i_2] [i_8]))))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+(arr_17 [i_3 - 1] [i_5 + 1] [i_6 - 1]))))));
                        arr_29 [i_2] [i_2] [i_6] [i_2] = ((/* implicit */unsigned short) var_10);
                    }
                    arr_30 [i_2] [i_6] [i_2] [i_2] = ((unsigned short) max(((-(((/* implicit */int) arr_21 [i_5])))), (((/* implicit */int) arr_21 [i_5]))));
                    arr_31 [i_2] [i_2] [i_5] [i_6] [i_6] [i_6] &= ((/* implicit */unsigned char) var_10);
                    var_26 = ((/* implicit */unsigned short) 8808248030530822677LL);
                }
                var_27 = (~(((/* implicit */int) ((arr_24 [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2] [i_3] [i_3]) && ((_Bool)0)))));
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 20; i_9 += 1) /* same iter space */
            {
                var_28 *= ((/* implicit */unsigned long long int) ((int) var_6));
                var_29 |= (+(1332726149U));
            }
            for (int i_10 = 1; i_10 < 20; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    arr_38 [i_2] [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)12971)), (8808248030530822688LL)));
                    var_30 = ((/* implicit */unsigned long long int) 8808248030530822681LL);
                }
                for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    var_31 = ((/* implicit */short) arr_19 [i_2] [i_3 + 1] [i_10] [7U]);
                    arr_42 [i_2] [i_2] [i_2] [i_10] [i_12] [i_12] &= ((/* implicit */unsigned long long int) min((max((var_11), (((/* implicit */int) var_4)))), (((((/* implicit */int) (short)-5421)) - (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)7))))))));
                    var_32 = ((/* implicit */signed char) (+(((/* implicit */int) (short)16661))));
                }
                /* LoopSeq 3 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    var_33 = ((/* implicit */unsigned char) (((~((+(arr_20 [i_2] [i_3] [i_10 - 1] [i_13]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2))))))))));
                    arr_46 [i_2] [i_3] [i_3 + 1] [i_2] [i_10] [i_13] = ((/* implicit */short) arr_37 [i_2] [i_3] [i_3] [i_3]);
                }
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_22 [i_2] [i_2] [i_2] [i_14])), (min((((unsigned short) 2958266963858580216LL)), ((unsigned short)63065)))));
                    var_35 = ((/* implicit */signed char) (~((+(4294967295U)))));
                    /* LoopSeq 2 */
                    for (short i_15 = 3; i_15 < 18; i_15 += 4) 
                    {
                        var_36 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)6503)), ((unsigned short)40067)))) ? (-631672493029783260LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)80)), ((unsigned short)37781)))))))) ? (((((/* implicit */_Bool) arr_37 [i_15] [i_14] [i_10] [i_2])) ? ((~(arr_23 [i_2] [i_3] [i_2] [i_14] [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)35471)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        arr_51 [i_10] [i_14] [i_15] = ((/* implicit */unsigned int) var_8);
                        var_37 = ((((/* implicit */int) (unsigned short)27755)) ^ (min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) arr_36 [i_2] [i_10] [i_10])) ? (((/* implicit */int) arr_47 [i_2] [i_3] [i_10] [i_14])) : (((/* implicit */int) arr_34 [i_2] [i_2] [i_2] [i_2])))))));
                    }
                    for (unsigned short i_16 = 2; i_16 < 19; i_16 += 2) 
                    {
                        arr_54 [i_2] [i_2] [i_10 + 1] [i_14] [i_16] [i_10] = ((/* implicit */unsigned short) min((arr_21 [i_3 + 2]), (arr_21 [i_3 + 2])));
                        var_38 = ((/* implicit */int) max((arr_41 [i_2] [i_10] [i_10] [i_10] [i_14] [i_16]), (((/* implicit */unsigned char) min((var_7), ((!(((/* implicit */_Bool) var_9)))))))));
                    }
                    /* LoopSeq 3 */
                    for (int i_17 = 1; i_17 < 18; i_17 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) 1291316166)), (max((((/* implicit */unsigned int) arr_24 [18] [18] [i_14] [i_10] [(short)19] [i_2])), (var_13))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11041)))));
                        arr_57 [i_17] [i_2] [i_10] [i_10] [i_2] [i_2] = ((/* implicit */unsigned short) arr_41 [i_2] [i_10] [i_2] [i_14] [i_17] [i_17]);
                        arr_58 [i_10] [i_3] [i_10] [i_3] [i_17] = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) max((-1291316166), (((/* implicit */int) arr_41 [i_17] [i_10] [i_14] [i_2] [i_10] [i_2]))))));
                        var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_10])) && (((/* implicit */_Bool) var_8))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) arr_19 [i_3 + 1] [i_10 + 1] [i_10 - 1] [i_10 - 1]);
                        var_42 = ((/* implicit */short) max((((((var_11) == (((/* implicit */int) arr_48 [i_2] [(signed char)2] [i_14] [i_18])))) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) max((var_3), ((short)16670)))))), (((/* implicit */int) var_4))));
                    }
                    for (signed char i_19 = 1; i_19 < 18; i_19 += 4) 
                    {
                        var_43 = ((/* implicit */int) arr_15 [i_2] [i_3] [i_10] [i_14]);
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((942052778101133908LL), (((/* implicit */long long int) (unsigned short)63065))))) ? (((((/* implicit */int) arr_7 [i_2] [i_19])) - (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63072)))))))) ? (((((/* implicit */_Bool) arr_63 [i_10] [i_10 + 1] [i_10] [i_10 - 1] [i_10])) ? (((/* implicit */int) (unsigned short)2487)) : (arr_50 [i_3] [i_14] [i_2] [i_3] [i_3 - 1] [i_2]))) : (((/* implicit */int) arr_7 [(signed char)19] [i_14]))));
                    }
                    var_45 += ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_33 [i_3 + 1] [i_3 - 1] [i_3 + 2])))) - (((/* implicit */int) var_8))));
                }
                /* vectorizable */
                for (unsigned int i_20 = 0; i_20 < 21; i_20 += 3) /* same iter space */
                {
                    arr_66 [i_10] [(short)14] = ((/* implicit */unsigned char) ((int) arr_24 [i_20] [i_10 - 1] [i_10 + 1] [i_3 - 1] [i_3 + 1] [(unsigned char)7]));
                    /* LoopSeq 3 */
                    for (short i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_50 [i_2] [i_3] [i_10] [i_10] [i_20] [i_20])))))));
                        var_47 = ((/* implicit */unsigned int) ((unsigned short) var_6));
                        arr_69 [i_10] [i_2] [i_10] [i_3] [i_10] = ((/* implicit */short) ((long long int) arr_16 [i_10 - 1] [i_10 + 1] [i_10]));
                    }
                    for (unsigned char i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        var_48 |= ((((/* implicit */_Bool) arr_61 [i_3 + 1] [i_10] [i_10] [i_10] [i_10 + 1] [i_22] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_55 [i_10 - 1] [i_10] [i_10] [i_10] [i_3 - 1]));
                        arr_72 [i_2] [i_10] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((arr_61 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_10 - 1]) + (((/* implicit */int) var_7))));
                        var_49 += ((/* implicit */short) ((((/* implicit */int) (unsigned short)23729)) == (((/* implicit */int) arr_7 [i_10 - 1] [i_3 - 1]))));
                        var_50 = ((/* implicit */unsigned short) arr_71 [i_2] [i_3] [(short)14] [i_10] [i_22]);
                        var_51 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_3 + 2]))));
                    }
                    for (unsigned long long int i_23 = 4; i_23 < 20; i_23 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((arr_24 [i_2] [i_3] [i_10] [i_20] [i_23 - 1] [i_3]) && (((/* implicit */_Bool) -1LL)))) || (((var_11) != (((/* implicit */int) (short)21481)))))))));
                        var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)11376))) : (631672493029783260LL)));
                        arr_75 [i_10] [i_20] [i_10] [i_2] [i_10] = arr_56 [i_23 - 3] [i_10] [i_20] [i_20] [i_10] [i_10] [i_2];
                        var_54 = ((/* implicit */signed char) arr_63 [i_3 + 1] [i_3 - 1] [i_10] [i_10 - 1] [i_23 - 3]);
                    }
                    var_55 = ((/* implicit */int) min((var_55), (((((/* implicit */int) arr_71 [i_3] [i_10] [i_10 - 1] [i_2] [i_20])) * (((/* implicit */int) arr_71 [i_2] [i_2] [i_10 + 1] [i_2] [i_2]))))));
                    var_56 = ((/* implicit */signed char) (unsigned char)141);
                }
                arr_76 [i_2] [i_2] [i_2] [i_10] |= (~(((/* implicit */int) var_7)));
            }
        }
        var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)24)), (631672493029783260LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (25ULL))) : (((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [i_2])))), (((/* implicit */unsigned long long int) var_9)))))));
    }
    var_58 &= ((/* implicit */short) ((unsigned int) var_13));
    var_59 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned short)21034))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */long long int) ((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113)))))), (((long long int) (unsigned short)65514))))));
}
