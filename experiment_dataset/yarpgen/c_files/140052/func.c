/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140052
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
    var_18 = ((/* implicit */unsigned char) var_11);
    var_19 |= ((/* implicit */int) max((((/* implicit */unsigned int) (~(((int) var_1))))), (((((/* implicit */_Bool) 1698891745U)) ? (3517193871U) : (753658844U)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_20 *= ((/* implicit */signed char) (((~(var_16))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_14))));
                        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) (unsigned short)41571)) : (((/* implicit */int) (unsigned short)23964))));
                        arr_10 [2] [i_0] [i_1] [i_2] [i_3] = arr_9 [i_2] [i_2] [i_2] [i_3 - 1];
                    }
                } 
            } 
            var_23 -= ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41571))) % (8233034743451319214ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((var_11), (((/* implicit */long long int) (unsigned short)41571)))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (signed char)-25))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((var_17), (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_7 [i_4] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0] [i_1])))))))));
                            var_25 = ((unsigned char) ((arr_12 [i_5 - 1] [i_5] [i_5] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        }
                        for (signed char i_7 = 3; i_7 < 22; i_7 += 2) 
                        {
                            var_26 = var_5;
                            var_27 = ((/* implicit */signed char) ((var_17) / (((/* implicit */int) (unsigned char)36))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)1284)) || (((/* implicit */_Bool) 6766174566647939235ULL))));
                        }
                        var_29 -= var_5;
                        arr_20 [13U] [i_1] [i_4] [i_5] = ((/* implicit */int) var_14);
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_17)))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0])))))) ? (((/* implicit */int) arr_18 [i_1])) : (var_17)));
        }
        for (signed char i_8 = 2; i_8 < 24; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_9 = 2; i_9 < 24; i_9 += 1) 
            {
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_19 [i_8] [i_8] [i_8 - 2] [i_9 - 1] [i_8 - 2] [i_8 - 2])) * (((((/* implicit */_Bool) (unsigned short)41567)) ? (9080248120111725562ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68)))))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_6 [i_8 + 1] [i_8] [(unsigned char)21] [i_8])) << (((((/* implicit */int) (unsigned short)1275)) - (1262)))))))) ? (((/* implicit */long long int) var_5)) : (((var_11) - (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                    arr_27 [(unsigned short)18] [i_8] [i_8] [3LL] [21U] [i_10] = ((/* implicit */unsigned char) arr_11 [i_10] [i_10] [i_10] [19]);
                    var_33 = ((/* implicit */unsigned char) (~((~(2875278837U)))));
                }
                for (unsigned char i_11 = 1; i_11 < 23; i_11 += 2) 
                {
                    var_34 = ((/* implicit */long long int) arr_11 [i_11] [16ULL] [16ULL] [16ULL]);
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (min((((unsigned long long int) (~(((/* implicit */int) (signed char)68))))), (((/* implicit */unsigned long long int) ((unsigned char) var_0)))))));
                    arr_32 [i_9] [i_0] [i_8] [i_11 - 1] = ((/* implicit */unsigned char) var_13);
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -2059996339260460976LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)1256)) : (((/* implicit */int) (unsigned short)28978))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) ^ (391006743U))) : (((((/* implicit */_Bool) arr_18 [i_8 + 1])) ? (arr_30 [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8 - 2])))))));
                }
                for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    arr_36 [(unsigned short)11] [(unsigned char)23] [(signed char)3] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (((((/* implicit */long long int) arr_3 [i_8 - 1] [i_8 - 2] [i_8 - 2])) - (var_11)))));
                    var_37 = (signed char)66;
                }
                arr_37 [i_9] [i_8] [i_8] [i_0] = var_4;
            }
            for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                var_38 ^= arr_1 [i_8];
                arr_40 [i_0] [i_8] [i_13] [i_0] &= ((/* implicit */int) 7023288693140941096ULL);
                /* LoopSeq 1 */
                for (int i_14 = 4; i_14 < 23; i_14 += 1) 
                {
                    arr_43 [i_8] [i_13] [6U] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8 - 2] [i_8 - 2] [i_8] [i_8 + 1] [i_8])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_14 + 1] [i_14] [i_14 - 3] [i_14 - 3] [9U])))))) ? (min((6428780550008882175LL), (((/* implicit */long long int) (unsigned char)255)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [i_14 - 3] [(unsigned char)23] [i_14] [i_14 - 3])))))));
                    var_39 |= ((/* implicit */unsigned int) 11423455380568610502ULL);
                    var_40 -= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (signed char)127))) ^ (((/* implicit */int) max(((signed char)92), ((signed char)-10))))));
                    var_41 = ((/* implicit */unsigned int) var_15);
                }
            }
            var_42 = arr_8 [(unsigned short)12] [i_8] [i_8] [i_0];
        }
        /* LoopSeq 1 */
        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 4; i_16 < 22; i_16 += 2) 
            {
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((long long int) (~(((/* implicit */int) (signed char)61))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)68)) - (((/* implicit */int) (signed char)61)))))));
                arr_49 [i_16] [i_15] [i_15] [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */long long int) ((1078681271U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_15] [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)99)) ? (7023288693140941096ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_16] [i_15] [i_0] [i_0])))))) ? (arr_29 [i_16 - 4] [i_16 - 2] [i_16 - 2] [i_16 + 1]) : (((/* implicit */long long int) var_5))))));
                /* LoopSeq 3 */
                for (signed char i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    var_44 -= ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                    arr_52 [i_0] [i_15] [i_16 - 4] [i_0] [i_17] = ((/* implicit */unsigned short) ((long long int) var_1));
                    /* LoopSeq 2 */
                    for (int i_18 = 2; i_18 < 24; i_18 += 2) 
                    {
                        var_45 = ((/* implicit */int) min((((((/* implicit */long long int) var_14)) / (var_10))), (((((/* implicit */_Bool) 3697401050845650020LL)) ? (-3697401050845650021LL) : (((/* implicit */long long int) 1658984321U))))));
                        var_46 -= ((/* implicit */int) max((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) arr_15 [i_0] [3U] [i_15] [i_16] [i_17] [(unsigned char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((~(arr_46 [i_16] [i_16])))))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned short) max((max((arr_34 [i_16 + 3] [i_16 - 2] [i_16 + 1]), (arr_34 [i_16 - 1] [i_16 + 1] [i_16 + 3]))), (((/* implicit */unsigned char) arr_38 [i_16 + 2] [i_16 - 2] [i_16 - 2] [i_16 - 3]))));
                        var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_16] [i_15] [i_16 + 1] [i_16 + 3] [i_19] [i_15]))) : (max((var_11), (((/* implicit */long long int) var_4)))))))));
                    }
                }
                for (long long int i_20 = 1; i_20 < 22; i_20 += 4) 
                {
                    arr_61 [i_0] [i_15] [i_0] [i_20 + 3] = ((/* implicit */int) 777773424U);
                    arr_62 [13ULL] = ((/* implicit */unsigned short) ((11423455380568610502ULL) <= (((/* implicit */unsigned long long int) 3697401050845650039LL))));
                    var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) ((arr_28 [i_0] [i_0]) <= (((/* implicit */int) var_0)))))));
                }
                for (unsigned short i_21 = 0; i_21 < 25; i_21 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_22 = 0; i_22 < 25; i_22 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned long long int) ((arr_9 [i_16 - 2] [i_16] [i_16 + 1] [i_16]) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3697401050845650021LL))))));
                        var_51 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) arr_66 [(unsigned short)16] [(signed char)14] [7ULL] [16U] [i_22])))));
                    }
                    for (unsigned short i_23 = 3; i_23 < 24; i_23 += 2) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_0] [i_15] [i_16] [i_21]) == (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-42)), (arr_64 [i_21]))))))))) ^ (var_14)));
                        var_53 = ((/* implicit */unsigned int) max((var_53), (((unsigned int) max((var_15), (max((var_1), (arr_1 [i_0]))))))));
                    }
                    for (unsigned short i_24 = 3; i_24 < 24; i_24 += 2) /* same iter space */
                    {
                        arr_74 [11U] [10ULL] [i_24] [i_24] = max((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)167)) || (((/* implicit */_Bool) arr_44 [i_0] [10ULL])))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (3758096384U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (arr_47 [i_0] [14LL] [i_21] [i_24]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))));
                        arr_75 [i_0] [i_15] [i_16 - 1] [(unsigned short)5] [i_24] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) (unsigned char)6)));
                        arr_76 [i_0] [i_15] [i_16] [(unsigned char)11] [10U] [i_16] [4U] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_16 - 1] [i_16 - 1] [i_24 + 1] [23U]))))));
                    }
                    arr_77 [i_0] [i_15] [i_16] [i_21] |= ((/* implicit */unsigned int) var_7);
                }
                var_54 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)68)) || (((/* implicit */_Bool) (signed char)74))));
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 25; i_25 += 1) 
                {
                    for (int i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        {
                            var_55 = ((/* implicit */signed char) ((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                            var_56 ^= ((/* implicit */unsigned long long int) var_1);
                            var_57 ^= ((/* implicit */signed char) ((arr_79 [i_26] [i_15] [i_16 + 3] [i_25]) - (arr_70 [(signed char)13])));
                            var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (((((/* implicit */_Bool) var_3)) ? (var_5) : (var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (min((7102309679135269010ULL), (((/* implicit */unsigned long long int) (signed char)113))))));
                        }
                    } 
                } 
            }
            var_59 *= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((signed char) (signed char)120))) ? (4168561507U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))));
            var_60 = ((/* implicit */unsigned short) min((var_60), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 1964671392)) <= (((11536819472204105875ULL) / (((/* implicit */unsigned long long int) -1885119316)))))) ? (var_7) : (var_11))))));
            arr_82 [i_15] [i_0] = ((/* implicit */signed char) arr_81 [i_0] [(signed char)21] [i_0] [i_0] [i_15]);
            var_61 &= ((/* implicit */unsigned long long int) ((signed char) arr_16 [i_0] [i_15] [i_0] [(unsigned char)21] [8ULL]));
        }
        var_62 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)69)) ? (1374917194U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))));
    }
    var_63 = ((/* implicit */int) min((var_63), (((/* implicit */int) min((min((var_16), (((/* implicit */unsigned int) ((3697401050845650055LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35273)))))))), (((/* implicit */unsigned int) -697270623)))))));
}
