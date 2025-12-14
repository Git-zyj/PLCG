/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137165
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
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) arr_1 [i_0 + 1])), (var_14)))))));
            var_19 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) ? (((((var_15) / (465748897))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)181))))))) : (((((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0 - 1] [i_1]) : (((/* implicit */int) var_5)))) & (((/* implicit */int) var_16))))));
            var_20 = arr_2 [i_0] [i_0];
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_9 [i_2] [i_2] &= ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -465748894)) ? (arr_6 [i_2] [i_1] [6] [(signed char)2] [i_1 + 2] [i_3]) : (((/* implicit */long long int) var_15))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181)))))))));
                            var_21 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [(unsigned short)5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [12] [i_1 + 3] [i_1 + 3]))) : (var_11)))) ? (((((/* implicit */_Bool) -465748890)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_3 [i_2] [i_3]))))));
                            var_22 = ((/* implicit */unsigned long long int) -465748898);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) arr_12 [i_3] [i_1] [10LL] [i_3] [i_5] [i_2] [i_1]);
                            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))));
                            var_25 = ((/* implicit */unsigned char) var_10);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_1 + 1])) ? (-465748894) : (arr_8 [0U] [i_3] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1])));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 1])) ? (2025330438U) : (((/* implicit */unsigned int) arr_12 [i_3] [(short)2] [i_2] [i_3] [i_5] [2LL] [i_3]))));
                        }
                        var_28 = ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_0] [(unsigned short)1] [(unsigned short)1])))))) : ((~(((((/* implicit */_Bool) arr_6 [i_3] [i_1] [4] [(_Bool)1] [1LL] [i_3])) ? (((/* implicit */int) var_17)) : (arr_0 [i_1] [i_1]))))));
                    }
                } 
            } 
        }
        arr_16 [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)4] [i_0])) ? ((~(((/* implicit */int) arr_10 [i_0])))) : ((~(465748920))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            arr_20 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_5)))))) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0 - 1]))))))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_6] [(unsigned char)6] [(unsigned char)6]))) : (arr_15 [i_0] [10LL] [i_6] [10LL] [i_6] [i_6]))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)97))) : (((/* implicit */int) (unsigned char)74))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                arr_24 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)57))));
                var_30 = ((/* implicit */unsigned short) ((long long int) (+(arr_8 [i_6 - 2] [i_7] [i_0 - 1] [i_6] [4LL] [i_6]))));
                arr_25 [i_7] [i_7] [i_7] = ((int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)3])))))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_0)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) -815277560)) - (13U))))));
            }
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_9))));
            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -465748910))));
        }
    }
    for (unsigned short i_9 = 3; i_9 < 12; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_10 = 1; i_10 < 10; i_10 += 1) /* same iter space */
        {
            var_34 += ((/* implicit */unsigned char) 3263957476U);
            arr_35 [i_9 - 1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32767)) ? (arr_8 [3LL] [i_10] [i_9] [i_9 - 1] [(unsigned char)10] [i_9]) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((signed char) (signed char)-40))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((signed char) 2269636857U)))));
            arr_36 [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (unsigned char)74)))))));
            var_35 = ((/* implicit */unsigned long long int) var_14);
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                var_36 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [4LL] [(short)3] [i_11])) / (((/* implicit */int) arr_28 [i_9] [i_10] [i_11]))));
                var_37 = ((/* implicit */signed char) (((!(var_17))) ? (((/* implicit */int) ((((var_7) % (-1))) >= (((/* implicit */int) var_14))))) : (((((/* implicit */int) ((signed char) 2025330439U))) - (((arr_8 [i_9] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_11]) / (((/* implicit */int) arr_17 [i_11]))))))));
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_10]))))) ? (((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */int) arr_27 [i_10])) : (((/* implicit */int) arr_19 [i_9] [i_9 - 2] [i_9 + 1])))) : ((-(((/* implicit */int) arr_19 [i_9 - 1] [i_10 + 1] [i_11]))))));
            }
            for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13259)) ? (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) arr_39 [i_9] [i_9] [i_10] [i_9]))))), ((~(((/* implicit */int) arr_37 [i_9] [i_10] [i_9] [i_12]))))))) : (var_3)));
                var_40 = ((/* implicit */short) arr_23 [(short)12] [(short)12] [(short)12]);
            }
        }
        /* vectorizable */
        for (short i_13 = 1; i_13 < 10; i_13 += 1) /* same iter space */
        {
            arr_45 [i_9] [11ULL] [11ULL] = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) (unsigned char)78)))));
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_9 - 1] [i_13 + 3])) ? (((/* implicit */int) arr_22 [i_9] [i_13] [i_9] [i_13 + 3])) : (((/* implicit */int) arr_22 [i_9 - 1] [i_13 + 1] [i_13 + 1] [i_9 - 3]))));
            var_42 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_9] [i_9] [(unsigned char)7])) ? (((/* implicit */int) arr_33 [i_9 - 1] [i_9] [0])) : (((/* implicit */int) (short)26472))));
            /* LoopSeq 2 */
            for (unsigned short i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                arr_49 [i_14] [(short)5] &= ((/* implicit */signed char) (+(arr_44 [i_9] [(unsigned short)5] [i_9])));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5038348508385503852LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -465748918)) ? (arr_23 [i_9 + 1] [i_13] [i_14]) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_17 [i_14])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45)))))));
                var_44 = ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */long long int) arr_42 [(unsigned char)2] [i_13 + 2] [i_13 + 2])) : (arr_6 [4LL] [i_13 + 3] [i_14] [i_9 - 1] [i_14] [(unsigned char)0]));
            }
            for (int i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                var_45 &= ((/* implicit */unsigned int) (-(-795326055)));
                var_46 = ((/* implicit */signed char) (-((+(var_11)))));
            }
            arr_53 [i_9] [i_9] [i_13 + 1] = ((/* implicit */signed char) arr_23 [i_9 - 3] [i_13 + 3] [i_13]);
        }
        for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
        {
            var_47 = ((/* implicit */int) var_14);
            var_48 = ((/* implicit */unsigned short) (~((~(var_7)))));
        }
        var_49 = ((/* implicit */int) ((signed char) (+(arr_32 [i_9] [0LL] [(signed char)6]))));
        arr_56 [(_Bool)1] = ((((/* implicit */_Bool) ((unsigned int) arr_43 [i_9] [i_9 - 1]))) ? (arr_0 [i_9 - 2] [(_Bool)1]) : ((+(((/* implicit */int) min((((/* implicit */short) var_17)), (var_8)))))));
    }
    for (unsigned short i_17 = 3; i_17 < 12; i_17 += 4) /* same iter space */
    {
        var_50 = ((/* implicit */long long int) (((-(((arr_34 [8LL] [i_17]) * (((/* implicit */unsigned long long int) 0)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_34 [(signed char)0] [i_17 - 1]))))));
        /* LoopSeq 1 */
        for (long long int i_18 = 3; i_18 < 9; i_18 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_19 = 1; i_19 < 10; i_19 += 4) 
            {
                var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) (+((((_Bool)1) ? (arr_44 [(unsigned short)10] [i_18] [i_17]) : (((/* implicit */int) var_2)))))))));
                var_52 += ((/* implicit */unsigned short) arr_38 [i_18] [i_19]);
                arr_65 [i_19] = ((/* implicit */unsigned char) (_Bool)1);
                var_53 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_17 - 1]))));
            }
            var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) ((signed char) (+(((((/* implicit */int) (signed char)5)) ^ (((/* implicit */int) (unsigned short)18701))))))))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_20 = 1; i_20 < 10; i_20 += 4) 
    {
        var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10695166907227336534ULL)) ? (arr_59 [i_20 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) arr_7 [i_20] [(unsigned char)4] [i_20 - 1] [i_20]))));
        var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)0)) ? (arr_0 [i_20 - 1] [2U]) : (((/* implicit */int) var_10)))) / (arr_8 [i_20 - 1] [(signed char)2] [i_20] [10] [i_20 + 1] [10]))))));
        var_57 = ((/* implicit */unsigned long long int) var_16);
    }
}
