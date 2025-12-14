/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160999
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_1] [i_2] [i_2])))) ? (((/* implicit */int) ((unsigned char) (unsigned char)255))) : (((/* implicit */int) ((arr_2 [i_1] [i_1] [i_2]) <= (((unsigned int) var_5)))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_0 [i_2])))) ? (min((var_1), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2]), (((/* implicit */int) arr_0 [i_2])))))));
                        arr_8 [i_1] [i_2] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((min((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [i_1] [i_3 - 2] [i_2])))), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_1] [i_1] [i_2] [i_1] [(signed char)8] [i_2])), (-9223372036854775806LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-11), (arr_0 [i_0]))))) : (((var_6) | (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    for (signed char i_4 = 2; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        var_15 ^= ((/* implicit */int) max((arr_4 [i_2] [i_2] [i_2] [i_4]), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_4 + 3] [i_4] [i_4])) == (((/* implicit */int) arr_10 [i_0] [i_4 - 2] [i_4] [i_4])))))));
                        arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) -9223372036854775806LL)) : (var_6)))) ? (min((var_10), (((/* implicit */unsigned long long int) arr_6 [i_4 - 1] [i_4] [i_2] [i_1] [(signed char)10] [i_0])))) : (max((var_6), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0] [i_1]))))))));
                    }
                    arr_14 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) max((max((arr_12 [i_0] [i_1] [i_1] [18]), (((/* implicit */unsigned long long int) (+(arr_3 [i_0] [i_1] [i_2])))))), ((-(var_6)))));
                }
            } 
        } 
        var_16 = (-2147483647 - 1);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (signed char i_6 = 3; i_6 < 16; i_6 += 4) 
            {
                {
                    arr_19 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */signed char) 12712923688585596867ULL);
                    arr_20 [i_6] [i_5] [i_6] = ((signed char) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_12 [i_0] [i_5] [i_6 - 2] [i_6 - 2])));
                    arr_21 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */int) min((arr_4 [i_0] [i_5] [i_6] [i_6]), (min((((/* implicit */long long int) arr_2 [i_6] [i_6] [i_6 - 2])), (max((arr_3 [i_0] [i_6] [i_0]), (((/* implicit */long long int) var_11))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_15 [i_0] [i_0]))));
    }
    for (short i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            arr_27 [i_7] [i_7] [i_7] = ((/* implicit */long long int) max(((unsigned char)128), (((/* implicit */unsigned char) (signed char)10))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_30 [i_7] [i_7] [i_7] [14LL]) : (min((arr_30 [i_7] [i_7] [i_9] [(unsigned char)8]), (5733820385123954749ULL)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_11 = 2; i_11 < 15; i_11 += 1) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) ((short) ((unsigned char) (unsigned short)7)));
                            var_20 += ((/* implicit */signed char) ((unsigned char) arr_2 [18] [i_8] [18]));
                        }
                        for (long long int i_12 = 2; i_12 < 15; i_12 += 1) /* same iter space */
                        {
                            arr_39 [i_12] [i_12] [i_7] [i_9] [i_7] [i_8] [i_7] = var_0;
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_24 [i_7]), (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_12] [i_10] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_9])) ? (arr_11 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_7] [i_10] [i_12])))))) : (5733820385123954748ULL)))) ? (((/* implicit */unsigned long long int) 7444709329004905782LL)) : (((min((((/* implicit */unsigned long long int) arr_16 [(short)4] [i_7])), (arr_28 [i_7] [i_12 - 2] [i_9] [i_10]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        }
                        for (long long int i_13 = 2; i_13 < 15; i_13 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) (~(max((min((((/* implicit */unsigned long long int) var_4)), (arr_5 [i_7] [i_7] [i_7] [i_7]))), (((/* implicit */unsigned long long int) -687988183))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_7] [i_8] [i_8])) <= ((~(arr_17 [i_10] [i_10])))))) <= (((/* implicit */int) var_11))));
                        }
                        var_24 ^= ((/* implicit */unsigned int) max((((((long long int) 5733820385123954764ULL)) * (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7] [i_8] [2U] [i_7]))))), (((((long long int) arr_23 [i_7])) / (((/* implicit */long long int) ((/* implicit */int) min((arr_18 [i_7] [(short)4] [i_9] [i_10]), (arr_29 [(_Bool)1] [(_Bool)1] [i_9] [(_Bool)1])))))))));
                        var_25 = ((/* implicit */unsigned char) arr_42 [i_7] [i_8] [10U] [i_8] [i_10] [i_7]);
                    }
                } 
            } 
            arr_43 [i_7] [10ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) arr_32 [8ULL] [i_8]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_8])) ? (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10220))) : (arr_1 [i_7] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)25351), (((/* implicit */unsigned short) arr_32 [14ULL] [14ULL])))))))))));
        }
        for (long long int i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            var_26 ^= ((/* implicit */unsigned int) arr_37 [i_7] [i_14] [i_14] [(signed char)14] [i_14] [(signed char)14]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_15 = 3; i_15 < 16; i_15 += 4) 
            {
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7887703647250063205LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)246)) == (((/* implicit */int) (short)28665))))) : (-687988183)));
                /* LoopSeq 1 */
                for (signed char i_16 = 3; i_16 < 16; i_16 += 3) 
                {
                    arr_51 [i_15] [i_7] = ((/* implicit */int) ((signed char) var_3));
                    /* LoopSeq 2 */
                    for (signed char i_17 = 1; i_17 < 17; i_17 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) (unsigned short)3107);
                        var_29 ^= ((/* implicit */unsigned long long int) ((24ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190)))));
                    }
                    for (int i_18 = 1; i_18 < 14; i_18 += 3) 
                    {
                        arr_58 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) 12712923688585596866ULL);
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_54 [i_14] [i_15 + 2] [i_18 + 3]))));
                        var_31 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_18 + 1]))));
                    }
                }
            }
            for (signed char i_19 = 1; i_19 < 16; i_19 += 2) 
            {
                arr_61 [i_7] [i_14] [i_7] = ((/* implicit */unsigned char) min((0), (((/* implicit */int) (short)-28665))));
                arr_62 [i_7] [i_7] = ((/* implicit */unsigned char) arr_25 [i_7] [(unsigned char)12] [i_19]);
            }
            for (signed char i_20 = 1; i_20 < 17; i_20 += 3) 
            {
                arr_66 [i_7] [i_14] [(signed char)3] = ((/* implicit */long long int) arr_42 [i_7] [i_14] [15LL] [i_14] [(signed char)15] [i_7]);
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (signed char)127)) : (1635002061))))));
            }
            /* LoopSeq 1 */
            for (signed char i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_14])) ? (((/* implicit */int) arr_56 [i_21] [i_21] [i_14] [i_7] [i_7])) : (((/* implicit */int) var_3))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6944))) - (min((((/* implicit */unsigned long long int) 948020456)), (var_1))))) : ((~(max((arr_15 [i_7] [(short)12]), (((/* implicit */unsigned long long int) arr_32 [i_14] [i_14])))))))))));
                var_34 = ((/* implicit */unsigned short) arr_40 [i_7] [i_7]);
            }
            arr_70 [i_7] [i_14] [i_7] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) 2147483647)), (max((((/* implicit */unsigned int) var_11)), (4257146533U))))) / (((/* implicit */unsigned int) arr_25 [i_7] [i_7] [i_7]))));
        }
        arr_71 [i_7] [i_7] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) arr_3 [i_7] [i_7] [i_7])) % (((((/* implicit */_Bool) arr_41 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (arr_23 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (min((min((7936621250402531155ULL), (((/* implicit */unsigned long long int) arr_44 [i_7] [i_7] [i_7])))), (((/* implicit */unsigned long long int) ((arr_54 [i_7] [i_7] [i_7]) ? (((/* implicit */int) arr_65 [i_7])) : (((/* implicit */int) arr_68 [(unsigned char)4] [i_7] [i_7])))))))));
    }
    /* vectorizable */
    for (short i_22 = 0; i_22 < 18; i_22 += 1) /* same iter space */
    {
        var_35 ^= ((/* implicit */unsigned char) (~((-2147483647 - 1))));
        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (unsigned char)142)))))));
        /* LoopNest 2 */
        for (long long int i_23 = 0; i_23 < 18; i_23 += 2) 
        {
            for (short i_24 = 1; i_24 < 17; i_24 += 1) 
            {
                {
                    arr_81 [i_22] [i_22] [i_22] = ((/* implicit */signed char) ((unsigned short) arr_36 [i_23] [i_24] [i_22] [i_24] [i_24 + 1]));
                    arr_82 [i_22] [i_23] [i_23] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)154)))));
                    var_37 = ((/* implicit */signed char) ((((arr_12 [i_22] [i_23] [i_24] [i_22]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))))) ? (((/* implicit */int) (unsigned short)12722)) : (((/* implicit */int) arr_46 [i_24 - 1]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_25 = 1; i_25 < 16; i_25 += 1) 
                    {
                        arr_85 [i_22] [i_22] [i_23] [i_22] [i_25] = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_24 + 1] [i_24 + 1] [i_22] [i_24 + 1]))));
                        var_38 = var_7;
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 18; i_26 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_27 = 0; i_27 < 18; i_27 += 3) 
                        {
                            var_39 = ((/* implicit */long long int) ((unsigned long long int) var_0));
                            var_40 ^= ((/* implicit */short) var_11);
                            arr_92 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) arr_88 [i_22] [i_26] [i_26] [i_26])) : (var_4)));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_28 = 3; i_28 < 15; i_28 += 1) 
                        {
                            var_41 = ((/* implicit */signed char) arr_40 [i_23] [i_24 + 1]);
                            var_42 = ((/* implicit */long long int) ((((/* implicit */long long int) 1740170823)) <= (66778997021610460LL)));
                        }
                        for (short i_29 = 1; i_29 < 15; i_29 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)5021)) | (arr_7 [i_22] [i_23] [i_23] [i_23] [i_23] [(signed char)14])));
                            arr_99 [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_75 [i_22] [i_23])) ? (7975420785463102619ULL) : (((/* implicit */unsigned long long int) arr_75 [i_22] [i_22]))));
                            var_44 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (unsigned char)40))));
                            var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                        }
                        for (signed char i_30 = 3; i_30 < 17; i_30 += 4) 
                        {
                            arr_102 [i_22] = (~(arr_4 [(unsigned char)3] [i_24 - 1] [i_24 + 1] [i_22]));
                            var_46 ^= ((/* implicit */signed char) arr_42 [i_22] [i_22] [i_22] [i_24] [i_22] [i_23]);
                            arr_103 [i_22] [(short)16] [i_22] [i_26] [i_30 - 1] [i_22] [i_24] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_40 [i_22] [i_22]))));
                            arr_104 [i_22] [i_22] [i_22] [i_22] [i_22] = (+(((/* implicit */int) var_3)));
                        }
                    }
                    for (unsigned short i_31 = 0; i_31 < 18; i_31 += 1) 
                    {
                        var_47 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)53077))))) ? ((~(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_31 [i_22] [i_22] [i_22] [i_22])) ? (var_4) : (((/* implicit */int) arr_0 [i_23]))))));
                        arr_107 [i_31] [i_23] [i_31] [i_22] [i_23] [i_22] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_23] [i_24 + 1] [i_24])) ? (((/* implicit */int) arr_91 [i_24 + 1] [i_24 + 1] [i_24] [i_24 + 1] [i_24 + 1] [i_24 - 1])) : (((/* implicit */int) arr_91 [i_24 + 1] [i_24 - 1] [i_24] [i_24] [i_24 + 1] [i_24 + 1]))));
                    }
                }
            } 
        } 
        var_48 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_29 [i_22] [3] [i_22] [i_22])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_22] [(signed char)16]))))));
    }
    var_49 &= ((/* implicit */unsigned int) var_8);
    var_50 &= ((/* implicit */unsigned short) var_7);
    var_51 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_12))));
}
