/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((((1 << (((max(10541471847140994764, 32767)) - 10541471847140994746))))) ? var_9 : (min((var_13 / var_10), var_13)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 ^= (((arr_0 [i_0] [i_0]) != (arr_2 [i_0] [i_0])));
        var_20 = (!var_7);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_4 [i_2] [10] [i_2])));
                    arr_7 [i_2] [i_1] [i_0] = (((arr_5 [i_2 - 1] [14] [i_1]) == (arr_5 [i_2 - 2] [i_1] [i_1])));
                    var_22 = (max(var_22, (arr_6 [i_2 + 3] [1])));
                }
            }
        }
    }
    var_23 = var_7;
    var_24 ^= var_0;
    #pragma endscop
}
