/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120153
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
    var_13 = (-(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(unsigned char)8] [(unsigned char)8] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)179)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)123)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) : (17211141375993004365ULL))))));
        arr_3 [i_0] = ((/* implicit */int) ((unsigned char) arr_1 [i_0]));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_1 [i_0])))) | (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) var_11)) : (var_5))))))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            arr_7 [i_0] [5] [i_0] = ((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))));
            arr_8 [i_0] = ((/* implicit */short) ((arr_6 [i_0] [i_1 - 2] [i_0]) < (arr_6 [i_0] [i_1 - 2] [i_1 - 1])));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8388607U)) ? (var_6) : (((/* implicit */int) (signed char)123))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((var_8) == (((/* implicit */unsigned int) var_11)))))) : (((((/* implicit */_Bool) 3928279585U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (9749955800134605676ULL)))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) min(((-(0ULL))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) 4286578688U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (1020735993648283529ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)230)), (arr_1 [i_2]))))))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_2]);
        arr_15 [i_2] [i_2] = ((/* implicit */int) ((unsigned char) ((var_11) ^ (((/* implicit */int) ((arr_10 [i_2]) >= (arr_10 [i_2])))))));
    }
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        arr_18 [i_3] = ((/* implicit */unsigned long long int) var_6);
        arr_19 [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)25));
        /* LoopSeq 2 */
        for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */int) var_9)) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 15U)) : (2857522666320130256ULL)))) ? (((int) (_Bool)1)) : (min((var_6), (((/* implicit */int) (_Bool)1))))))));
            arr_22 [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((arr_9 [i_4 + 1] [i_4 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2886322666612768173LL))))))))), (((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (var_6))))));
            var_16 = min((((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) arr_9 [i_4] [i_4 - 1])))), (var_1));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 12; i_5 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_6 [i_5 + 1] [i_5 + 1] [i_5 - 1])));
            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) arr_21 [5] [i_5 - 1]))));
            arr_25 [i_3] [i_3] [i_5] = ((/* implicit */long long int) (+((-2147483647 - 1))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */unsigned short) min((((arr_23 [i_6] [i_6] [i_6]) + (((/* implicit */long long int) arr_1 [i_6])))), (((/* implicit */long long int) arr_20 [4] [i_6] [(unsigned char)7]))));
    }
}
