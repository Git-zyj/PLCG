/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125793
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
    var_19 = ((/* implicit */short) var_17);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_15);
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(max((((/* implicit */int) arr_5 [i_1] [i_2] [i_3])), ((+(((/* implicit */int) arr_0 [i_1])))))))))));
                        arr_12 [2LL] [i_1] [2LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_4 [i_0]))) : (((/* implicit */long long int) (+(var_11))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) var_18))))) ? (arr_4 [i_0]) : (((/* implicit */long long int) arr_3 [i_0]))))))));
        arr_13 [i_0] = arr_1 [i_0] [i_0];
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) min(((~((~(var_1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18)))))));
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) (short)-26916)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_17 [i_4] [i_4] [i_4]))))));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_12), (var_15)))) || (((/* implicit */_Bool) arr_3 [i_4])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (arr_10 [i_4] [i_4])))) : (max((((/* implicit */unsigned long long int) arr_14 [i_4])), (((unsigned long long int) arr_3 [i_5])))))))));
            var_25 *= arr_5 [i_4] [i_5] [i_5];
        }
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            var_26 = ((/* implicit */long long int) (-(min((17048086944045479601ULL), (((/* implicit */unsigned long long int) arr_1 [i_4] [i_6]))))));
            var_27 = ((/* implicit */signed char) ((((arr_14 [i_6]) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_6] [(signed char)6] [(signed char)0])))))) ? ((-(((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6] [i_6]))))))) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_6)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    {
                        arr_27 [i_6] [i_6] = ((/* implicit */long long int) (~(((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11768747705848551213ULL))))))))));
                        var_28 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_4] [i_4] [i_4]))))), ((+(18446744073709551615ULL)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                        {
                            arr_31 [(signed char)3] [i_6] = ((long long int) var_14);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [(signed char)5] [i_6])) ? (((/* implicit */unsigned long long int) arr_14 [i_4])) : (arr_28 [i_4] [(short)8] [i_6] [i_6] [i_9] [i_7])));
                            arr_32 [(short)0] [i_6] [i_6] [(signed char)1] [i_9] [i_8] = ((/* implicit */signed char) var_9);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                        {
                            arr_37 [i_7] [i_6] [i_7] [i_7] = ((/* implicit */long long int) ((arr_35 [i_4] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7]))))))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_4]))))) >= (((unsigned long long int) var_0)))))))))));
                            arr_38 [i_6] = ((/* implicit */signed char) min((max(((-(((/* implicit */int) (short)20714)))), (((/* implicit */int) arr_21 [i_7] [i_6] [i_8])))), ((+(((/* implicit */int) var_7))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */short) var_15);
                            var_32 += ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_4)))));
                            var_33 = var_12;
                            arr_41 [0U] [i_6] [i_7] [i_6] [i_11] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_14))))));
                            arr_42 [6ULL] [i_7] &= min((((/* implicit */unsigned long long int) ((signed char) arr_36 [i_11] [i_6] [i_4]))), (((((/* implicit */_Bool) (~(var_1)))) ? (arr_28 [(signed char)6] [i_6] [i_7] [i_8] [i_7] [i_11]) : (((((/* implicit */_Bool) var_4)) ? (var_13) : (6ULL))))));
                        }
                        arr_43 [i_4] [i_4] [i_7] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) 11121622208405554798ULL);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                for (signed char i_13 = 3; i_13 < 10; i_13 += 4) 
                {
                    {
                        var_34 = var_10;
                        var_35 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_4] [i_4] [i_12] [i_13 - 3] [i_6]))));
                    }
                } 
            } 
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_6] [i_6]))) % (min((((/* implicit */unsigned long long int) var_12)), (var_13))))))))));
        }
        for (long long int i_14 = 1; i_14 < 8; i_14 += 2) 
        {
            /* LoopSeq 4 */
            for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_29 [i_4] [i_4] [i_14 + 1] [i_15] [i_15] [(short)0] [i_15])))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_50 [i_4] [i_4]))))) << (((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_49 [i_14] [5LL]))))) - (56ULL))))))));
                var_38 += ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_10)))))))));
            }
            for (signed char i_16 = 4; i_16 < 8; i_16 += 3) 
            {
                arr_54 [i_14] [i_14] [i_14 + 3] [i_16] = ((/* implicit */long long int) var_18);
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_16 + 2])) ? (((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) var_9))))) : (((/* implicit */int) ((signed char) arr_15 [i_16 - 3])))));
            }
            for (long long int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned int) (signed char)95);
                var_41 *= ((/* implicit */signed char) (~(min((0ULL), (((((/* implicit */_Bool) 11121622208405554798ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) : (11121622208405554800ULL)))))));
                var_42 = ((/* implicit */long long int) var_2);
            }
            for (long long int i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    var_43 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~((+(((/* implicit */int) var_8))))))), (min((var_11), (((/* implicit */unsigned int) arr_39 [i_14 + 2] [10LL] [i_14 + 1] [i_14 + 2] [i_14 + 1]))))));
                    /* LoopSeq 1 */
                    for (long long int i_20 = 2; i_20 < 7; i_20 += 1) 
                    {
                        var_44 = ((/* implicit */signed char) min((var_44), (var_7)));
                        var_45 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_0 [i_14])))))))));
                        var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_20 + 3] [i_20 + 3] [i_20 + 4] [(short)7] [i_20 - 2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_20] [i_20 - 2] [i_20] [i_20] [i_20 + 1])))))) ? (((((/* implicit */_Bool) arr_39 [i_14 + 3] [i_14] [i_14 + 3] [i_20 - 1] [i_20 + 4])) ? (((/* implicit */int) min((arr_2 [i_4] [i_20]), (arr_63 [4ULL] [i_18])))) : (((((/* implicit */int) arr_25 [i_4] [i_14 + 2] [i_18] [i_19])) % (((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4] [i_4])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_62 [i_4] [i_14] [i_18] [(signed char)6] [i_4])) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) var_14)))) <= (((/* implicit */int) (signed char)127))))))))));
                    }
                    var_47 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_59 [(signed char)10] [i_14 - 1] [i_14])) ? (arr_59 [i_4] [i_14 + 3] [i_18]) : (arr_59 [i_4] [i_14 + 1] [i_14])))));
                }
                var_48 = ((unsigned int) (-(((/* implicit */int) arr_39 [i_14] [i_14] [i_14] [i_14 - 1] [i_18]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_21 = 0; i_21 < 11; i_21 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_22 = 0; i_22 < 11; i_22 += 4) 
                    {
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) (-(arr_9 [i_4] [i_14 + 3] [i_14 + 2] [i_4]))))));
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) var_7))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 2) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) (+(arr_66 [i_14] [i_23] [i_14 + 3] [i_14 + 2]))))));
                        var_52 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? ((~(9213761854870699331ULL))) : (((/* implicit */unsigned long long int) arr_68 [i_4] [i_21] [i_18] [i_14 + 2] [i_23] [i_23]))));
                        var_53 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_2))))));
                    }
                    var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_14 + 1])) ? (arr_28 [i_14] [i_14] [i_14] [i_14 + 3] [i_14 + 2] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_14 + 2]))))))));
                    var_55 = ((signed char) arr_24 [i_4] [(signed char)1] [i_18] [4LL] [i_14]);
                }
            }
            var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) var_2)) ? (7212507688003045029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))))));
        }
    }
    var_57 = ((/* implicit */long long int) var_7);
}
