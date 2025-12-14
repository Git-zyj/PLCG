/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125886
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 1])))));
        var_12 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_0 [i_0 + 2])))) + (2147483647))) >> (((max((12711430423231566244ULL), (((/* implicit */unsigned long long int) (short)-8055)))) - (18446744073709543532ULL)))));
        var_13 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) var_6))))))) ? (max((var_11), (((arr_1 [i_0 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (var_5))))))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (var_11)));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (12711430423231566258ULL) : (5735313650477985370ULL))))) % (((((((/* implicit */_Bool) var_4)) ? (17048692928264137713ULL) : (((/* implicit */unsigned long long int) var_0)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
        var_15 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-8077)) ? (var_10) : (((/* implicit */unsigned long long int) arr_1 [i_1])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 1) 
            {
                {
                    var_16 *= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22122))))) ^ (((unsigned long long int) var_1)));
                    arr_11 [i_1] [i_2 - 1] [9] [i_3] = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    }
    var_17 = ((/* implicit */int) (unsigned char)0);
}
