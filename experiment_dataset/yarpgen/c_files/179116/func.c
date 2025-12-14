/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179116
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_13 &= ((/* implicit */unsigned char) ((long long int) (~(var_7))));
                        var_14 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_1))) >> (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2] [i_0] [i_2]))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [2LL] [i_1 - 2]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [(short)22] [i_1 + 1])) + (((/* implicit */int) arr_4 [i_0] [2LL] [i_1 - 2]))))) : (var_0)));
                            var_16 = ((/* implicit */signed char) (-(arr_8 [i_0] [i_1] [i_2] [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_1] [(unsigned char)20] [i_3] [(short)18] &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_1 - 2] [i_1 + 3] [(signed char)2])) != (((/* implicit */int) var_10)))));
                            var_17 ^= ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_4)), (max((((/* implicit */int) arr_7 [8ULL] [8ULL] [i_2] [18ULL] [(signed char)2] [i_5])), (arr_1 [i_5])))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((max((((/* implicit */long long int) ((short) var_9))), (((((/* implicit */_Bool) (unsigned char)191)) ? (2305843009213693951LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))))))) == (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((signed char) var_9))))))))));
                        }
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [(short)9] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_4))))));
                            var_20 = ((/* implicit */short) ((unsigned char) max((var_6), (((/* implicit */signed char) ((var_0) != (((/* implicit */long long int) var_9))))))));
                            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_7)))) ? (max((arr_1 [i_0 + 2]), (arr_1 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2])))));
                        }
                        for (int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                        {
                            var_22 *= ((/* implicit */unsigned long long int) arr_6 [i_0 + 2] [i_1] [(short)5] [i_3] [i_7]);
                            var_23 ^= ((/* implicit */signed char) -2305843009213693943LL);
                        }
                    }
                } 
            } 
        } 
        arr_19 [i_0] = ((/* implicit */signed char) max(((-(max((((/* implicit */long long int) arr_17 [i_0 - 1] [i_0] [i_0] [i_0 + 2] [i_0])), (var_0))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])), (var_4))))));
    }
    var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) -1134691252573770075LL))), (min((var_0), (((/* implicit */long long int) var_4))))))) || (((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        for (signed char i_9 = 3; i_9 < 13; i_9 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    for (signed char i_11 = 1; i_11 < 13; i_11 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */int) ((max((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_8] [i_9 + 1] [i_10] [19LL] [i_11])) : (((/* implicit */int) arr_10 [i_8] [(signed char)16] [i_10] [i_10] [i_11 - 1] [i_11] [i_10]))))))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_10] [i_9 - 2] [(unsigned char)11] [i_10] [i_9 + 3] [i_10])))))));
                            var_26 += ((/* implicit */signed char) arr_17 [i_8] [i_8] [i_9] [i_10] [i_8]);
                            var_27 = max((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((~(var_11))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_11] [i_10] [i_8] [11] [i_10] [i_8]), (((/* implicit */short) arr_20 [i_8])))))))), (((/* implicit */long long int) var_3)));
                            var_28 |= ((/* implicit */short) min((((/* implicit */int) ((signed char) arr_9 [i_8] [i_9 - 2] [i_9] [i_11 - 1] [i_11]))), ((~(arr_9 [(signed char)22] [(signed char)22] [i_11 - 1] [i_11 - 1] [i_11 - 1])))));
                            arr_32 [i_10] [i_10] [i_11] = ((/* implicit */short) (~(((/* implicit */int) (short)-31328))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (var_5)))) ? (arr_26 [i_9] [i_8]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_9 - 1] [i_8] [i_9 + 3])))))));
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min((((/* implicit */int) min((arr_5 [i_8] [i_9 + 1] [i_8]), (((/* implicit */unsigned char) var_6))))), (max(((~(((/* implicit */int) arr_30 [8ULL] [(unsigned char)7] [i_8] [i_8] [i_8] [i_8])))), (((/* implicit */int) arr_28 [i_8])))))))));
                var_31 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1134691252573770073LL)))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((short) (~(((/* implicit */int) var_4))))))));
    var_33 *= ((/* implicit */signed char) var_9);
}
