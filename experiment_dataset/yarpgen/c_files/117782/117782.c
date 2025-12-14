/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min(0, var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 += (arr_6 [i_1] [9]);
                    var_20 = (min((!var_8), ((((arr_1 [i_0] [4]) + 3407161233890930282)))));
                }
            }
        }
    }
    var_21 += (var_12 % var_17);
    var_22 = ((var_12 + (~var_6)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_23 *= ((-(arr_12 [i_4] [i_4] [i_3])));
                var_24 = (min(var_24, (((((((arr_12 [i_3] [i_4] [i_4]) ? (arr_6 [11] [i_4]) : (arr_12 [i_3] [i_3] [i_4])))) ? 2122911431 : var_11)))));
            }
        }
    }
    #pragma endscop
}
