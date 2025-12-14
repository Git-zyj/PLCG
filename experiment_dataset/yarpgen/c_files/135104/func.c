/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135104
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) (+((+(arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_0 [(unsigned short)8]));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (short)989))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_7 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) || (((/* implicit */_Bool) (short)-2605)))))));
            arr_8 [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_1] [i_1]))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((arr_4 [i_1] [i_2]) <= (arr_4 [i_1] [i_1]))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            var_19 ^= ((/* implicit */unsigned short) arr_10 [i_3]);
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_1] [i_4])) : (((/* implicit */int) arr_11 [i_1] [i_4]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_4])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_4]))))));
                var_21 = ((/* implicit */unsigned char) ((long long int) min((max((((/* implicit */unsigned long long int) var_5)), (2287828610704211968ULL))), (((/* implicit */unsigned long long int) var_9)))));
                var_22 = (i_4 % 2 == zero) ? (((/* implicit */long long int) min((((/* implicit */int) ((signed char) ((274609471488ULL) >> (((((/* implicit */int) arr_11 [i_1] [i_4])) + (21099))))))), ((~(((/* implicit */int) max((arr_6 [i_1] [i_1]), (arr_11 [(signed char)2] [i_4]))))))))) : (((/* implicit */long long int) min((((/* implicit */int) ((signed char) ((274609471488ULL) >> (((((((/* implicit */int) arr_11 [i_1] [i_4])) + (21099))) + (5103))))))), ((~(((/* implicit */int) max((arr_6 [i_1] [i_1]), (arr_11 [(signed char)2] [i_4])))))))));
                var_23 = ((/* implicit */int) arr_13 [i_4] [i_3] [i_1] [i_4]);
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        arr_22 [i_5] [i_6] [i_5] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (arr_21 [i_6] [i_6 + 1] [i_5] [i_6 + 1] [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_1]))))));
                        var_24 = (+(arr_21 [i_6] [i_6] [i_6] [(short)17] [i_6 - 1] [i_6 - 1]));
                    }
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_6 + 1] [i_6 - 1])))))));
                    var_26 = ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_5] [i_5] [i_6 - 1] [i_6] [i_1] [i_5]))));
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    arr_26 [i_5] [7LL] = ((/* implicit */signed char) ((((4158779589708934135LL) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_5)))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        arr_29 [i_1] [i_1] [14ULL] [i_1] [i_9] = ((/* implicit */_Bool) ((arr_15 [i_5] [i_8]) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_8] [i_8])))));
                        var_27 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_3] [i_5])) + (((/* implicit */int) arr_6 [i_1] [i_9]))));
                        arr_30 [i_9] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_28 [i_8] [i_8] [i_8] [i_9] [i_8])) + (((/* implicit */int) arr_10 [i_3]))));
                        var_28 = ((/* implicit */long long int) max((var_28), (arr_4 [i_1] [i_3])));
                    }
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        arr_34 [i_1] [(unsigned short)13] [i_5] [5LL] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_3] [i_5] [i_8] [(signed char)15])) ? (arr_32 [i_1] [i_3] [i_5] [i_8] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [i_8])))));
                        arr_35 [i_1] [i_1] [i_1] [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_10] [i_8])) & (((/* implicit */int) arr_19 [i_3] [i_3]))));
                    }
                    arr_36 [2ULL] = ((/* implicit */short) ((long long int) arr_10 [i_1]));
                    var_29 = ((short) var_8);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_11 = 4; i_11 < 15; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) (~(((int) arr_17 [i_1] [i_1] [i_3] [i_5] [i_11 - 3] [i_12]))));
                        arr_43 [i_11] [i_5] [i_11 + 3] = ((/* implicit */long long int) arr_15 [i_1] [i_1]);
                        arr_44 [i_11] [i_5] = (-(((/* implicit */int) ((unsigned short) (signed char)0))));
                        var_31 = ((/* implicit */unsigned int) arr_13 [i_11] [i_11 + 3] [15LL] [(unsigned short)13]);
                    }
                    for (signed char i_13 = 1; i_13 < 14; i_13 += 4) 
                    {
                        arr_47 [i_1] [i_1] [i_3] [1LL] [i_11] [i_11] = ((/* implicit */short) var_6);
                        var_32 = ((/* implicit */unsigned char) ((unsigned short) var_6));
                    }
                    arr_48 [i_11] = ((/* implicit */long long int) ((arr_18 [i_11] [i_11 - 1] [i_11 - 2] [i_11]) ? (((arr_12 [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_11 [i_3] [i_11])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_21 [i_11] [i_3] [i_3] [i_3] [i_3] [i_3])) == (arr_9 [i_1]))))));
                    arr_49 [(short)10] [i_3] [i_11] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_17 [i_1] [12LL] [i_3] [(signed char)8] [i_5] [i_11]))))));
                    arr_50 [i_11] [i_11] [i_11 + 2] = (-(((/* implicit */int) arr_39 [i_1] [i_11 + 3] [(short)14] [i_11 + 3])));
                }
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 3; i_15 < 15; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((short) arr_24 [i_1] [i_1] [i_1])), (((/* implicit */short) ((var_13) == (arr_20 [i_3] [i_3] [i_16]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_15] [i_15 - 3] [i_15 - 3] [i_15 - 2]))) : (1477578860U)));
                            arr_59 [i_14] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) min((arr_19 [i_14] [i_15 + 1]), (arr_19 [i_14] [i_15 - 3])))) + (((/* implicit */int) max(((unsigned short)21355), (((/* implicit */unsigned short) var_10)))))));
                        }
                    } 
                } 
                arr_60 [i_1] [i_1] [i_14] [i_14] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((short) var_9))) ? ((-(((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_3] [i_3] [i_14])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_14] [i_3] [i_3] [i_3] [i_3] [i_3])), (arr_52 [i_1] [i_1] [i_14]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 1; i_17 < 17; i_17 += 4) 
                {
                    arr_63 [i_17] [i_17 + 1] [13LL] [i_14] [i_17] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_14] [i_17] [i_14] [i_17]))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))) <= (((unsigned long long int) arr_38 [i_1] [i_1] [i_1] [i_14] [i_17]))));
                    arr_64 [i_14] = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((int) (short)-4807)), (((/* implicit */int) max((arr_23 [i_14] [i_17]), (((/* implicit */short) (signed char)0)))))))), (arr_46 [i_1] [i_1] [i_1] [(signed char)3])));
                }
                arr_65 [i_1] [i_14] [i_1] [i_14] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_52 [i_1] [(short)1] [i_1]))))), (max((arr_52 [i_1] [i_1] [i_1]), (arr_52 [i_1] [i_1] [i_14])))));
            }
        }
        /* LoopSeq 3 */
        for (unsigned char i_18 = 0; i_18 < 18; i_18 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_19 = 0; i_19 < 18; i_19 += 3) /* same iter space */
            {
                var_34 |= ((/* implicit */short) arr_4 [15ULL] [15ULL]);
                var_35 = ((/* implicit */int) ((signed char) arr_9 [i_1]));
                arr_71 [i_1] [i_18] [i_19] [i_1] = ((/* implicit */unsigned char) 65011712U);
                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (-(((max((((/* implicit */unsigned int) arr_11 [i_1] [i_1])), (arr_21 [i_18] [i_18] [i_19] [i_18] [i_18] [i_19]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_56 [i_1]))))))))))));
            }
            for (unsigned short i_20 = 0; i_20 < 18; i_20 += 3) /* same iter space */
            {
                arr_74 [(unsigned short)0] [(unsigned short)0] = ((/* implicit */_Bool) min((arr_24 [i_1] [i_1] [i_1]), (((((/* implicit */_Bool) max((arr_61 [i_1] [i_1] [(unsigned short)4]), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_18] [i_20] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (var_5)))))));
                var_37 = ((/* implicit */unsigned char) ((signed char) ((unsigned short) (signed char)-26)));
            }
            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) (-((+(arr_21 [i_1] [i_1] [i_1] [i_18] [i_18] [i_18])))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) arr_18 [(short)12] [16LL] [i_18] [i_18])))) / (max((arr_27 [(unsigned char)14] [i_18] [(unsigned short)17] [i_18] [(_Bool)1]), (((/* implicit */long long int) var_15)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-18417))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_18] [i_18])) ? (arr_9 [10LL]) : (((/* implicit */unsigned long long int) var_4)))))))))));
            var_39 = ((/* implicit */int) (_Bool)1);
        }
        for (unsigned short i_21 = 0; i_21 < 18; i_21 += 1) 
        {
            arr_77 [i_21] = ((/* implicit */long long int) min((((((/* implicit */int) arr_12 [i_21] [i_21] [i_1] [i_21])) >> (((((int) var_5)) + (606831617))))), (((/* implicit */int) min((arr_57 [i_21] [i_21] [i_1] [(unsigned char)10]), (arr_57 [i_1] [i_1] [i_1] [(unsigned short)10]))))));
            /* LoopSeq 1 */
            for (short i_22 = 2; i_22 < 17; i_22 += 2) 
            {
                var_40 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [i_22]))))) ? (max((((arr_15 [i_1] [i_21]) ? (-4998695983114993727LL) : (arr_4 [(short)8] [i_22 + 1]))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_1] [i_1] [i_21] [i_22])))));
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 18; i_23 += 4) 
                {
                    var_41 |= ((/* implicit */unsigned int) min((((((/* implicit */int) ((short) arr_31 [i_1] [i_1] [i_1] [i_21] [i_21] [i_23]))) + (((((/* implicit */_Bool) arr_78 [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_79 [i_1])))))), (((/* implicit */int) ((max((arr_32 [i_1] [i_1] [i_21] [i_22] [i_22] [i_21] [i_23]), (((/* implicit */long long int) (unsigned short)0)))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) <= (var_6))))))))));
                    var_42 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) (+(var_4)))), (max((0LL), (((/* implicit */long long int) arr_81 [i_1] [9LL] [9LL] [i_1] [i_1] [i_1]))))))));
                }
                arr_83 [i_1] [i_21] [i_21] = (-((-(min((var_9), (var_9))))));
                var_43 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) arr_51 [i_1] [i_21] [i_22] [i_21])) >= (((/* implicit */int) arr_31 [i_1] [i_1] [(signed char)14] [(signed char)13] [i_22] [i_22]))))) != (((/* implicit */int) min((((/* implicit */short) arr_53 [i_1] [i_1] [i_21] [i_22])), (arr_56 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_54 [i_1] [i_1] [i_22] [i_1]))))))))) : (max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) var_11)) ? (-6778902103728792336LL) : (arr_24 [i_1] [17U] [i_1])))))));
            }
        }
        for (unsigned short i_24 = 3; i_24 < 16; i_24 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_25 = 0; i_25 < 18; i_25 += 4) 
            {
                for (unsigned char i_26 = 4; i_26 < 16; i_26 += 4) 
                {
                    {
                        var_44 = ((/* implicit */short) arr_28 [i_1] [i_1] [i_25] [i_24] [i_24 - 3]);
                        var_45 = arr_53 [i_1] [i_1] [i_1] [i_1];
                        var_46 = ((/* implicit */_Bool) (signed char)-76);
                        var_47 = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_14)))), (((((/* implicit */_Bool) arr_33 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_1] [i_1] [i_24])))))))));
                        arr_92 [i_1] [i_24] [i_24] [14ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (((-(var_8))) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_26 + 1] [i_26 + 2]))))))));
                    }
                } 
            } 
            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) var_1))));
        }
        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (((((/* implicit */_Bool) arr_23 [i_1] [i_1])) ? (arr_91 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_6)))))))));
    }
    for (short i_27 = 0; i_27 < 18; i_27 += 4) /* same iter space */
    {
        var_50 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(0LL)))) || (((/* implicit */_Bool) min((((/* implicit */int) (short)25353)), (var_13)))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_21 [i_27] [i_27] [i_27] [i_27] [(short)12] [i_27])))))));
        var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) max((-7374665465974815354LL), (9197204348962838617LL))))));
        var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) (+(var_5))))));
    }
    var_53 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)59701))))) & (var_2)))));
    var_54 = ((/* implicit */short) var_8);
    var_55 = ((/* implicit */long long int) var_14);
}
