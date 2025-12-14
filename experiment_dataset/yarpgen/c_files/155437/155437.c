/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_14 ? var_15 : (~var_1))))));
    var_21 = ((((max((~var_1), var_18))) ? (!var_2) : (((var_16 || ((max(var_4, var_7))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_22 = arr_9 [i_0] [8] [i_2] [5];
                        var_23 = ((!(((((((arr_2 [i_2] [i_0]) ? var_0 : var_1))) ? (((max((arr_9 [i_0] [i_1] [i_2] [i_3]), (arr_5 [i_0] [i_1]))))) : var_5)))));
                    }
                    var_24 = arr_3 [i_0] [i_1] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
