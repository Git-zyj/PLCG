/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_21 = ((-(((arr_8 [i_3] [i_1] [22]) - var_19))));
                        arr_12 [i_3] = (((var_17 || (arr_0 [i_0] [i_3 - 2]))));
                        var_22 = (~var_8);
                    }
                    var_23 = (((max(124, (arr_9 [i_0 - 2] [i_1] [i_1] [i_2 - 1]))) / (~var_5)));
                }
                arr_13 [1] = (arr_6 [i_1]);
            }
        }
    }
    var_24 = (((max(-var_13, var_9)) * var_3));
    var_25 = var_10;
    #pragma endscop
}
