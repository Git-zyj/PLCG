/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179176
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
    var_13 += var_6;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = arr_4 [i_0] [i_0];
                    var_14 = ((((/* implicit */int) max((arr_1 [i_2] [i_2]), (arr_6 [i_0] [i_0])))) - ((~(((/* implicit */int) arr_6 [i_1] [i_1])))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (!(((_Bool) (!(((/* implicit */_Bool) 9223372036854775800LL)))))));
                }
            } 
        } 
    } 
}
