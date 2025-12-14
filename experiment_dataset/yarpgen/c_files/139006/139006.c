/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [21] [i_0] = 2147483647;
                    var_15 = (((((1031656254 ? (arr_8 [15] [i_1] [i_1] [i_2]) : (arr_8 [i_0] [i_0] [i_1] [i_2])))) ? (((arr_8 [17] [i_1] [i_2] [16]) ? (arr_8 [23] [10] [8] [i_2]) : -433827525)) : (~63342)));
                    arr_10 [i_0] = ((var_2 - (min(var_13, ((2147483631 ? var_5 : var_1))))));
                    arr_11 [i_2] &= (min(-9, (((!(arr_3 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
