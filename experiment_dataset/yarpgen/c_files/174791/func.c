/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174791
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 *= ((/* implicit */signed char) (((-(((arr_0 [i_0]) >> (((arr_0 [i_0]) - (10256840801515613262ULL))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
        var_21 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_1 [i_0] [(signed char)2])) + (((/* implicit */int) arr_1 [i_0] [i_0])))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_0)))))) >= (((/* implicit */int) var_15))));
        arr_2 [i_0] = ((/* implicit */signed char) ((int) var_8));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_22 = ((/* implicit */int) (+(arr_5 [i_1])));
        var_23 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((arr_5 [i_1]) << (((18446744073709551615ULL) - (18446744073709551615ULL)))))) : (((/* implicit */unsigned long long int) ((((arr_5 [i_1]) + (9223372036854775807LL))) << (((18446744073709551615ULL) - (18446744073709551615ULL))))));
        arr_6 [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (unsigned char)255)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) 3526166258U))));
        arr_9 [i_2] = var_1;
        arr_10 [i_2] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_2] [i_2]))));
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_13 [i_3] = ((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (748248767U))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((748248773U) - (748248758U)))))))) % (((/* implicit */unsigned int) arr_12 [i_3] [i_3])));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (max((arr_11 [i_3]), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (~(arr_12 [i_3] [i_3]))))))) ? (min(((+(arr_12 [i_3] [i_3]))), (arr_12 [i_3] [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3])))))));
        var_26 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((~(9502851306315260399ULL))) : (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_3] [i_3]))))));
        var_27 += ((/* implicit */unsigned int) arr_11 [i_3]);
    }
    var_28 = ((/* implicit */unsigned short) min((((((((-692994791) + (2147483647))) << (((18446744073709551607ULL) - (18446744073709551607ULL))))) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-126))));
    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(var_1)))), (((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned char) (_Bool)1))))) ? (var_11) : (((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */int) (unsigned short)15320))))))))))));
}
