/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((var_0 * ((min(var_9, -0)))));
    var_12 = -2729145508054793780;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 += ((((max(-4153867481135507781, 18446744073709551598))) ? (((14675 > (arr_7 [i_0] [i_0 - 1] [i_0 + 1] [11] [i_0])))) : 5340));
                                arr_12 [i_0] [i_2] [i_2] [1] [i_4] = ((107 % (min(-80, ((177 ? var_4 : -2659892424320906424))))));
                                arr_13 [5] [i_2] [4] [i_2] = var_2;
                                var_14 |= ((((((arr_1 [i_0] [i_2]) - (arr_2 [i_0])))) ? ((((max((-2147483647 - 1), 14644776458117143406))) ? var_1 : (arr_5 [i_0] [i_0] [10] [i_0]))) : 126));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 = (-(((arr_17 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_2 + 2] [i_2 - 1]) ? (arr_17 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 + 2] [i_2 - 1]) : (arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_2 - 1] [i_2 - 1]))));
                                var_16 |= (arr_8 [i_6] [i_5] [i_5] [i_2 + 2] [i_1] [i_1] [i_0 + 1]);
                                arr_20 [i_1] [i_5] [i_2] [i_5] [i_1] [i_0] = (((var_5 * (arr_15 [i_2 + 1] [i_0 - 1] [i_2] [i_0 - 1]))));
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_0 - 2] [15] [i_7] = (max(var_9, (((arr_1 [i_0 + 1] [i_7 - 1]) ? (arr_10 [i_7] [i_7] [i_7] [i_7] [i_0] [7]) : (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) ? var_2 : (arr_19 [i_0] [i_1] [i_7] [i_7] [i_7] [i_7] [i_1])))))));
                    var_17 ^= (arr_5 [i_1] [i_1] [i_1] [i_1]);
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_18 = (arr_10 [i_8] [i_8 + 1] [i_8] [i_8 + 2] [i_8] [i_8]);
                    var_19 = (min(var_19, (arr_19 [i_8 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])));
                    var_20 = (arr_0 [3] [i_8]);
                    arr_27 [i_8] = (arr_26 [i_1] [i_1] [i_1] [i_1]);
                    var_21 = var_4;
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_22 += ((((min((((arr_4 [i_0] [i_1]) ? 178 : (arr_8 [i_0] [i_0] [i_0] [3] [i_1] [i_9] [i_9]))), -1))) ? (arr_19 [i_0] [17] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0]) : ((((min((arr_2 [i_0]), 15181831706538615662)) != (arr_6 [i_0]))))));
                    var_23 += 18;
                }
                arr_31 [i_0] [i_1] [i_1] = ((((((arr_3 [i_0 + 1]) || (arr_3 [i_0 + 1])))) | (((var_4 && (arr_3 [i_0 - 2]))))));
            }
        }
    }
    #pragma endscop
}
