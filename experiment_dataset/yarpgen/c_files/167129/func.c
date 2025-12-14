/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167129
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
    var_15 = ((/* implicit */int) var_10);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-1891)), (arr_1 [13])))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((arr_1 [(signed char)12]), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) min((arr_3 [i_0 + 1] [i_0]), (((/* implicit */signed char) ((15412725851198410504ULL) > (((/* implicit */unsigned long long int) 484293158U))))))))));
        var_16 = ((((/* implicit */_Bool) ((long long int) var_7))) ? (arr_0 [19ULL]) : (max((min((var_14), (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0 - 1] [(short)12])) : (((/* implicit */int) var_5)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? (((((((/* implicit */int) arr_3 [i_0 - 1] [i_0])) <= ((-2147483647 - 1)))) ? (min((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0]))) : (((/* implicit */int) ((unsigned char) (unsigned char)204))))) : (((/* implicit */int) (short)32748))));
            var_18 = ((/* implicit */unsigned char) ((int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (1551376284248764550ULL))) ^ (((/* implicit */unsigned long long int) max((952159661), (var_14)))))));
            var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [i_0])), (1063213872)))) ? (((/* implicit */unsigned int) 952159653)) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (0U)))))));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
        {
            arr_11 [19ULL] [19ULL] = ((/* implicit */unsigned char) (((_Bool)1) ? (4294967278U) : (((/* implicit */unsigned int) -952159662))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2 + 3] [i_2 + 3])) ? (((/* implicit */int) arr_13 [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) var_10))));
                var_21 = ((/* implicit */int) min((var_21), (arr_0 [i_2 - 2])));
            }
            arr_14 [i_3] [i_3] [i_2 + 1] = ((/* implicit */short) ((signed char) ((21U) / (((/* implicit */unsigned int) 805317546)))));
            arr_15 [i_2] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)36940);
            arr_16 [i_2] [i_3] = (signed char)-27;
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                arr_23 [i_6] = ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_19 [i_2] [i_2] [i_6])))) ? (((((/* implicit */_Bool) arr_12 [i_5] [i_6])) ? (arr_19 [i_2] [i_2] [i_6]) : (((/* implicit */int) (unsigned char)203)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */long long int) 16777215)), (32985348833280LL))));
                arr_24 [i_2] [(unsigned char)12] [i_2] = ((/* implicit */unsigned long long int) var_0);
                var_22 = ((/* implicit */long long int) min((var_22), ((((+(0LL))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_25 [i_2 - 1] [(short)16] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))));
            }
            arr_26 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) | (4038826362U)));
        }
        var_23 ^= ((/* implicit */_Bool) (~((-(((/* implicit */int) var_12))))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        arr_31 [i_7] [i_7] = ((/* implicit */_Bool) arr_12 [i_7] [i_7]);
        var_24 = ((/* implicit */short) (unsigned char)110);
        arr_32 [i_7] [i_7] = ((/* implicit */_Bool) ((int) 4038826362U));
        var_25 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)66));
    }
}
