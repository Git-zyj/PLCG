/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162765
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
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1)))))));
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (short)-17332)), (var_3))) >> (((((/* implicit */int) var_8)) - (42259)))))), (min((((((/* implicit */_Bool) var_6)) ? (1660980207569170781ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((var_12) >> (((var_14) - (791239304)))))))));
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
    var_19 = min((((/* implicit */long long int) var_10)), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) min((var_13), (var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [17ULL] [i_1 + 1] = ((/* implicit */unsigned short) 3968717645825278717ULL);
                    var_20 = ((/* implicit */int) ((signed char) arr_2 [i_0]));
                    var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1 - 1] [10LL])) : (-1088321171)))));
                }
            } 
        } 
    } 
}
