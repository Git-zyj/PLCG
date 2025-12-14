/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= -25678;
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (!0);
                var_18 = 0;
                var_19 = (max(var_19, ((min((50447 || 18446744073709551615), ((var_0 ? 14711917493230379028 : 1)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((((((arr_2 [i_2]) + (arr_7 [i_2])))) ? (((((min(255, 19)))) - ((0 ? var_0 : var_14)))) : (min((arr_4 [i_2] [1]), (min(var_2, (arr_8 [i_2]))))))))));
        arr_10 [i_2] [i_2] = 1;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (-32767 - 1)));
        var_22 -= (((arr_12 [i_3] [i_3]) & var_5));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_23 = (~4623784946340130667);
                    var_24 = (min(var_24, (((-var_12 ? (min(1, 1)) : -770629801)))));
                    arr_21 [i_4] [i_4] [i_6] = 83;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_30 [i_4] [i_7] [i_8] = ((((arr_15 [i_7 - 1] [i_7 - 1] [i_7]) + var_5)));
                    arr_31 [i_4] [7] = ((((max(((var_10 ? 36226 : 39856)), (arr_26 [i_7 - 1] [i_7 - 1] [i_4])))) ? (((max(-5837057065710030261, var_14)) * 15089)) : 255));
                }
            }
        }
        var_25 -= (max((min(13822959127369420949, -109)), var_14));
    }
    #pragma endscop
}
