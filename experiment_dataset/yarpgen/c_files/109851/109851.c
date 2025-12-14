/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (min(var_13, (~var_10)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_14 -= 34961;
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_15 = (var_8 * var_8);
                            var_16 = (min(var_16, -1036934540));
                        }
                    }
                }
            }
            var_17 = (max(var_17, (~49385)));
        }
        arr_14 [i_0] = var_10;
        var_18 = var_2;
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_19 *= 18348631415778637046;
        arr_18 [i_5] [i_5] = 98112657930914565;
        arr_19 [i_5] [i_5] = ((var_2 << (-11522 + 11527)));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((~((var_7 + (-11521 + -11529))))))));
        var_21 = (max(var_21, var_0));
        var_22 |= (~-11521);
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] [i_7] &= 1728494038;
        var_23 = var_5;
    }
    var_24 ^= var_1;
    #pragma endscop
}
