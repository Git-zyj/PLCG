/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185819
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) -1727882462535978647LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (1727882462535978641LL)));
    var_11 = ((/* implicit */signed char) var_8);
    var_12 |= var_6;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1] [i_1])) < (((/* implicit */int) arr_0 [i_0] [12LL])))) ? (var_4) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_6 [6LL])) ? (((/* implicit */int) ((((/* implicit */long long int) var_8)) != (var_7)))) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [7] [7] [i_1])) : (arr_1 [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_1])))))))));
                    var_14 = ((/* implicit */signed char) var_8);
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((arr_7 [i_0] [i_2 + 1] [i_2 + 1] [i_2 + 1]) >> (((var_4) + (1556569422))))) * (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_7 [i_0] [i_1] [i_2 - 1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1])))))) * (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_5 [i_0] [i_1]))))))))))));
                    var_16 += ((/* implicit */long long int) var_8);
                }
            } 
        } 
    } 
}
