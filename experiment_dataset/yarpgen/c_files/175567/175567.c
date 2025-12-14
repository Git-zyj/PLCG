/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 *= ((23431 ? (~23431) : (~11358651190677493855)));
                    var_14 = (((((var_7 ? var_1 : -1))) ? ((0 ? 0 : var_9)) : 0));
                }
            }
        }
        arr_10 [i_0] = var_9;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] = ((7088092883032057761 ? 7088092883032057761 : var_3));
        var_15 += (var_0 <= 0);
        arr_16 [i_3] = var_8;
        arr_17 [i_3] [i_3] = ((-7088092883032057761 ? var_12 : -var_12));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_16 = (max(var_16, (~var_11)));
                var_17 = var_5;
                var_18 = (((((var_9 ? var_3 : var_12))) ? (!0) : -1));
            }
            arr_22 [10] [10] &= ((7088092883032057761 ? ((0 ? 1523097517869801933 : var_11)) : 1));

            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_19 += (-9223372036854775807 - 1);
                var_20 = (~85);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_31 [i_3] [i_4] [i_6] [i_7] [i_7] [i_8] = (!2024100137);
                            arr_32 [i_3] = (((!var_9) + var_9));
                        }
                    }
                }
                var_21 = var_7;
            }
            for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
            {
                arr_35 [i_3] [i_3] [7] [i_3] = var_11;
                var_22 = (max(var_22, (((!(!var_8))))));
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_23 ^= 0;
                var_24 -= 0;
                arr_39 [i_3] = 23431;
                arr_40 [i_3] = ((4294967295 ? var_0 : var_4));
            }
        }
    }
    var_25 *= -1;
    #pragma endscop
}
