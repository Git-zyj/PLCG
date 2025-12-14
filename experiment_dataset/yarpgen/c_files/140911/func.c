/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140911
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
    var_19 = var_7;
    var_20 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_18)))));
            var_21 ^= ((/* implicit */unsigned short) ((unsigned long long int) var_4));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_0])) >= (((/* implicit */int) ((unsigned short) var_1)))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            arr_10 [i_2] = arr_3 [i_0 - 1] [i_0] [i_0];
            arr_11 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_4 [i_2] [i_2 + 1]))));
            arr_12 [i_2] = ((unsigned long long int) arr_9 [i_2]);
        }
        for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            arr_17 [i_0] [i_3] = (unsigned short)39360;
            var_22 = arr_4 [10ULL] [i_3 + 1];
            var_23 = (-(arr_2 [i_0 + 3]));
            var_24 = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)14799)) ? (var_4) : (var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))));
        }
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [(unsigned short)10] [(unsigned short)10])) & (((/* implicit */int) arr_14 [i_0]))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
    {
        arr_21 [i_4] = ((/* implicit */unsigned short) (~((~(min((var_3), (((/* implicit */unsigned long long int) arr_13 [(unsigned short)4] [(unsigned short)4]))))))));
        arr_22 [i_4] = ((/* implicit */unsigned short) ((((unsigned long long int) ((arr_1 [i_4]) | (5580098398814446343ULL)))) & (max((min((((/* implicit */unsigned long long int) var_2)), (arr_2 [i_4]))), (max((var_13), (5441212998265913787ULL)))))));
        arr_23 [i_4 - 2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_17)), (var_3)));
    }
    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
    {
        arr_27 [i_5] [(unsigned short)2] = ((/* implicit */unsigned short) (-(((arr_24 [i_5 + 2]) - (arr_24 [i_5 + 2])))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) ((min((var_5), (((/* implicit */unsigned long long int) max((arr_29 [i_6] [i_6]), (var_7)))))) * (min((((/* implicit */unsigned long long int) arr_29 [i_6] [i_6])), (arr_25 [i_5])))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_25 [i_5 + 1]), (arr_26 [i_5 - 1])))) ? (arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1]) : ((~(arr_25 [i_6])))));
        }
        var_28 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [(unsigned short)14] [i_5 + 1]))))) ? (min((((/* implicit */unsigned long long int) arr_29 [(unsigned short)0] [i_5 - 1])), (arr_26 [i_5 - 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [(unsigned short)14] [i_5 + 1]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 4; i_7 < 18; i_7 += 1) 
        {
            var_29 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (arr_26 [i_5 + 2]))), (max((((/* implicit */unsigned long long int) var_16)), (((5441212998265913787ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
            var_30 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 13005531075443637814ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [10ULL] [i_5 + 2]))) : (arr_28 [i_5 + 2] [i_5] [i_5 - 1]))) ^ (((((/* implicit */_Bool) ((unsigned short) arr_25 [i_7]))) ? (((arr_24 [i_7]) >> (((5441212998265913781ULL) - (5441212998265913761ULL))))) : (arr_28 [i_5] [i_5] [i_7])))));
        }
        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 4) 
        {
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_31 [i_8 - 2] [i_8]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_5 - 1] [i_5])))))) & (((/* implicit */int) var_2))));
            arr_34 [i_5 - 1] [i_5 - 1] [i_8] = ((unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_5 + 1] [i_8 - 1])) ? (((/* implicit */int) arr_33 [i_5] [i_5])) : (((/* implicit */int) arr_33 [i_8 - 2] [i_8]))));
            var_32 = ((((/* implicit */_Bool) arr_31 [i_5] [i_5 + 1])) ? (((((/* implicit */_Bool) max((5441212998265913787ULL), (arr_24 [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_5 + 2] [i_5 + 1]))) : (((unsigned long long int) arr_26 [i_5])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_8] [i_8 + 2]))))));
        }
        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) 
        {
            arr_38 [i_5] [i_9] [0ULL] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)511)) << (((((/* implicit */int) var_8)) - (31582)))))), (arr_31 [i_9 - 1] [i_9 + 1])))));
            arr_39 [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9 - 2] [i_9 + 3])) ? (var_5) : ((-(arr_31 [i_5 + 2] [i_5 + 2]))))))));
        }
        arr_40 [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) ((max((var_15), (((/* implicit */unsigned long long int) arr_37 [i_5] [(unsigned short)9] [(unsigned short)9])))) & (max((5441212998265913781ULL), (((/* implicit */unsigned long long int) arr_33 [i_5] [i_5])))))));
    }
}
