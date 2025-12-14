/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183864
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
    var_17 = ((/* implicit */unsigned long long int) ((unsigned int) var_10));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2ULL))));
                var_19 = ((/* implicit */signed char) ((17736024650812742754ULL) * (((((/* implicit */_Bool) ((unsigned int) (signed char)63))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (15604140204149447067ULL))) : (2012680315271087810ULL)))));
                var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (signed char)88)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1]) == (((arr_1 [i_1]) + (((/* implicit */unsigned long long int) arr_5 [i_0])))))))) : (arr_4 [i_0] [i_0 - 2]));
                var_21 = arr_0 [i_0];
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_7);
}
