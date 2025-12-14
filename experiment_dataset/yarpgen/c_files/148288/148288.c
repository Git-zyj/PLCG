/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -32757;
    var_20 = (min(var_20, 0));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [14] [i_0] = 32750;
        var_21 = -2012308609;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_22 = (max(var_22, -32757));
                        var_23 = (~-var_7);
                        var_24 = (arr_2 [i_1] [i_1]);
                        var_25 = 3;
                        arr_15 [i_0] [i_1] = ((~(((arr_4 [i_0] [i_0]) & (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                    }
                    var_26 = (((max(var_8, 3929790587)) | (1 | -18911)));
                }
            }
        }
        arr_16 [i_0] = 67;
    }
    #pragma endscop
}
