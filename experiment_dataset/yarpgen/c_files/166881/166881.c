/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = var_1;
                    var_13 = ((!(arr_6 [i_2] [11] [i_2] [15])));
                    var_14 = (((var_6 + 2147483647) >> (((max((max(348290138055303506, var_4)), (arr_6 [i_2] [i_1] [i_0] [i_0]))) - 348290138055303498))));
                }
            }
        }
    }
    var_15 = ((((0 | var_6) ? (2947189173977759449 - 5622842087850820774) : var_2)));
    #pragma endscop
}
