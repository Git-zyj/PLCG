/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((18446744073709551615 ? (((((var_6 ? var_2 : var_9))) ? -var_9 : var_2)) : 767747466));
    var_14 &= ((4817 ? 14105 : 3230542708370451825));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (((var_10 / var_7) ? -5041 : ((-25592 ? (arr_1 [i_0]) : 3423541311561029914))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (min(-928495573210660947, 32));
                    arr_10 [i_2] [i_1 + 1] [1] = ((((((10 / (arr_3 [i_2] [i_0])))) ? var_10 : (~430000520))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_16 = var_11;
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    {
                        var_17 -= (((~var_12) || (1 + -422566485)));
                        var_18 = ((((min(77, -6274786314797716651))) ? (arr_19 [i_3] [i_3] [i_3]) : ((-((862520746 ? var_10 : var_9))))));
                    }
                }
            }
        }
        arr_23 [i_3] = (arr_13 [i_3]);
        arr_24 [i_3] = (((arr_21 [i_3] [i_3]) | (3774483889 || var_5)));
        arr_25 [i_3] = ((((var_6 >> ((((max(-14266, 65533))) - 65513))))) ? var_9 : (arr_18 [11] [i_3] [i_3] [11]));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_29 [11] = 4294967272;
        arr_30 [i_7] &= 425322187;
    }
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        var_19 = 4294967295;
        arr_35 [i_8] = (236479359 & 117440512);
    }
    #pragma endscop
}
