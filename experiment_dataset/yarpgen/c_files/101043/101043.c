/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 ? ((var_4 << ((((min(255, 149))) - 144)))) : (~var_8)));
    var_11 = ((((((~var_2) / var_2))) ? 119 : (1693147352483658869 | 79)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 += min((arr_2 [i_1]), (arr_2 [i_0]));
                var_13 *= (((((min(21828, 21828)) ? (((7833719255375721763 || (arr_1 [2] [5])))) : (arr_4 [i_0 - 1])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (min(38704668, (arr_3 [i_3 - 1])));
                                var_15 = (((((-(arr_13 [i_3 - 1])))) ? ((((((arr_6 [i_0] [i_1] [i_0]) - var_8)) + ((var_1 ? var_1 : (arr_12 [i_2] [i_3 - 1] [i_2] [i_1] [i_2])))))) : (min(4256262652, 54597))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                var_16 = (((((arr_16 [i_5 - 3] [i_6 + 1]) ^ (arr_16 [i_5 - 3] [i_6 + 1]))) | ((~(arr_16 [i_5 - 1] [i_6 + 2])))));
                arr_18 [9] = 7833719255375721770;
                var_17 = (max(var_17, (((((+(((arr_16 [i_6 - 1] [3]) ^ var_8)))) > (arr_14 [i_5]))))));
            }
        }
    }
    #pragma endscop
}
