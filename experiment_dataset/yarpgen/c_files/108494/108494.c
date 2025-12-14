/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_15 = (arr_0 [i_0 - 1] [i_0 - 1]);
        var_16 = (arr_1 [i_0]);
        var_17 = (min(var_17, var_8));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = ((((min(-67, (((var_1 ? 0 : 55162)))))) ? -2114692736 : var_12));
        arr_5 [i_1] [i_1] = (max(-1829783578, 4294967288));
        var_19 = ((max((!-32764), (min(4294967290, (arr_3 [i_1]))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_20 = (4294967288 + 1);
            var_21 = ((((((arr_7 [i_1]) ^ (arr_7 [i_1])))) ? (~-1) : (arr_7 [i_1])));
            var_22 -= (((((arr_2 [i_1] [i_2]) | 0))));
            var_23 = (max((-32767 - 1), (arr_3 [i_2])));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_24 = (var_7 <= (arr_8 [i_1] [i_3 + 2] [1]));
            var_25 = var_14;
            arr_11 [i_1] [i_1] [i_3 + 1] = (arr_8 [i_1] [i_3] [i_3]);
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_26 ^= (arr_16 [i_3] [i_3 - 1] [i_4]);
                        arr_17 [i_5] = (arr_10 [i_3 + 3] [i_4 + 3]);
                        var_27 -= (arr_2 [i_4 - 2] [i_3 + 4]);
                    }
                }
            }
            var_28 = var_12;
        }
    }
    var_29 = var_3;
    var_30 |= ((max(-126, (~18446744073709551606))));
    #pragma endscop
}
