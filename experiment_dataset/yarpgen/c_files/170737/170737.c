/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-290232263 ^ (min((var_17 & var_15), ((max(var_17, var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_1] = (arr_2 [i_3] [i_1] [11]);
                            arr_10 [i_3] [i_3 + 1] [i_1] [i_3] [i_3 + 1] [i_1] = ((arr_3 [i_1 + 2] [0]) ? 2147483646 : (min(-6391530334333579806, var_5)));
                            arr_11 [i_1] [i_1] [i_1] [i_1] = ((32661 ? 32658 : ((((((~(arr_6 [i_0] [i_0] [i_0] [13] [i_0] [i_0])))) >= ((var_4 ? 1 : (arr_2 [i_0] [i_1] [i_1]))))))));
                            arr_12 [13] [5] [i_1] [i_1 + 1] [i_0] = ((((((arr_1 [i_3 - 1]) & var_4))) ? ((var_6 << (((arr_1 [i_3 + 1]) - 32478)))) : (((min((arr_1 [i_3 - 1]), var_3))))));
                        }
                    }
                }
                var_19 = (i_1 % 2 == 0) ? ((((((min((arr_5 [i_1] [i_1] [i_0] [9]), (arr_5 [i_1] [i_1] [i_1 + 2] [i_1 + 2])))) + 2147483647)) << (((-1 + 17) - 16)))) : ((((((((min((arr_5 [i_1] [i_1] [i_0] [9]), (arr_5 [i_1] [i_1] [i_1 + 2] [i_1 + 2])))) - 2147483647)) + 2147483647)) << (((-1 + 17) - 16))));
                arr_13 [i_0] &= max(((((arr_8 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_0]) ? -19898 : var_3))), ((var_5 ? 6391530334333579821 : (arr_0 [i_0] [i_0]))));
            }
        }
    }
    var_20 -= ((!((((var_1 || var_13) % var_14)))));
    #pragma endscop
}
