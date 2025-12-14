/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 |= var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = var_2;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 ^= -24445;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_15 ^= -var_1;
            arr_10 [i_1] [i_1] [i_1] = (var_11 + var_8);
            arr_11 [i_1] [i_1] [i_2] = ((-120 == ((27657 ? (arr_6 [i_1] [i_2] [i_1]) : 1))));
            arr_12 [i_1] = 254;
        }
        var_16 -= (((!var_2) <= 1160));
        var_17 ^= (arr_7 [i_1] [i_1] [i_1]);
        var_18 ^= var_7;
    }
    for (int i_3 = 4; i_3 < 16;i_3 += 1)
    {
        arr_15 [i_3 - 2] = ((((((arr_14 [i_3]) & (((arr_4 [i_3]) | 32744))))) ? 32717 : var_8));
        var_19 ^= 27657;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_20 = (max(var_20, 1));

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_21 = (min(var_21, ((~(((arr_18 [i_4]) / var_11))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {
                        var_22 = ((((((arr_18 [i_4]) <= 37879))) > ((((arr_27 [i_4] [i_7] [i_6] [i_7] [i_7]) <= 47737)))));
                        arr_28 [i_7] [10] [10] [i_4] &= 1;
                        var_23 = (((((-32744 != (arr_23 [i_4] [i_6] [i_7])))) == 32036));
                        var_24 = (((arr_25 [i_4] [i_4] [i_6] [i_7 + 1]) ? (arr_25 [i_4] [i_5] [8] [i_7 + 1]) : (arr_24 [19] [8] [4] [i_7 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
