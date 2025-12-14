/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-6810 ? 23 : -10));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((min(0, (((var_5 > (arr_1 [8])))))));
        arr_3 [i_0] = ((23 ? var_9 : ((var_3 ? (arr_0 [i_0]) : var_8))));
        arr_4 [i_0] = ((((((((12 >> (-32 + 60)))) ? (arr_0 [i_0]) : 560662078))) ? (max(1568102118987322149, -4660094729775602387)) : 23));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((max(var_1, 1568102118987322155))) ? -4966922148855438152 : (max(0, 3)))) > 14178545949915917164);
        var_13 = 26644;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {
                        var_14 = (min(var_14, 11));
                        arr_18 [i_3] [i_1] [i_3] = (((!(!29378))) ? (min((var_1 * 0), -var_3)) : ((((((max(var_1, var_4))) == ((0 ? 18446744073709551609 : var_5)))))));
                        arr_19 [16] [i_2] [i_3] = var_2;
                    }
                }
            }
        }
    }
    var_15 = (min(153818438, ((var_7 ? ((var_0 ? var_1 : var_2)) : var_1))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            {
                var_16 = (min((var_0 <= 0), (((4 ? 4966922148855438151 : 0)))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_17 -= ((!((((arr_27 [i_6 + 2]) ? (arr_27 [i_6 - 3]) : var_6)))));
                                var_18 *= ((((var_8 - (arr_22 [i_8])))));
                                arr_33 [i_9] [i_5] [i_9] = var_1;
                                arr_34 [5] [1] [i_7] [i_8] [i_9] = (((1 ? (((arr_0 [i_9]) ? (arr_26 [i_9] [i_8] [i_7] [i_6]) : var_3)) : (arr_28 [i_5] [i_6] [i_7] [5]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
