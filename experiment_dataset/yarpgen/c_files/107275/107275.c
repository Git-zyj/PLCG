/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((2386938281 ? var_3 : var_2));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((((((arr_0 [i_0]) + var_7))) ? (((var_0 ? (arr_4 [i_0] [i_0] [i_0 + 2]) : (arr_4 [12] [i_0] [i_0 - 2])))) : -0));
                    var_12 = (max((((min(var_8, var_9)) | ((min(0, 0))))), (((((arr_8 [i_1] [1]) / var_10))))));
                    arr_10 [i_0] [i_1] [i_0] = (49526 ? 65535 : (min(29265, var_6)));
                }
            }
        }
    }
    var_13 = -6065531311816459521;
    #pragma endscop
}
