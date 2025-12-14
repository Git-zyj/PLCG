/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((((arr_4 [i_2] [i_2]) >= (arr_2 [i_2] [i_1] [i_0])))) != (((arr_1 [4]) ? 120 : (6996144224725587968 || 62)))))));
                    var_14 = var_10;
                    var_15 = (((arr_0 [i_0]) ? 3719915745211845930 : 1));
                    var_16 = (arr_4 [2] [i_1]);
                    var_17 ^= ((3767 ? 40 : -3719915745211845907));
                }
            }
        }
    }
    var_18 = var_11;
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_20 = (max(var_20, ((((~(arr_9 [i_4] [i_3])))))));
                var_21 = (min(var_21, (arr_8 [i_3])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                            {
                                var_22 = (max(var_22, (((3719915745211845906 ? 5 : 104)))));
                                var_23 = ((((max(22982, (((arr_11 [i_3] [i_3] [12]) ? (arr_8 [i_3]) : 873143862))))) ? (((arr_17 [i_3] [i_3] [i_3] [i_3]) * (arr_13 [i_7] [i_4]))) : -27));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                            {
                                var_24 = (max(var_24, ((((arr_10 [i_4] [i_4]) != (arr_10 [i_3] [1]))))));
                                var_25 = (((arr_10 [i_3] [i_3]) ? (arr_15 [i_5]) : (arr_17 [i_8] [i_6] [i_4] [i_3])));
                                var_26 = (arr_19 [i_5] [8] [i_5] [i_4] [i_5]);
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                            {
                                var_27 = (((arr_21 [i_3] [i_3] [i_4] [i_5] [i_6] [i_9] [i_9]) > (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));
                                var_28 = 22982;
                                var_29 -= (((!1397110859) << (2329805613 - 2329805610)));
                            }
                            var_30 = var_0;
                            var_31 &= (((((((arr_18 [i_3] [i_3] [7] [i_3] [7]) ? (arr_12 [i_3]) : (arr_8 [i_5]))))) ? (((arr_24 [i_6] [i_6] [i_5] [i_5] [i_4] [i_4] [i_3]) + (arr_8 [i_3]))) : -3719915745211845930));
                            var_32 ^= (((((~(arr_20 [i_6] [i_5] [i_4] [i_4] [i_3])))) >= (((arr_18 [i_3] [i_3] [i_5] [i_6] [0]) ? (arr_18 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_18 [i_6] [i_5] [i_5] [i_4] [i_3])))));
                            var_33 ^= (arr_24 [i_6] [i_5] [i_5] [i_5] [12] [i_4] [i_3]);
                        }
                    }
                }
                var_34 = (max(var_34, (!57471)));
            }
        }
    }
    #pragma endscop
}
