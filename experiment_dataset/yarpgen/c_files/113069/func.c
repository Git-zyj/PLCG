/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113069
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1]);
                var_16 = max((max((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) 1423578873U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1423578897U))))), (((/* implicit */unsigned int) ((arr_1 [i_1]) == (max((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (arr_1 [i_0])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32754)) ? (10386475850707061719ULL) : (((/* implicit */unsigned long long int) 1423578873U))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((((/* implicit */_Bool) max((var_7), (((/* implicit */short) (signed char)-14))))) && ((!(((/* implicit */_Bool) var_12)))))))))));
    var_19 = ((/* implicit */unsigned char) min(((-((~(-1988577070))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_13))))) != (524287U))))));
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (2871388422U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_13))))))) * (((/* implicit */long long int) max((min((((/* implicit */int) var_1)), (var_8))), (min((-1988577079), (((/* implicit */int) var_10)))))))));
}
