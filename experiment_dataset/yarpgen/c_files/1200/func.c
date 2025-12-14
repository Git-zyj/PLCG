/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1200
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((((((/* implicit */long long int) (~(2147483647)))) < (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) var_4)) : (8747670932606860616LL))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) / (9223372036854775807LL))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (-2147483647) : (((/* implicit */int) arr_0 [i_0]))))) & (arr_1 [i_1])))));
                arr_5 [i_0] [i_1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6110092728375582716LL))))) : (1048320)))) + (((((/* implicit */_Bool) max((((/* implicit */int) (short)15232)), ((-2147483647 - 1))))) ? (4319845439544807420LL) : (((/* implicit */long long int) -661744856)))));
            }
        } 
    } 
    var_20 |= ((/* implicit */long long int) ((var_17) > (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)15232)) ? (((/* implicit */int) (short)15213)) : (((/* implicit */int) var_15)))) * (((((/* implicit */int) var_0)) / (1048320))))))));
}
