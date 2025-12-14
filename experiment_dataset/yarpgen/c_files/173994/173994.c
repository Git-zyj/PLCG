/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_14 = (min(var_14, ((-((max(469337656, 4131416299)))))));
                    arr_6 [i_1] [i_0] [i_0] [i_1] = ((max(var_4, var_2)) * (~var_0));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_15 = var_3;
                    arr_11 [i_0] [i_1] [i_3] = ((((var_9 ? var_1 : var_11))) * (max(-var_12, var_0)));
                    var_16 = ((min(var_6, var_0)) - (((var_13 + var_3) ? (var_3 - var_7) : var_8)));
                }
                arr_12 [10] |= max((((((max(var_13, var_12))) && (((var_4 ? var_5 : var_2)))))), var_6);
                var_17 = ((var_4 & var_10) ? var_7 : var_3);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_5] [i_5 - 2] = ((min(var_5, (min(var_4, var_6)))) & -var_3);
                arr_20 [i_4] [i_4] [i_5] = min((max(var_5, var_12)), ((var_4 ? var_7 : var_10)));

                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((((((max(var_3, var_13))) ? var_5 : var_2))) ? 67043328 : (min((!var_3), (max(var_3, var_3))))))));
                                arr_27 [i_6] [i_5] [i_6] [i_7] [i_8] = max(3825629639, 2097151);
                                arr_28 [i_6] [i_5] [1] [i_7] [i_8] [16] [i_8] = (min(var_5, var_13));
                                arr_29 [17] [i_6] [17] [i_8] [17] [i_8] [i_8] = (var_3 | ((max(var_8, var_9))));
                            }
                        }
                    }
                    var_19 = (max(var_19, -var_13));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            {
                arr_36 [i_10] [i_10] = (((min(var_13, var_11))) ? ((var_6 ? var_12 : var_4)) : 2772399049);
                arr_37 [i_10] [i_9] [i_9] = min(((var_12 ? var_2 : var_10)), (!16777215));
            }
        }
    }
    var_20 += (!var_3);
    #pragma endscop
}
