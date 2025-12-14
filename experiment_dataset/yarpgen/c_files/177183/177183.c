/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_0] = ((((((arr_3 [i_0]) ? 5 : 2674512838))) ? 2674512838 : 2388405930));
                    var_18 = (min(var_18, var_8));
                }
            }
        }
        arr_12 [i_0] [i_0] = ((var_15 / (arr_4 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] [i_3] = (arr_16 [i_3] [i_3]);
        arr_18 [i_3] = var_8;

        /* vectorizable */
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            arr_21 [i_4] = 2388405930;
            var_19 = ((var_10 ? (arr_6 [i_4 - 3] [i_4 - 3]) : (!2674512830)));
            arr_22 [i_4] [5] = (arr_5 [i_4 - 1] [i_3]);
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            var_20 ^= (!var_15);
            arr_25 [i_5] [i_5] = (((1906561343 && 1620454465) ? (arr_20 [i_5] [i_3]) : 2674512841));
            var_21 += ((var_5 / (arr_0 [i_5 - 1])));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_22 &= (~2996466806);
                arr_33 [i_3] [i_6] [i_6] [i_3] = ((var_10 && (arr_32 [i_7] [i_6])));
                arr_34 [i_3] [i_6] [i_7] = -var_15;
                var_23 = var_7;
            }
            arr_35 [i_3] [i_6] = ((-(((arr_26 [i_6] [i_3] [i_3]) & (arr_26 [i_3] [i_3] [i_3])))));
            arr_36 [i_6] [i_3] = (!var_7);
        }
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            var_24 = max(1737597272204957134, (arr_6 [i_3] [12]));
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        var_25 = (min((((((arr_38 [i_3] [i_3]) && 1620454466)))), (min(var_13, -7616306389506353612))));
                        arr_44 [i_3] [6] [i_3] [i_3] [i_3] = ((((min(var_8, (arr_27 [i_8 - 3] [i_9 - 3])))) ? var_6 : ((min((arr_26 [i_3] [i_8 - 2] [i_9 + 2]), (arr_26 [i_8] [i_8 - 1] [i_9 - 1]))))));
                        arr_45 [i_9] [i_9] [i_9] [15] [i_9 - 3] = ((!((var_9 || (((arr_41 [i_3] [i_3] [i_3] [i_3]) || var_7))))));
                        arr_46 [i_10] [i_8] [i_8] [i_3] = (arr_26 [i_9 - 2] [i_8 + 1] [i_9 - 3]);
                    }
                }
            }
            arr_47 [i_3] |= ((~(arr_1 [i_8])));
        }
    }
    var_26 = var_10;
    #pragma endscop
}
