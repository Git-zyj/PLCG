/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18119
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
    var_14 = ((/* implicit */unsigned long long int) ((short) var_12));
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 974901778))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)24))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_1 [i_1 - 3]) + (arr_1 [i_1 - 2]))))));
                arr_7 [i_0] [7] = ((/* implicit */short) min((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -974901774)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((-542586781) >= (((/* implicit */int) (short)-20556)))))) : (((long long int) arr_2 [i_0] [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (signed char)-49))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 1838466354))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-55)) || (((/* implicit */_Bool) (short)3968))))))))));
}
