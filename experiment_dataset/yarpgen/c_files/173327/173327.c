/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (var_10 ? var_3 : (((var_14 / var_2) ? -1 : (((max(26989, 31744)))))));
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((max((-1 && var_15), -882995232)) < (max(18114, 63))));
        arr_4 [i_0] = ((max(((-7546667025055721230 ? var_3 : 13)), var_17)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = ((8589934591 ? 38216 : 36154));
        arr_9 [i_1] = arr_7 [4] [i_1];
        arr_10 [12] [i_1] = ((882995231 ? (var_16 | var_16) : var_13));
    }
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        arr_13 [i_2] = 13302;

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                arr_19 [i_2] [i_2] [i_2] [8] &= ((((var_4 ? ((max(-882995232, 48197))) : -1)) << (1885640770632949197 - 1885640770632949152)));
                arr_20 [i_2 - 1] = var_2;
                arr_21 [i_2] [i_3] [i_4] = (((arr_16 [i_2 + 1] [i_2 - 1]) && (((11055 & (arr_16 [i_2 - 2] [i_3]))))));
                arr_22 [i_2] [11] [i_2] [i_2] = arr_18 [24] [5] [8];
                arr_23 [22] [i_3] [i_2 - 1] [i_4] = var_0;
            }
            arr_24 [i_2] [i_2] [i_2] = ((-(arr_15 [i_3] [i_3] [i_2])));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_36 [i_2] [i_5] [i_7] [i_8] [i_8] [11] [15] = min(var_10, (min(4281, (arr_16 [i_6] [i_6 - 3]))));
                            arr_37 [i_2] [i_5] [18] [i_6] [i_7] [18] [i_7] = arr_34 [i_2] [5] [5] [5] [i_7 + 1] [i_8];
                            arr_38 [24] [i_8] [i_7 + 1] [18] [i_8] [i_2] &= var_5;
                        }
                    }
                }
            }
            arr_39 [i_2] = (1450710334503702054 / 6376196067243643735);
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            arr_43 [i_9] [9] = max(((11055 / (min(-5535681677009037995, (arr_16 [i_2] [i_9]))))), (((var_5 * (((arr_41 [15] [15] [15]) / var_11))))));
            arr_44 [i_9] = (((var_10 - 17338) ? (((arr_14 [i_2 - 1] [i_2 + 1]) + var_8)) : (arr_15 [i_2 - 1] [i_2 + 1] [i_2 - 2])));
            arr_45 [i_9] [15] [17] = 9223372036854775807;
        }
    }
    #pragma endscop
}
