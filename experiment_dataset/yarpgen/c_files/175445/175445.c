/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, -var_6));
    var_13 = var_2;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_14 -= var_1;
        arr_2 [1] |= var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (((25030 ? (((var_2 != (arr_3 [i_0]))) : (arr_0 [i_0])))));
                    var_16 = (min(var_16, (((((var_1 >= ((1219743264 ? -7166862388766115208 : var_10)))))))));
                    arr_7 [i_0] [i_1] [3] [i_1] = var_1;
                    var_17 = 3075224014;
                }
            }
        }
    }
    #pragma endscop
}
