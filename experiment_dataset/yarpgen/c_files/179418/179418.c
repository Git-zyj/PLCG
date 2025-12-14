/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((min((!1), 70368744177663)));
        arr_3 [i_0 - 3] = (min(0, ((min(7, 89)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_12 = (((((1302254497481736795 ? (31 + 174) : 1))) ? 1 : -82));
        arr_6 [i_1] = ((-6094822681532122042 ? var_9 : (89 | 0)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        var_13 = ((1 % ((-6094822681532122035 ? 91 : 2391461167))));
                        var_14 = (~7044152642795294468);
                        var_15 = (((29060 ? (((82 ? 1 : 1))) : (25870 - 536870911))));
                    }
                }
            }
        }
    }
    var_16 = 89;
    var_17 = 237;
    var_18 &= var_6;
    var_19 = var_5;
    #pragma endscop
}
