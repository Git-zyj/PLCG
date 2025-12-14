/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (min((max((10 % var_3), ((min(2252088819, 1))))), ((((var_5 ? -108 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 ^= (2168718052 == 2177625143);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_0] [i_3] = ((((min(1, 296312576))) & (arr_8 [i_0] [i_1] [i_0])));
                            arr_14 [i_0 + 1] [i_0 + 1] [i_0] [16] &= (arr_12 [7] [7]);
                        }
                    }
                }
                arr_15 [18] [i_1] &= (max((arr_9 [i_0] [i_0] [2]), (((((((arr_11 [18] [i_1] [i_1]) ? (arr_4 [1] [i_0] [i_1]) : var_1))) ? ((max((arr_3 [i_0] [i_0] [i_0]), var_8))) : ((((arr_3 [i_0] [i_1] [i_1]) == var_7))))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_21 [i_0] [10] [i_4 + 2] [4] |= (~896);
                            arr_22 [i_0] [i_1] [i_4] [i_0] = 1;
                            var_13 = (((((19535333 ? -296312564 : 43964))) ? ((((((arr_8 [i_0] [i_1] [i_0]) ? 2591356987 : 296312576)) & var_5))) : 18446744073709551610));
                            var_14 = 1;
                            var_15 = ((((arr_3 [i_0 + 1] [i_4 + 2] [i_4 + 2]) && (arr_3 [i_0 + 1] [i_4 + 2] [i_4 - 2]))) && ((min(1, var_7))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
