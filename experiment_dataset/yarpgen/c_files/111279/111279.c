/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 += ((-86 ? -1 : -86));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, -86));
        arr_2 [i_0] = (max((((-112 >= 3932160) & (~var_8))), ((((((var_1 ? var_10 : var_4))) ? ((min(112, 116))) : var_5)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = ((var_8 & (690946237 ^ 0)));
                        var_16 = var_1;

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_17 = (max((min(6877329976714692098, 118)), 111));
                            arr_13 [17] [i_3] [19] [i_3] [i_4] [i_4] [i_4] = ((((((77 ? 16 : 1065353216))) | (var_3 ^ var_1))) & var_9);
                            arr_14 [i_0] [19] [i_2] [i_2] [i_2] = (((((var_1 ? var_4 : 522240)))) * (var_0 == var_3));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_18 ^= (var_4 % var_2);
                            arr_19 [i_0] [i_0] [6] &= ((var_1 ? (-108 == var_10) : var_11));
                            var_19 -= var_11;
                            arr_20 [i_0] [i_1] [i_2] [i_5] = (var_2 != -50969);
                            arr_21 [i_5] [i_3] [i_5] [i_1] [i_0] = (((var_11 <= var_3) & (var_7 | var_9)));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_20 -= (((((var_7 ? var_8 : 2305843009213693951))) ? ((var_8 ? 126 : var_7)) : -112));
        var_21 = (min(var_21, (((var_4 > (var_3 || 111))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_34 [i_6 - 1] [20] [i_6 - 1] [i_9 + 3] &= (((var_11 - -1) - (var_3 + var_11)));
                        var_22 ^= ((var_6 - 46509) > (-6658297804872585907 != 108));
                    }
                }
            }
        }
        arr_35 [i_6] [i_6] = (((7 ? 46509 : var_10)));
        arr_36 [i_6] = (((!var_7) >= (~28531)));
    }
    #pragma endscop
}
