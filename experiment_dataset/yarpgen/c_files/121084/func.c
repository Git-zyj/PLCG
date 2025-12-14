/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121084
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
    var_16 &= ((/* implicit */int) var_10);
    var_17 = ((/* implicit */signed char) var_8);
    var_18 = ((/* implicit */long long int) var_0);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2125883261)) ? (arr_0 [i_0] [5LL]) : (((/* implicit */unsigned long long int) -26698694))))))))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                arr_7 [i_1] [i_1] [i_1] [i_1] |= arr_0 [i_1] [i_1];
                var_20 = ((/* implicit */signed char) var_6);
                var_21 &= ((/* implicit */int) (unsigned char)1);
            }
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_22 *= ((signed char) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 1])) ? (arr_10 [i_0 - 2] [5ULL] [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            arr_18 [i_5] [i_0] [i_4] [i_3] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_4] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) arr_5 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) arr_16 [i_0])) ? (((((/* implicit */_Bool) -26698694)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))) : (((/* implicit */unsigned long long int) arr_14 [i_0 - 2] [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [(signed char)1] [i_0 + 1] [(signed char)1] [i_0] [(signed char)1]))));
            }
            var_24 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)12))));
        }
        arr_19 [(unsigned char)4] |= ((/* implicit */signed char) (+(((/* implicit */int) var_12))));
    }
    for (signed char i_6 = 3; i_6 < 10; i_6 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(26698694))))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3313375308159393213LL)) ? (((unsigned long long int) (unsigned char)57)) : (((/* implicit */unsigned long long int) max((max((arr_14 [i_6] [(signed char)10] [i_7] [i_8] [8]), (((/* implicit */unsigned int) arr_17 [(signed char)0] [(signed char)10] [i_8] [0ULL] [i_8])))), (((/* implicit */unsigned int) arr_16 [(signed char)6])))))));
                arr_28 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) var_14)))))), (((((/* implicit */_Bool) (signed char)11)) ? (((((/* implicit */_Bool) 8762660645876281952LL)) ? (8762660645876281960LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-12))))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) ((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8762660645876281952LL)) ? (20190649) : (((/* implicit */int) (unsigned char)199))))) && (((/* implicit */_Bool) var_13))))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -760411173359203337LL)) ? (((/* implicit */int) arr_27 [i_6 - 2] [i_6 - 2] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_27 [i_6 - 1] [i_6] [i_6] [i_6 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [(signed char)9] [i_7]))) : ((-(3313375308159393213LL)))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 8762660645876281953LL)))) >= ((-(arr_9 [i_6 - 2] [i_6])))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_9 [i_6] [(signed char)0]))));
            }
            /* LoopSeq 3 */
            for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                var_31 |= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6 - 2]))) | (((((/* implicit */_Bool) -8762660645876281961LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))) : (var_1))))));
                var_32 = ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)1)), ((unsigned char)207)));
            }
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (~(((/* implicit */int) var_11)))))));
                arr_37 [i_6] [(signed char)7] [i_7] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(arr_11 [i_6] [i_6 - 3] [4ULL] [i_6 - 2] [i_6] [i_6])))) >= (arr_10 [0ULL] [i_7] [i_7] [i_6 - 3]))))) <= (((((/* implicit */_Bool) arr_36 [i_6] [i_6])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) | (arr_8 [i_6]))) : (arr_6 [i_6] [i_6] [i_6])))));
            }
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_17 [i_6] [i_6 + 1] [i_6] [i_13] [i_6 - 1])) >= (((/* implicit */int) arr_17 [i_6] [i_6 - 2] [i_6 + 1] [i_13] [i_6 + 1]))))))))));
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    arr_43 [i_6] [4] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]))));
                    arr_44 [i_14] [i_6 - 1] [(signed char)4] [i_14] |= ((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_40 [i_6 - 1] [i_14] [i_6 + 1])), ((+(arr_5 [i_14])))))));
                }
            }
            /* LoopSeq 3 */
            for (int i_15 = 1; i_15 < 10; i_15 += 2) 
            {
                var_35 &= ((/* implicit */unsigned char) ((signed char) ((signed char) (+(((/* implicit */int) arr_41 [(unsigned char)10] [i_7] [i_7] [i_7] [i_7]))))));
                arr_47 [1] [4LL] [i_15 - 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17639191771725623013ULL)) ? (arr_11 [i_6] [i_6 - 1] [i_7] [i_6 - 1] [i_6] [8ULL]) : (((/* implicit */int) (unsigned char)68))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                arr_50 [i_6] = ((/* implicit */unsigned long long int) var_11);
                /* LoopNest 2 */
                for (signed char i_17 = 3; i_17 < 9; i_17 += 4) 
                {
                    for (unsigned int i_18 = 4; i_18 < 10; i_18 += 4) 
                    {
                        {
                            arr_55 [i_6] [i_7] [i_7] [i_17 - 2] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_6] [(signed char)6] [(unsigned char)0] [i_6] [i_18 + 1] [i_6]))));
                            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(17639191771725622998ULL))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
            {
                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (+(1475125756U)))))))))));
                var_38 = ((/* implicit */signed char) var_3);
                arr_59 [(signed char)0] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) min((((/* implicit */long long int) (unsigned char)193)), (arr_23 [(signed char)0] [i_7] [i_6])))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_31 [i_6 + 1] [i_6 - 3] [(signed char)9] [i_6] [3U] [i_19])) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) var_4)))))))));
            }
            /* LoopNest 3 */
            for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                for (int i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    for (signed char i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (signed char)-91))))) ? (137437904896ULL) : (arr_42 [i_22] [i_21] [i_21] [i_21] [i_6 - 1] [i_6])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_21] [i_21] [8ULL])) ? (137437904896ULL) : (((/* implicit */unsigned long long int) ((2773864157549624029LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))))))))))))));
                            arr_67 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? ((-2147483647 - 1)) : (min((((/* implicit */int) arr_17 [i_6] [i_7] [i_20] [i_6] [(unsigned char)5])), (((((/* implicit */int) (signed char)-20)) + (((/* implicit */int) arr_58 [i_21] [i_20] [i_7]))))))));
                        }
                    } 
                } 
            } 
        }
        var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 26698694))));
    }
    for (signed char i_23 = 3; i_23 < 10; i_23 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_24 = 0; i_24 < 11; i_24 += 4) /* same iter space */
        {
            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (signed char)-73))));
            /* LoopSeq 1 */
            for (unsigned long long int i_25 = 1; i_25 < 10; i_25 += 4) 
            {
                arr_74 [i_23] [i_24] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_0)) : (16383))))))));
                var_42 &= ((/* implicit */signed char) (~(arr_25 [i_25 - 1])));
            }
            arr_75 [(signed char)2] [i_23] [i_24] = ((/* implicit */signed char) (+(((/* implicit */int) ((max((arr_20 [i_23]), (((/* implicit */unsigned int) (unsigned char)150)))) != (((/* implicit */unsigned int) (-(((/* implicit */int) arr_68 [i_23] [i_23]))))))))));
        }
        for (unsigned int i_26 = 0; i_26 < 11; i_26 += 4) /* same iter space */
        {
            arr_79 [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_5 [i_23])) + ((+((+(7317642188056898643LL)))))));
            var_43 = ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) arr_21 [i_23] [i_23 + 1])), (((arr_42 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23] [i_26] [i_26]) << (((/* implicit */int) arr_51 [5ULL] [(signed char)0])))))));
            arr_80 [i_23] [i_26] [i_23] = ((signed char) ((long long int) (signed char)31));
            arr_81 [i_23] [i_23] [i_23 - 1] = max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)105)) && (((/* implicit */_Bool) (signed char)-11))))), (((signed char) (+(((/* implicit */int) arr_51 [7U] [i_23]))))));
        }
        /* vectorizable */
        for (unsigned int i_27 = 0; i_27 < 11; i_27 += 4) /* same iter space */
        {
            arr_84 [i_23] [(signed char)0] [i_27] = ((/* implicit */unsigned char) (-(arr_9 [i_23 - 2] [i_23])));
            arr_85 [i_23] = ((/* implicit */long long int) (+(var_7)));
            var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) var_11))));
        }
        /* LoopNest 2 */
        for (signed char i_28 = 0; i_28 < 11; i_28 += 2) 
        {
            for (int i_29 = 0; i_29 < 11; i_29 += 4) 
            {
                {
                    arr_91 [i_23] [i_28] [i_28] [i_29] |= arr_48 [i_23 - 1] [i_23] [i_23 - 2] [i_23 + 1];
                    arr_92 [0ULL] [i_28] &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) var_14)) : (-26698697)))));
                    arr_93 [i_29] [i_29] [i_23] [i_29] = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_51 [i_23 - 2] [i_23 - 2]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_30 = 0; i_30 < 11; i_30 += 3) 
        {
            for (int i_31 = 3; i_31 < 9; i_31 += 3) 
            {
                for (unsigned int i_32 = 3; i_32 < 10; i_32 += 3) 
                {
                    {
                        var_45 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_23]))));
                        arr_104 [(signed char)2] [i_23] [i_30] [i_23] [i_23] = ((/* implicit */unsigned char) min((var_2), ((+(min((var_2), (((/* implicit */unsigned long long int) (signed char)47))))))));
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (arr_83 [i_31] [4ULL])));
                    }
                } 
            } 
        } 
    }
}
