/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((~(min((arr_2 [i_0] [i_0] [i_0 - 4]), var_9))))) ? (((arr_0 [i_1]) ? (((max(39403, (arr_3 [i_0] [i_0]))))) : (arr_2 [13] [i_0 - 3] [i_1]))) : ((((((var_7 * var_0) + 2147483647)) >> (((!(arr_2 [i_0] [i_0] [i_1])))))))));
                var_10 = (min(var_10, ((min((((min((arr_1 [i_1]), var_6)) % var_9)), (((((((!(arr_2 [5] [i_1] [i_0]))))) < (arr_2 [i_0] [i_0] [i_0 - 4])))))))));
            }
        }
    }
    var_11 = 3276014473;
    #pragma endscop
}
