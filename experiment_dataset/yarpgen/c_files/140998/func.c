/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140998
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
    var_10 |= ((/* implicit */unsigned int) (signed char)24);
    var_11 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (0LL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        var_12 ^= ((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_3 + 1] [i_3 - 1]);
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */long long int) var_4);
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 + 1]))) + (var_0)));
                            var_15 = ((/* implicit */int) ((((((/* implicit */long long int) arr_0 [i_0])) >= (arr_4 [i_4]))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (4043135543309581088LL) : (((/* implicit */long long int) arr_11 [i_1] [i_2] [i_3 + 1] [i_2])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_2] [i_0])) ^ (((/* implicit */int) arr_8 [i_0] [i_1] [i_4])))))));
                            var_16 = arr_1 [i_0];
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (arr_9 [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_2] [i_5 + 1])) < (arr_11 [i_0] [i_1] [i_2] [i_2]))))));
                                var_18 = ((/* implicit */int) ((arr_13 [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                                arr_20 [i_0] [i_2] [i_2] [i_5 + 1] = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_25 [i_8] = ((/* implicit */int) max((arr_23 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */long long int) 3596570958U)) != (max((((/* implicit */long long int) arr_24 [i_0] [i_1] [i_7] [i_8])), (var_5))))))));
                        var_19 = ((/* implicit */long long int) arr_17 [i_0] [i_1] [i_7] [i_7] [i_8]);
                    }
                    for (unsigned short i_9 = 1; i_9 < 8; i_9 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */signed char) arr_23 [i_0] [i_1] [i_7] [i_9 + 4]);
                        var_21 = ((/* implicit */unsigned short) max((2459816648U), (3419480919U)));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_2))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 8; i_10 += 1) /* same iter space */
                    {
                        var_23 = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_14 [i_1] [i_1])), (arr_17 [i_0] [i_1] [i_1] [i_7] [i_10 + 3]))), (((/* implicit */unsigned int) var_9))))) ? (((max((((/* implicit */long long int) 3596570958U)), (7391569916419099509LL))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_14 [i_0] [i_1]), (var_2))))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) 2147483647)), (arr_0 [i_10 + 3])))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            arr_35 [i_7] [i_1] = ((/* implicit */signed char) max((max((max((698396337U), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (arr_12 [i_11] [i_1] [i_7] [i_10 + 1] [i_11])))))), (((/* implicit */unsigned int) arr_21 [i_0] [i_1] [i_7] [i_11]))));
                            arr_36 [i_10 + 4] [i_7] [i_1] [i_0] = ((/* implicit */signed char) arr_31 [i_0] [i_0] [i_0] [i_0]);
                        }
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            var_24 = max((745079953), (min((((/* implicit */int) ((-551085437) >= (((/* implicit */int) (signed char)119))))), (max((var_8), (((/* implicit */int) arr_2 [i_10 + 1])))))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((2218367124826252967LL), (((/* implicit */long long int) min((var_8), (-11))))));
                        }
                        for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_25 = (~(((((arr_31 [i_0] [i_1] [i_7] [i_10 + 4]) ^ (var_8))) ^ (((/* implicit */int) var_2)))));
                            var_26 ^= ((/* implicit */signed char) 741562289U);
                            var_27 = ((/* implicit */long long int) min((arr_22 [i_13] [i_0]), (arr_15 [i_1] [i_1] [i_7] [i_10 + 1])));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        var_28 = arr_1 [i_7];
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 698396322U)) && (((/* implicit */_Bool) arr_45 [i_14] [i_7] [i_1] [i_0])))))));
                        var_30 = ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        arr_49 [i_0] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [(unsigned short)10] [i_1] [i_1] [i_7] [i_15])) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) var_7))))), (min((2218367124826252975LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65505)) | (((/* implicit */int) (signed char)114)))))))));
                        var_31 = ((/* implicit */long long int) min((var_31), (max((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) ((639076194U) - (arr_5 [i_0])))), (max((-4347162113452920753LL), (((/* implicit */long long int) arr_24 [i_15] [i_7] [i_1] [i_0]))))))))));
                        var_32 = ((/* implicit */signed char) max((var_32), (arr_8 [i_0] [i_0] [i_0])));
                        arr_50 [i_1] [i_1] = ((/* implicit */unsigned int) var_3);
                    }
                    for (signed char i_16 = 1; i_16 < 9; i_16 += 2) 
                    {
                        var_33 = ((/* implicit */long long int) var_8);
                        var_34 = ((/* implicit */unsigned int) arr_52 [i_0] [i_0] [i_0] [i_0]);
                        arr_54 [i_0] [i_16 + 1] [i_7] [i_0] = arr_46 [i_0] [i_1] [i_7] [i_16 + 1];
                        /* LoopSeq 1 */
                        for (int i_17 = 2; i_17 < 11; i_17 += 1) 
                        {
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_11 [i_16 + 2] [i_16 - 1] [i_17 + 1] [(signed char)0]), (arr_11 [i_1] [i_16 + 3] [i_17 - 1] [2U])))) || (((/* implicit */_Bool) (signed char)-84))));
                            var_36 = ((/* implicit */unsigned short) var_8);
                            arr_57 [i_0] [i_1] [i_7] [i_16 + 1] [i_17 - 2] = ((/* implicit */unsigned int) arr_22 [i_1] [i_1]);
                            arr_58 [i_0] [i_1] [i_7] [i_16 + 1] [i_17 + 1] = arr_27 [i_16 + 2] [i_1] [i_7] [i_16 + 2] [i_17 + 1] [i_1];
                            var_37 = ((/* implicit */long long int) 3419480893U);
                        }
                        arr_59 [i_0] [i_1] [i_7] [i_16 - 1] = ((/* implicit */unsigned short) ((max((arr_56 [i_16 + 1] [i_16 - 1] [i_16 + 2] [i_16 + 3]), (((/* implicit */long long int) max((arr_29 [i_0] [i_1] [i_7] [i_16 - 1]), (((/* implicit */unsigned int) (signed char)-9))))))) == (((/* implicit */long long int) ((max((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_4)))) / (((/* implicit */unsigned int) min((((/* implicit */int) arr_21 [i_0] [i_1] [i_7] [i_16 + 3])), (arr_15 [i_0] [i_1] [i_7] [i_16 + 3])))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        var_38 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_43 [i_0] [i_1] [i_1] [i_7] [i_18])) ? (arr_44 [i_0] [i_0] [i_7]) : (((/* implicit */long long int) var_8)))) ^ (((((/* implicit */_Bool) arr_53 [i_0] [i_0] [i_0])) ? (-5019834477061253242LL) : (arr_52 [i_7] [i_1] [i_7] [i_0])))));
                        arr_62 [i_0] [i_1] [i_1] [i_7] [i_18] |= ((/* implicit */signed char) var_7);
                        var_39 -= ((/* implicit */unsigned short) arr_31 [i_18] [i_7] [i_1] [i_0]);
                    }
                }
                arr_63 [i_0] = ((arr_48 [i_1]) % (min((max((((/* implicit */long long int) arr_30 [i_0])), (18014396361998336LL))), (((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_40 = ((/* implicit */long long int) var_8);
}
