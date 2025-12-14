/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173101
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
    var_16 = ((/* implicit */unsigned int) var_11);
    var_17 &= ((/* implicit */long long int) ((min((((/* implicit */int) ((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) (signed char)127))))), ((-(((/* implicit */int) (signed char)102)))))) != (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)123)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))));
                arr_6 [i_1] = (((~(((((/* implicit */_Bool) (unsigned short)20279)) ? (((/* implicit */int) (unsigned short)15647)) : (((/* implicit */int) (signed char)0)))))) - (((/* implicit */int) arr_1 [i_0])));
                arr_7 [(short)9] = (-(((/* implicit */int) (short)25848)));
            }
        } 
    } 
}
