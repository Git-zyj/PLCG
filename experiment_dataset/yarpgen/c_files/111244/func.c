/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111244
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)228)) & (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) var_9)))))) ? (max((((/* implicit */long long int) min((((/* implicit */short) var_5)), (var_7)))), (((long long int) (unsigned char)228)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_6))))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) var_5))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)225)) ^ (((/* implicit */int) var_3))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = arr_2 [i_0] [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (((+(arr_1 [i_0 - 1]))) % (arr_1 [i_0])));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1]))) ? (((((/* implicit */int) (unsigned char)35)) % (((/* implicit */int) (unsigned char)23)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_1))))));
    }
    for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */short) var_4);
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_3))))) : (max((var_0), (((/* implicit */long long int) arr_6 [i_1] [i_1])))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_1 + 2]))))));
        var_15 = ((/* implicit */long long int) arr_6 [i_1 + 2] [i_1 + 2]);
        var_16 = ((long long int) max((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0))), (((long long int) var_0))));
    }
    for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((short) var_9));
        /* LoopSeq 3 */
        for (short i_3 = 1; i_3 < 10; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                var_17 = ((/* implicit */long long int) ((short) ((unsigned char) var_1)));
                arr_16 [i_4] [i_3 + 1] [i_4 + 1] [i_3 + 2] = ((/* implicit */long long int) arr_2 [i_3] [i_2]);
                var_18 = ((/* implicit */short) arr_15 [i_2 - 3] [i_3]);
                var_19 = ((long long int) arr_6 [i_4] [i_2]);
            }
            var_20 += ((/* implicit */unsigned short) arr_1 [i_2]);
        }
        for (short i_5 = 1; i_5 < 10; i_5 += 1) /* same iter space */
        {
            arr_20 [i_5] = ((((/* implicit */_Bool) arr_19 [i_5] [i_5 + 2])) ? (min((2662801323187490633LL), (((/* implicit */long long int) arr_19 [i_5] [i_5 + 2])))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_2 + 3]), (arr_8 [i_2 - 1]))))));
            /* LoopSeq 4 */
            for (short i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (short i_7 = 4; i_7 < 11; i_7 += 4) 
                {
                    for (short i_8 = 2; i_8 < 11; i_8 += 2) 
                    {
                        {
                            var_21 &= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) var_7)));
                            var_22 ^= min((arr_19 [i_7] [i_6]), (((/* implicit */unsigned short) var_3)));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_14 [i_5 + 2] [i_6] [i_6 - 1] [i_7 - 2]), (arr_14 [i_5] [i_5] [i_6 - 1] [i_7 + 1])))), ((-(((/* implicit */int) arr_14 [i_5 + 1] [i_5 + 1] [i_6 - 1] [i_7 + 1])))))))));
                            arr_29 [i_2 - 3] [i_2] [i_2] [i_5] [i_5] [i_7 - 3] [3ULL] = ((/* implicit */short) (unsigned char)123);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 8; i_9 += 2) 
                {
                    for (short i_10 = 4; i_10 < 10; i_10 += 3) 
                    {
                        {
                            arr_35 [1ULL] [i_5] [i_6 + 1] [i_5] [i_2] = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned short) min((arr_25 [i_10] [(unsigned short)0] [i_5] [i_5] [(unsigned char)9] [i_2]), (var_9)))), (((unsigned short) arr_19 [i_5] [i_5])))));
                            var_24 = min((((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) (short)0)), (30ULL))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_5] [i_2]))) ? (-5599237315825573523LL) : (arr_27 [i_9]))));
                            arr_36 [i_2] [i_5] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
                            var_25 = ((/* implicit */short) max((((/* implicit */int) arr_12 [i_2 - 3] [i_2 + 2] [i_6])), (((((/* implicit */int) arr_12 [i_2 - 3] [i_9 + 1] [i_10 + 1])) + (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_11 = 1; i_11 < 10; i_11 += 4) 
                {
                    var_26 = ((unsigned short) arr_24 [(unsigned short)1] [i_5] [i_6] [i_11]);
                    arr_39 [i_5] [i_2] [i_6] = max((((((/* implicit */_Bool) min((arr_6 [i_11] [i_6]), (((/* implicit */short) var_5))))) ? (27ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [i_2])))))), (((/* implicit */unsigned long long int) arr_30 [i_2] [i_2] [i_2] [i_5] [i_2] [(short)4])));
                    arr_40 [i_5 - 1] [i_5 - 1] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_2] [i_2]))));
                }
            }
            for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2])) ? (arr_17 [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))))));
                arr_44 [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [3ULL] [(short)10] [9ULL])) ? (max((((/* implicit */long long int) var_8)), ((+(arr_1 [i_5]))))) : (min((((/* implicit */long long int) ((unsigned short) arr_37 [i_2] [i_12] [i_12]))), (arr_37 [i_2 - 3] [i_5 + 1] [i_12])))));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_10 [i_12] [i_5]))));
                arr_45 [i_12] [i_5] [i_5] [i_2 + 2] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))) : (arr_26 [i_12] [i_2] [i_12] [i_2] [i_2] [(short)8]))))) > (((/* implicit */int) arr_38 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_5] [i_12 + 2] [i_12]))));
            }
            for (unsigned short i_13 = 1; i_13 < 11; i_13 += 2) 
            {
                arr_48 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_25 [i_13] [i_13 - 1] [i_5] [i_13] [i_13] [i_13 - 1]))))) || (((/* implicit */_Bool) max((arr_25 [i_2] [i_13 - 1] [i_5] [i_13] [i_13] [i_13]), (arr_25 [i_5] [i_13 + 1] [i_5] [(unsigned short)8] [i_13] [(unsigned short)8]))))));
                arr_49 [i_5] [i_5] [i_5] [i_2] = ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)0]))));
            }
            for (long long int i_14 = 1; i_14 < 11; i_14 += 1) 
            {
                var_29 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_47 [i_14] [i_5] [i_14] [i_5]));
                arr_52 [i_5] [i_14 - 1] = ((/* implicit */short) arr_0 [i_2]);
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_34 [i_2] [i_5 + 1] [(unsigned short)3] [i_14 + 1] [i_2])))) : (arr_7 [i_14])));
            }
        }
        for (short i_15 = 1; i_15 < 10; i_15 += 1) /* same iter space */
        {
            var_31 -= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))));
            var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)225)) ^ (((/* implicit */int) ((arr_13 [(short)10] [i_2 - 2] [i_15 - 1]) > (((/* implicit */unsigned long long int) arr_17 [i_2 - 1])))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_16 = 1; i_16 < 9; i_16 += 1) 
        {
            var_33 = ((unsigned short) ((long long int) var_4));
            arr_59 [i_2] = (unsigned short)65516;
            /* LoopNest 2 */
            for (unsigned short i_17 = 4; i_17 < 10; i_17 += 1) 
            {
                for (long long int i_18 = 2; i_18 < 9; i_18 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) (unsigned short)65516)));
                        var_35 = arr_5 [i_2 + 2];
                        var_36 = arr_28 [i_2] [i_2 + 1] [i_16] [i_17] [i_17] [i_16] [i_18];
                        arr_65 [(unsigned short)8] [i_16] [10LL] [i_17 - 3] [10LL] [i_18] &= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) min((var_7), (var_9)))));
                        var_37 = ((/* implicit */unsigned short) arr_27 [i_2]);
                    }
                } 
            } 
        }
        var_38 -= ((/* implicit */long long int) arr_53 [i_2 + 1] [i_2 + 3] [i_2 + 2]);
        var_39 |= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_11 [i_2 + 3] [i_2 - 1])) | (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) min(((unsigned char)123), ((unsigned char)127))))))));
    }
}
