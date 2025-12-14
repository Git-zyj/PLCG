/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2] &= ((((min(((min(-2628803929016432843, (arr_4 [i_0] [i_1] [i_0] [i_2])))), (arr_3 [i_0])))) ? (((~(arr_0 [i_0])))) : (((((min(-2628803929016432843, -2628803929016432843)) + 9223372036854775807)) >> ((((arr_4 [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 1]) || (arr_3 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (min((arr_9 [i_1] [4]), (((14336 + ((min((arr_7 [i_0]), (arr_0 [i_3])))))))));
                                var_21 = (max((((55597 + (arr_4 [11] [i_2 - 1] [i_2] [11])))), (((arr_3 [i_1]) ? (arr_9 [i_0] [i_4]) : (arr_0 [i_0])))));
                                var_22 ^= ((arr_9 [i_0] [i_0]) + ((((~(arr_8 [i_0] [i_2 - 1] [6] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (~2628803929016432843);
    var_24 = ((~((var_13 ? 14336 : var_14))));
    #pragma endscop
}
