/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((4039688309 ? var_6 : (min(9, ((var_15 ? var_10 : 255279007)))))))));
    var_18 = var_3;
    var_19 = ((((((255278986 & -1) ? (var_10 & var_14) : var_16))) | (((~var_9) ? ((max(var_4, var_11))) : (max(var_13, 1))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 *= (((((((min(4039688304, 255279014))) ? 12362921205319413423 : (max(4039688295, 9338972696235848963))))) ? var_2 : ((var_7 ? (arr_0 [i_0] [17]) : (255279003 | 4039688310)))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0 + 2] = var_16;
            arr_8 [i_1 - 1] [i_0] = var_6;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_2] = ((var_4 | ((~(arr_11 [i_0 + 2])))));
            arr_13 [i_0] [i_0 + 2] = (arr_0 [i_2] [13]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_24 [i_0 - 1] [i_0] [i_0] [i_0 + 2] [i_0] = ((+((var_3 ? (arr_22 [i_0 + 2]) : (arr_16 [i_0 + 1] [i_0 + 2] [i_5])))));
                            var_21 = ((((((min(65535, 17062046962645906497))) ? (arr_22 [i_0]) : (min(255279007, (arr_22 [21]))))) * var_7));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_22 *= 4039688310;
                            var_23 *= (var_5 % 4039688288);
                        }
                    }
                }
            }
            var_24 = (((max(((min(3033, 250))), (min(255278958, var_9))))) ? var_6 : 4039688304);
            arr_35 [i_0] [i_6] = ((max((arr_28 [i_6] [i_6] [i_0 - 1]), (255278983 >= 255278986))));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
        {
            var_25 = (min(var_25, ((min(((255278983 ? (arr_34 [14] [i_0 - 1] [14] [i_10] [14]) : var_7)), ((((((arr_6 [i_0 + 2] [i_0] [10]) ? 255278983 : (arr_25 [5])))) ? (max((arr_28 [i_10] [1] [1]), var_3)) : ((((arr_2 [i_10] [i_0]) | 4039688295))))))))));
            var_26 = ((((max(((255278990 ? 4002259745 : 255278983)), (min(var_16, 255278963))))) ? (((~var_10) ? (arr_15 [2] [i_0 + 1] [i_0] [i_0]) : ((((arr_10 [i_0] [i_0]) >= 4039688346))))) : (((!(((var_11 ? var_2 : var_16))))))));
        }
    }
    #pragma endscop
}
