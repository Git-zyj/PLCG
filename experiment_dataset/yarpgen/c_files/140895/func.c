/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140895
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
    var_10 = ((int) ((long long int) (+(((/* implicit */int) (signed char)13)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [20] [(signed char)18] &= (~(((/* implicit */int) arr_3 [8ULL])));
                var_11 &= ((/* implicit */signed char) arr_3 [(signed char)0]);
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_2))))) - (((((/* implicit */_Bool) (signed char)96)) ? (var_9) : (var_1))))))));
}
