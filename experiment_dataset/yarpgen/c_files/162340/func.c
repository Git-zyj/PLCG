/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162340
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((var_4) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))))) ? (((long long int) var_12)) : (((/* implicit */long long int) (+((-2147483647 - 1)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = var_10;
        var_15 = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) 6532497846982386259ULL)))), (((var_12) ? (536838144U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) ((short) 3758129152U))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) >= (3758129151U)))))), (((/* implicit */int) ((min((536838142U), (((/* implicit */unsigned int) var_13)))) <= (((((/* implicit */_Bool) (short)7508)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (3758129148U))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */_Bool) ((unsigned short) min((min((arr_8 [i_1]), (((/* implicit */unsigned long long int) var_13)))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))))));
        var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) << ((((-(33554431))) + (33554445)))))) != (min((((long long int) var_10)), (((long long int) var_9))))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2003504440))))), (((unsigned char) (signed char)-64))))) ? (max(((~(((/* implicit */int) var_13)))), (min((2003504420), (((/* implicit */int) (signed char)47)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) (short)-7509)))))));
        var_17 = ((/* implicit */unsigned long long int) ((int) (+(min((var_9), (2003504440))))));
        var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2]))))) ? (max((4ULL), (((/* implicit */unsigned long long int) (short)7509)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2])) + (((/* implicit */int) var_2)))))))));
    }
}
