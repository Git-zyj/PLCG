/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (2073052754658017672 + ((((arr_0 [i_0]) + (arr_1 [i_0] [i_0])))));
        var_13 = (((((min(12517603718838351152, var_4))) ? -16795257374628414486 : ((var_5 ? var_1 : var_6)))));
        arr_2 [i_0] [i_0] = (-12452371030648202853 ? ((-(arr_1 [i_0] [i_0]))) : var_6);
        var_14 = ((-5384 ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : -61)) : ((5384 ? 1 : 1))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_15 = (~var_6);
        var_16 = (max(var_16, ((((((arr_1 [i_1 - 2] [14]) ? var_8 : var_10)) + (arr_4 [i_1 + 1]))))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_15 [i_3] = var_3;
                        arr_16 [i_2 - 1] [i_2] [i_2] [i_3] = 1852171672;
                    }
                }
            }
            var_17 = (max(var_17, (((var_4 ? (91 + var_0) : 1852171657)))));
            var_18 = (min(var_18, var_10));
        }
        arr_17 [i_2 - 1] = (((((13943621287823298109 ? (~1852171672) : ((max(0, (arr_12 [i_2] [12] [12] [i_2]))))))) ? (((1651486699081137119 ? 0 : 27921))) : (((2382418030450668365 + -13427) ? ((var_11 ? var_1 : var_4)) : 1010184639))));
    }

    for (int i_6 = 3; i_6 < 20;i_6 += 1)
    {
        arr_20 [i_6] = (arr_14 [i_6] [i_6] [i_6] [i_6]);
        arr_21 [i_6] = (min(((max((arr_12 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1]), 58))), (((~17) ? (max(-1010184664, 1900136014)) : (!-743890147)))));
        var_19 = (max(var_19, (((-0 ? (max((arr_18 [6]), 85)) : (!2090354294))))));
        var_20 = (!var_11);
        var_21 = (-127 - 1);
    }
    #pragma endscop
}
