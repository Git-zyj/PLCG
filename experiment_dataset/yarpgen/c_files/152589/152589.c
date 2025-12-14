/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((min((-2147483647 - 1), 0)) + 2147483647)) + 2147483647)) >> (min(var_8, ((min(var_1, var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] |= (-6 & 11629659947893910299);
                arr_8 [i_1] = (((max((40806 <= -1), (var_16 == var_12)))) + ((((((arr_6 [i_1]) ? var_17 : var_17)) <= (arr_3 [i_0])))));
                var_19 = ((((max(var_16, (arr_5 [i_1] [i_1])))) || ((max((((arr_3 [i_0]) ? var_9 : 1129056640)), ((var_7 ? (arr_5 [i_0] [i_1]) : var_5)))))));
            }
        }
    }
    var_20 = (min(var_0, (min(1, 0))));
    #pragma endscop
}
