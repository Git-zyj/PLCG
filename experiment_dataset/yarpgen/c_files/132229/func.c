/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132229
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
    var_17 |= ((/* implicit */signed char) ((var_12) << (((max((((((/* implicit */_Bool) 33554431U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8192))) : (33554437U))), (((/* implicit */unsigned int) (unsigned char)255)))) - (8168U)))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 33554437U)) ? (((/* implicit */int) ((((/* implicit */unsigned int) max((var_3), (((/* implicit */int) var_9))))) >= (min((((/* implicit */unsigned int) -787417840)), (33554440U)))))) : (((/* implicit */int) var_6))));
    var_19 = ((/* implicit */_Bool) ((int) ((unsigned short) min((((/* implicit */unsigned char) var_4)), ((unsigned char)255)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 787417840)) < (5784971912026953648ULL)))))))));
        var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (var_11)))), ((+(arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~((-(arr_1 [i_0 - 2])))));
        var_22 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -787417840)))) * (arr_0 [i_0 + 1] [i_0 + 1])));
    }
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_23 = min((max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) 787417840)) : (6310275425236171088LL))), (((/* implicit */long long int) max((33554431U), (var_10)))))), (((/* implicit */long long int) (~(arr_5 [i_1 + 1])))));
        var_24 *= max((((/* implicit */short) (signed char)-113)), ((short)-9390));
    }
    for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (arr_1 [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-9390)))))), (arr_7 [i_2] [3])))));
        var_25 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2]))))), (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_7 [(unsigned char)8] [i_2])))))));
        var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 33554411U)) || (((/* implicit */_Bool) (signed char)-32)))))) : (min((((/* implicit */unsigned long long int) (unsigned short)63488)), (arr_7 [i_2] [i_2])))))));
    }
}
