/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [2]) ? ((((arr_0 [i_0]) || (arr_1 [i_0])))) : (arr_1 [i_0]));
        var_20 -= (((-(arr_1 [i_0]))) % var_8);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 |= arr_5 [8] [20] [i_2];
                    var_22 |= (((((((-1930097601 + (arr_3 [i_0] [i_1 + 1] [4])))) / ((55037 ^ (arr_5 [16] [i_1 - 1] [i_2])))))) ? ((((arr_4 [i_0] [8] [i_0]) % (arr_0 [i_0])))) : 115);
                    arr_7 [i_0] [i_1] [i_1] = -4294967271;
                    arr_8 [i_1] = (((arr_3 [i_2] [i_1 - 1] [i_1]) ? var_18 : (((arr_3 [i_0] [i_0] [i_1]) / (arr_3 [13] [i_1] [i_1])))));
                }
            }
        }
        arr_9 [i_0] = -44;
    }
    var_23 = var_3;
    #pragma endscop
}
