/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_11 = (min(var_11, (4294967295 / -8544)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, ((((var_9 * var_9) ? var_10 : var_6)))));
                        var_13 -= ((~(1073741824 > var_6)));
                        var_14 -= var_9;
                        var_15 += min(234136076577189876, (((var_9 != (var_2 - var_8)))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_16 &= ((min(var_2, var_8)));
                        var_17 = (max(var_17, (((max(var_4, var_6))))));
                        var_18 |= var_8;

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            var_19 -= (((!32756) < var_3));
                            var_20 = (min(var_20, (((var_2 * (45932 >= var_1))))));
                            var_21 -= (((((var_10 ? var_1 : var_1))) ? 8546 : var_4));
                        }
                    }
                }
            }
        }
        var_22 += ((var_0 == ((((max(-8563, var_6))) ? 7 : var_2))));
        var_23 *= var_8;
    }
    var_24 = (min(var_24, var_4));

    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        arr_27 [i_8 + 2] |= max(((var_5 ? (var_0 * var_0) : 234136076577189883)), ((min(8538, ((1 ? var_9 : -8536))))));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                {
                    var_25 = (min(var_25, ((max(127, (var_3 & 8522))))));
                    arr_33 [i_10] [11] [i_8 + 2] [i_8 + 2] |= ((min(var_7, var_2)) == var_6);
                }
            }
        }
        var_26 = (min(var_26, (((var_7 ? (((3221225463 ? ((min(var_2, var_6))) : var_2))) : -var_3)))));
    }
    #pragma endscop
}
