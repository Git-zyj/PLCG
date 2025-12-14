/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((-((-2012111278 ? (!6) : 839668692646674834))));
    var_18 |= var_3;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = 0;
        arr_3 [i_0] = ((-(min(1, 1928306494))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = (arr_4 [i_1]);
        var_21 = (max(var_21, (!17374)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_22 = ((-(arr_14 [i_5 - 1] [14] [i_4] [i_2])));
                        var_23 = (max(var_23, ((((arr_13 [i_5 - 1] [i_3 - 2] [i_3 + 2] [i_3 - 1]) <= (arr_11 [i_3 - 1] [i_3 - 2]))))));
                    }
                }
            }
            arr_16 [i_2] = ((1 != (((arr_9 [i_2] [i_2]) / (arr_11 [i_2] [i_3])))));
        }
        var_24 &= (~47413);
    }
    #pragma endscop
}
