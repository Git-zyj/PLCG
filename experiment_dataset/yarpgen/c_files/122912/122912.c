/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_11 = (arr_4 [12] [i_1] [i_0]);
                        arr_10 [i_3 + 3] [i_0] [i_2] [i_1] [i_0] [i_0] = 7254748003806219305;
                        var_12 = (arr_5 [i_0]);
                    }
                    var_13 |= (((11191996069903332321 - var_0) ? (arr_8 [i_0] [i_2] [i_2] [i_0 + 1] [i_0] [i_0 - 2]) : var_6));
                }
            }
        }
    }
    var_14 = ((var_4 ? ((((((17121805691418083377 ? (-2147483647 - 1) : 173)) != var_3)))) : ((var_2 ? 6 : 255))));
    #pragma endscop
}
