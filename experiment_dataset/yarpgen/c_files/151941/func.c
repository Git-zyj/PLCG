/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151941
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
    var_15 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? ((~(((/* implicit */int) arr_0 [i_1 - 1])))) : (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 + 1]))))));
                var_16 = ((/* implicit */signed char) arr_2 [i_0]);
                var_17 = arr_4 [i_0];
                var_18 = ((/* implicit */int) (+((+(4398046511096LL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_2] [i_2] = var_14;
                arr_12 [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_6 [(unsigned short)11])) ? (((((/* implicit */int) var_8)) >> (((arr_8 [i_2 - 1] [i_2] [(short)1]) - (2068232435008134761ULL))))) : (((/* implicit */int) var_6))))));
            }
        } 
    } 
}
