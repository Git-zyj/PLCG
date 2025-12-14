/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_1 ? -var_9 : var_2))) ? ((-(max(14241709398650647402, var_7)))) : var_8));
    var_11 = (min(var_11, var_5));
    var_12 = 65529;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 ^= ((((134217216 || (arr_2 [i_1 + 1] [0]))) ? (((var_3 ? 15 : ((-12201 ? var_0 : 13))))) : (((arr_5 [i_0] [15] [i_1 - 1]) ? (arr_7 [10] [14]) : 2094565917))));
                    arr_9 [i_0] [i_1] [6] [i_2] &= (-((var_4 << (2093056 - 2093040))));
                    arr_10 [i_0] [i_0] = (max((((63263 % var_1) ^ (((arr_3 [i_2]) ? 1008806316530991104 : -113)))), (((~(arr_5 [i_0] [i_2] [0]))))));
                }
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
