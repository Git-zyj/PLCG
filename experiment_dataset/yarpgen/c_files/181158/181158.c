/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = 15;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_1 - 1] = var_3;
            arr_6 [i_1] [3] [i_0] = 15;
            arr_7 [i_0] [i_1] [i_0] = (arr_3 [i_1 - 1] [19]);
            arr_8 [1] [i_1] [i_0] = 1;
            arr_9 [i_0] = 214;
        }
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            arr_14 [i_0] [11] [i_2] = 1;
            arr_15 [i_2] [20] [i_2] = (((arr_3 [1] [i_2]) | 1));
            arr_16 [6] [i_2] [i_0] = (((arr_13 [i_0] [i_2 - 2]) % (arr_13 [i_2] [i_2 - 3])));
        }
    }
    var_15 = ((((((((var_4 ? 241 : var_14))) ? var_9 : var_4))) / ((((max(161, 2873404386))) ? 1 : (min(62, var_11))))));
    #pragma endscop
}
