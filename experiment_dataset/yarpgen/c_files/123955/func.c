/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123955
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((max((var_3), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_14))));
        arr_3 [(unsigned short)5] [i_0] = ((/* implicit */short) var_3);
        var_15 *= ((/* implicit */signed char) max((min((max((((/* implicit */unsigned long long int) var_7)), (var_3))), (((/* implicit */unsigned long long int) var_6)))), (min((((/* implicit */unsigned long long int) max((var_6), (var_7)))), (var_3)))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) var_11);
            /* LoopSeq 3 */
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                var_16 ^= ((/* implicit */long long int) max((((/* implicit */int) var_0)), (var_10)));
                var_17 += ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (max((var_7), (((/* implicit */unsigned short) var_9))))));
            }
            for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    var_18 += ((/* implicit */_Bool) var_14);
                    var_19 = var_13;
                    arr_15 [i_0] [i_3] = ((/* implicit */unsigned short) var_10);
                    arr_16 [i_4] [i_1] [i_4] |= ((/* implicit */unsigned short) var_13);
                }
                arr_17 [i_0] [i_3] [i_3] |= ((/* implicit */unsigned long long int) var_8);
                var_20 = ((/* implicit */unsigned short) var_9);
            }
            for (unsigned short i_5 = 3; i_5 < 10; i_5 += 2) 
            {
                arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) max((var_7), (min((var_7), (((/* implicit */unsigned short) var_4))))))), (var_10)));
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) var_13);
                        var_23 -= ((/* implicit */unsigned short) var_1);
                        var_24 = ((/* implicit */long long int) var_14);
                        var_25 = ((/* implicit */unsigned short) var_9);
                    }
                    arr_26 [i_0] [i_1] [i_5] = ((/* implicit */long long int) var_11);
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    arr_30 [i_0] [i_0] = ((/* implicit */signed char) var_1);
                    arr_31 [5U] [i_1] [i_0] [i_1] = var_6;
                }
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_34 [i_0] [i_0] [(short)6] [i_0 + 1] = ((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) var_0)))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        arr_39 [i_0] [i_9] = ((/* implicit */unsigned char) var_10);
                        arr_40 [i_0] [i_0] [i_5] [i_0] [i_10] = ((/* implicit */unsigned int) max((max((var_3), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_8)), (var_4))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        arr_43 [i_11] [i_0] [i_5] [i_0] [i_0 + 1] = ((/* implicit */_Bool) var_10);
                        arr_44 [i_0] [i_0] [i_0] [i_11] [9LL] [i_1] = ((/* implicit */unsigned long long int) var_9);
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        arr_49 [9ULL] [i_1] [i_1] [i_1] [i_0] = var_11;
                        arr_50 [0ULL] [i_1] [i_0] [i_9] [i_12] &= var_13;
                        arr_51 [i_0] [i_1] [i_5] [i_0] [i_5] = ((/* implicit */int) min((min((((/* implicit */unsigned int) var_4)), (var_11))), (((/* implicit */unsigned int) max((var_13), (var_13))))));
                        var_26 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) var_7)), (var_3))))), (((/* implicit */unsigned long long int) max((var_1), (var_14))))));
                        arr_52 [i_0 + 1] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */short) var_14)), (var_4)));
                    }
                }
                for (short i_13 = 4; i_13 < 11; i_13 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) max((min((var_3), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_4)))))));
                    var_28 = ((/* implicit */unsigned short) var_12);
                    var_29 = ((/* implicit */unsigned short) var_3);
                    var_30 ^= ((/* implicit */signed char) var_1);
                }
                /* vectorizable */
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    arr_57 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_12);
                    var_31 = ((/* implicit */short) var_3);
                }
            }
        }
        for (signed char i_15 = 1; i_15 < 10; i_15 += 3) 
        {
            arr_62 [i_0] [i_15] [i_0] = ((/* implicit */unsigned short) var_13);
            /* LoopSeq 3 */
            for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                arr_66 [i_0] = ((/* implicit */signed char) var_12);
                var_32 = ((/* implicit */signed char) min((max((var_1), (((/* implicit */unsigned char) var_13)))), (((/* implicit */unsigned char) var_0))));
            }
            for (long long int i_17 = 2; i_17 < 10; i_17 += 3) 
            {
                var_33 = ((/* implicit */unsigned char) var_11);
                var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_5)), (var_11))), (((/* implicit */unsigned int) max((var_1), (var_9)))))))));
                arr_70 [i_0 + 1] [i_15] [i_0] = ((/* implicit */short) var_2);
            }
            for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                arr_74 [(unsigned short)6] [(_Bool)1] [i_0] = ((/* implicit */signed char) var_10);
                var_35 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) max((var_9), (((/* implicit */unsigned char) max((var_8), (var_8))))))), (var_6)));
                arr_75 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_13)), (var_9)))), (max((((/* implicit */long long int) var_11)), (max((((/* implicit */long long int) var_13)), (var_12)))))));
                arr_76 [i_18] [i_18] [i_0] [i_18] = ((/* implicit */unsigned short) var_4);
            }
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) min((max((var_3), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_8)))))));
            arr_77 [i_0] [i_0] [i_15] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_11)), (var_3))), (min((var_3), (((/* implicit */unsigned long long int) var_11))))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            var_37 += ((/* implicit */signed char) min((min((var_12), (var_12))), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_5)), (var_14))))));
            var_38 = ((/* implicit */long long int) var_7);
        }
        /* vectorizable */
        for (long long int i_20 = 0; i_20 < 12; i_20 += 2) 
        {
            var_39 *= ((/* implicit */long long int) var_3);
            arr_84 [i_20] [i_20] [i_20] &= ((/* implicit */int) var_4);
        }
        /* LoopSeq 1 */
        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 3) 
        {
            arr_88 [2U] [i_0] = ((/* implicit */unsigned long long int) var_9);
            var_40 = ((/* implicit */short) min((max((((/* implicit */unsigned char) var_13)), (var_9))), (min((var_14), (var_9)))));
            arr_89 [i_0] = ((/* implicit */signed char) var_14);
        }
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */long long int) max((max((((/* implicit */unsigned short) var_0)), (var_6))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_0)), (var_9))))));
        var_42 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) max((var_10), (((/* implicit */int) var_8))))), (var_12)));
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        var_43 ^= ((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned char) min((var_13), (((/* implicit */signed char) var_2)))))));
        arr_97 [i_23] [i_23] = min((max((((/* implicit */unsigned short) min((((/* implicit */signed char) var_0)), (var_13)))), (var_6))), (((/* implicit */unsigned short) var_5)));
    }
    /* vectorizable */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned long long int) var_11);
        arr_100 [i_24] = ((/* implicit */long long int) var_1);
        arr_101 [i_24] = ((/* implicit */long long int) var_13);
        var_45 |= ((/* implicit */unsigned long long int) var_11);
    }
    var_46 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) var_10))));
}
