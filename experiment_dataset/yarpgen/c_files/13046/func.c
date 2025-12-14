/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13046
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 2] [i_1 - 2] [(unsigned short)2])) ? (min((arr_8 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3]), (((/* implicit */unsigned long long int) var_15)))) : (arr_8 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) (((_Bool)1) ? (arr_9 [i_2 + 2] [i_2 + 2] [i_2] [i_2] [(signed char)4] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147)))));
                            var_22 -= ((/* implicit */unsigned short) (+(arr_12 [i_4] [i_3] [i_0] [(unsigned short)2] [i_0])));
                            arr_16 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) arr_15 [i_0] [i_2]);
                            var_23 = ((/* implicit */short) arr_14 [i_3] [i_3] [i_2] [i_1 - 1] [i_0]);
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((long long int) var_13))) ? (min((((/* implicit */long long int) var_0)), (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_1 [i_3])))))))) <= (((/* implicit */long long int) ((((/* implicit */int) var_19)) + (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                        {
                            var_25 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) arr_15 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))) : (arr_4 [i_5]))), (((/* implicit */unsigned int) arr_19 [i_0] [8LL] [i_1 - 3] [i_1] [i_2] [i_3] [i_5]))));
                            var_26 ^= ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), (arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2] [i_1 - 1] [i_2])))) || ((!((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_3])))))));
                        }
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1307918820156362340LL)), (12084651836316054447ULL))))));
                            arr_25 [i_6] [i_2 + 3] [i_3] [i_2] [i_2 + 3] [8LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_15))) * (((((/* implicit */_Bool) arr_21 [i_1 + 1] [(_Bool)1] [i_1] [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_11 [i_6] [i_2 + 3] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_11 [i_6] [i_2 + 3] [i_1 + 1] [i_0]))))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (arr_23 [i_6] [i_3] [i_2] [i_0] [i_0]) : (((/* implicit */int) var_15))))) ? (((arr_4 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) (~(((((/* implicit */int) var_14)) * (((/* implicit */int) var_10)))))))));
                            arr_26 [(_Bool)0] [i_1] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_14 [(unsigned char)6] [i_0] [i_0] [i_3] [i_6])), (arr_4 [i_0])));
                        }
                        var_29 = ((/* implicit */unsigned char) max((arr_9 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0]), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_2 [i_2 + 2])))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (((-(max((((/* implicit */unsigned long long int) arr_4 [i_7])), (var_4))))) / (((/* implicit */unsigned long long int) min((min((((/* implicit */int) arr_18 [i_0] [i_1] [(_Bool)0] [i_7])), (arr_1 [i_1]))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned char)8] [i_7])) : (((/* implicit */int) arr_5 [i_0] [i_2] [(unsigned short)9]))))))))))));
                            arr_29 [i_0] [i_0] [i_2] [i_1 - 1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (arr_14 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_3] [i_7])));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_2] [i_0])) * (((/* implicit */int) arr_13 [i_8] [i_3] [i_1 + 1] [5U] [i_1 + 1] [i_0]))))))))));
                            var_32 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_4 [i_1])), (var_2)));
                        }
                        var_33 = ((unsigned long long int) max((((/* implicit */long long int) arr_28 [i_2 + 1] [i_2 + 2] [i_2 + 3])), (var_2)));
                    }
                } 
            } 
        } 
        var_34 = min((((/* implicit */int) arr_28 [i_0] [i_0] [i_0])), (min((((/* implicit */int) arr_28 [i_0] [i_0] [i_0])), (((((/* implicit */int) var_5)) & (((/* implicit */int) var_15)))))));
        arr_32 [i_0] &= ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) var_11)), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_0))))))))) : (((unsigned long long int) (_Bool)0))));
        arr_33 [i_0] = ((/* implicit */_Bool) 8329208904340109072LL);
    }
    for (int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_35 = ((/* implicit */int) arr_13 [i_11] [(_Bool)1] [6ULL] [i_9] [i_9] [i_9]);
                arr_42 [i_9] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((int) arr_34 [i_11])) + (((/* implicit */int) ((arr_2 [(unsigned short)11]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_9] [i_10 - 1] [i_11]))))))))) && (var_13)));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    arr_45 [i_12] = ((/* implicit */signed char) var_15);
                    arr_46 [i_12] [i_9] [i_9] [i_12] [i_9] [i_9] = ((/* implicit */_Bool) min((((/* implicit */int) max((max((((/* implicit */unsigned short) var_19)), (arr_13 [i_9] [i_11] [i_11] [i_12] [i_9] [i_9]))), (((/* implicit */unsigned short) ((_Bool) arr_8 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))), ((~(((/* implicit */int) ((signed char) var_4)))))));
                    arr_47 [i_9] [i_10] [i_10] [i_12] [i_9] = (!(((/* implicit */_Bool) (((~(arr_40 [i_10] [i_10] [i_10] [i_10]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_9] [i_9] [7U] [i_9] [i_9] [6LL]))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        arr_50 [i_12] [i_12] [i_11] [i_10] [i_10] [i_9] [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_23 [i_9] [i_10 + 2] [i_11] [i_12] [i_13])) < (max((min((((/* implicit */unsigned int) arr_21 [i_9] [2] [3ULL] [i_9] [i_13])), (arr_4 [i_9]))), (((/* implicit */unsigned int) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
                        var_36 = ((/* implicit */_Bool) min((min((var_18), (((/* implicit */unsigned int) arr_41 [i_13] [7LL] [i_9])))), (((/* implicit */unsigned int) arr_27 [i_10 + 2] [i_10 + 1] [i_10 - 1] [(unsigned short)11] [i_10 - 1]))));
                        var_37 = ((/* implicit */_Bool) var_2);
                        var_38 &= ((/* implicit */int) var_12);
                    }
                    var_39 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_44 [i_10] [i_10 - 1] [i_10] [i_10] [i_9]), (arr_44 [i_10] [i_10 + 2] [(unsigned short)10] [i_10 + 2] [i_9])))), ((+(min((arr_48 [11] [i_10 - 1] [i_10] [i_11] [i_11] [i_12]), (((/* implicit */unsigned long long int) arr_6 [i_9] [3LL] [5LL] [i_12]))))))));
                }
            }
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_49 [i_9] [i_15] [i_9] [i_15] [i_16 - 1] [i_14])) * (((/* implicit */int) arr_49 [i_9] [i_9] [i_10 - 1] [i_16] [i_16 - 1] [i_15]))))));
                            var_41 = ((/* implicit */int) arr_48 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                            arr_62 [(unsigned short)4] [i_10] [5U] [(unsigned short)8] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((_Bool) arr_54 [i_9] [i_10 + 1] [i_14] [i_14] [7U])))))));
                            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 3879595619U)), (var_6))), (((unsigned long long int) arr_43 [i_16] [i_14] [(unsigned char)4] [i_14] [i_14] [i_9]))))) ? (((/* implicit */int) arr_15 [i_10] [i_15])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_16 - 1] [i_10 + 2] [i_16 - 1]))))))))));
                            var_43 -= ((/* implicit */unsigned short) var_19);
                        }
                    } 
                } 
                arr_63 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_52 [i_9] [i_9] [i_9] [i_9]))));
                var_44 = ((/* implicit */unsigned char) min((max((var_16), (((/* implicit */unsigned long long int) arr_52 [i_9] [i_10] [i_10] [i_14])))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)38)))))))));
            }
            arr_64 [i_10] [i_10] [i_10] = ((/* implicit */int) min((((/* implicit */long long int) arr_30 [i_9] [i_10] [i_9] [i_9] [i_9] [7])), (((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_1 [(signed char)7])))) ? (((/* implicit */long long int) min((arr_1 [i_9]), (((/* implicit */int) arr_41 [i_9] [i_9] [i_10]))))) : (min((((/* implicit */long long int) var_19)), (var_2)))))));
            var_45 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) max((arr_10 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]), (arr_10 [i_10 + 1] [i_10 + 2] [i_10 + 2] [i_10 - 1])))), (arr_21 [i_9] [i_9] [6U] [(_Bool)1] [i_10])));
            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_10] [i_10 + 1] [4ULL] [i_10] [i_10 - 1]))) ? (min((arr_59 [i_10] [i_10 + 1] [i_10 + 2] [(signed char)1]), (((/* implicit */unsigned long long int) arr_27 [i_10] [i_10 + 1] [(unsigned char)11] [(unsigned char)11] [i_10])))) : (((/* implicit */unsigned long long int) max((arr_27 [i_9] [i_10 + 1] [i_10] [i_10] [i_10]), (arr_27 [i_10] [i_10 + 1] [i_10] [i_10 + 2] [i_10])))))))));
        }
        for (unsigned int i_17 = 3; i_17 < 10; i_17 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_18 = 1; i_18 < 10; i_18 += 3) 
            {
                for (long long int i_19 = 4; i_19 < 10; i_19 += 4) 
                {
                    {
                        var_47 = ((/* implicit */unsigned short) min((var_47), (arr_52 [i_9] [i_17] [i_18] [i_19])));
                        var_48 -= ((/* implicit */_Bool) arr_12 [i_17] [i_17 + 1] [i_17 - 1] [i_17 - 3] [i_17 - 2]);
                        var_49 = ((/* implicit */unsigned long long int) var_11);
                    }
                } 
            } 
            var_50 = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_41 [i_17 - 3] [i_17 - 3] [i_17 + 2]), (arr_41 [i_17 + 1] [i_17 - 2] [i_17 + 2]))))));
            var_51 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) arr_41 [i_9] [i_17] [i_17])) ? (var_2) : (8329208904340109072LL))))) < (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_9])))));
            arr_74 [i_9] = (((~(((/* implicit */int) var_14)))) < (((/* implicit */int) (((!(((/* implicit */_Bool) arr_12 [i_9] [i_9] [9LL] [i_17 - 3] [i_17])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_9] [(signed char)1] [i_17] [i_17])), (arr_8 [i_9] [i_9] [(_Bool)1] [(_Bool)1] [i_9] [i_17]))))))));
        }
        for (unsigned int i_20 = 3; i_20 < 10; i_20 += 4) /* same iter space */
        {
            arr_77 [i_9] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (_Bool)0))));
            arr_78 [i_20] = min((((((/* implicit */int) min((arr_56 [i_9] [i_20] [i_9]), (((/* implicit */unsigned char) var_11))))) + (((/* implicit */int) arr_56 [i_20] [i_9] [i_9])))), ((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_55 [(unsigned char)4] [i_20 - 2] [8U] [i_20])), (var_0)))))));
        }
        var_52 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_3)))))))), (arr_57 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
        var_53 |= max((((/* implicit */unsigned long long int) (+(max((arr_22 [i_9] [i_9] [i_9] [i_9]), (arr_60 [i_9] [(signed char)6] [(_Bool)1] [i_9] [i_9])))))), (var_16));
    }
    var_54 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) < (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) var_7))))), (((var_3) ? (7316177140995915479LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) : ((+(((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
}
