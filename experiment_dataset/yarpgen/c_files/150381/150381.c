/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((((var_3 % var_3) ? var_2 : (!var_8))))));
    var_17 = (4057621483930876579 | -330650607766390032);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = (max(var_18, (~49152)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = ((!(arr_8 [i_0] [i_0] [i_0])));
                    var_20 = (min(var_20, (((+((141 ? (arr_3 [6] [i_1]) : var_9)))))));
                }
            }
        }
        var_21 = 128;
        var_22 = var_9;
    }
    #pragma endscop
}
