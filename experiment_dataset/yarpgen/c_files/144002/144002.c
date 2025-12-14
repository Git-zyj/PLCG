/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_9));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [1] = arr_1 [i_0] [i_0];
        var_12 &= (((((~(arr_0 [i_0])))) ? (((arr_3 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0]))) : (~var_7)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 ^= 24006;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_14 = (((((+((var_5 ? (arr_3 [7]) : var_7))))) ? ((~(arr_11 [12] [i_3] [i_3]))) : (arr_7 [i_3] [i_1])));
                    arr_13 [8] [i_1] |= (24014 ? -24003 : 1);
                    var_15 = (((((((24006 ? (arr_5 [14] [i_3]) : (arr_2 [i_3]))) & 2147483647))) ? ((var_1 ? (arr_2 [i_2 + 1]) : -23984)) : (!1)));
                }
            }
        }
    }
    #pragma endscop
}
