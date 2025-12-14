/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((arr_0 [i_0] [i_1]) || (arr_2 [i_0] [i_1] [i_1 + 1]))));
                arr_5 [i_0] [i_0] = 1798353075;
                var_21 &= ((var_8 ? (((~(~-32748)))) : (min((max(-3306609745421619397, (arr_3 [i_0] [i_1 + 2] [i_0]))), var_4))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3 - 2] = (min((((arr_6 [i_2 - 2] [i_2 - 2] [i_1]) ? (arr_2 [i_0] [i_2 + 2] [i_0]) : (arr_2 [i_0] [i_0] [i_0]))), (!3306609745421619381)));
                            arr_13 [i_1 + 1] [i_0] = (min((arr_0 [i_0] [i_0]), (!var_15)));
                        }
                    }
                }
                arr_14 [i_0] [i_0] = (!-3306609745421619408);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_22 = ((var_15 ? var_0 : (max((arr_6 [i_4] [i_5] [i_4]), -var_1))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 6;i_8 += 1)
                        {
                            {
                                var_23 = (-(((arr_27 [8] [i_4] [i_8 + 4] [3] [i_8 - 1] [3]) ? (arr_24 [i_7] [i_7] [i_8 + 1] [i_6] [i_8 + 3] [i_8]) : -1)));
                                var_24 = (16 * 0);
                                arr_30 [i_4] [i_4] [i_5] [0] [i_6] [i_8 + 4] [i_8] = var_7;
                                arr_31 [i_4] [4] [8] [i_6] [i_8] = min((324570397 && 9), ((~((~(arr_19 [i_5]))))));
                            }
                        }
                    }
                    arr_32 [i_6] [i_6] [i_6] = 15576295242283267796;
                    var_25 ^= (arr_23 [8] [i_5] [i_5] [i_5]);
                }
            }
        }
    }
    var_26 = ((((min(var_4, 523776))) ^ (15576295242283267775 < 1319803393)));
    var_27 = -1;
    #pragma endscop
}
