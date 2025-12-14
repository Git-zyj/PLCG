/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = 0;
        arr_3 [i_0] [i_0 + 2] = (~(~var_0));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                {
                    arr_10 [i_2] = (min(0, 91));
                    arr_11 [i_3 + 2] [i_2 - 2] [i_1] |= (!0);
                    var_16 += var_14;

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_3] [i_3] [i_2] [i_1 - 2] [i_1 + 2] |= 10;
                        arr_15 [i_1] [i_1] [i_2 - 2] [i_3 + 3] [i_4] |= (max(15451564254399647012, (!-10752)));
                    }
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_3 + 3] [i_5 - 2] [i_5 - 1] |= (((~((min(var_13, -1))))));
                        var_17 = (~var_4);
                        var_18 ^= var_13;
                        var_19 = 2407377894423210789;
                        arr_20 [i_3] [4] [i_3] [i_5 + 2] [i_5 + 2] = 246;
                    }
                }
            }
        }
        var_20 ^= var_5;

        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_21 = (min(var_21, var_6));
            arr_24 [i_6] = ((!(((var_0 ? var_1 : -3)))));
        }
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_22 = var_13;
            var_23 = (min(var_23, (!7269096571615062533)));
            var_24 = (max(var_24, ((min(((51030 ? -1 : (min(1, 2)))), 6128)))));
        }
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        var_25 = (max(var_25, (((!((max((~367186209), (!var_3)))))))));
        var_26 = ((-120 ? 15 : -493557524));
    }
    var_27 += 0;
    var_28 = 0;
    #pragma endscop
}
