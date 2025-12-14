/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110078
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
    var_17 = ((int) ((var_8) < (((/* implicit */unsigned long long int) 3718455226U))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)8292)), (1697213397)))) ? (max((((/* implicit */unsigned int) var_0)), (2348756989U))) : (((/* implicit */unsigned int) ((int) var_9))))))));
                arr_6 [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((var_6) ? (1697213397) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) ((var_13) + (((/* implicit */int) arr_4 [i_1]))))) ? (((0U) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((arr_2 [i_1 + 2] [i_1 - 2] [4]), (max((arr_2 [i_1 + 2] [i_1 - 2] [i_1]), (arr_2 [i_1 + 2] [i_1 - 2] [5ULL])))))));
                var_19 = ((/* implicit */int) arr_0 [i_0] [i_1 - 1]);
                var_20 = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((~(var_14)))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned short)6718))));
}
