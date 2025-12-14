/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -4355122595937132313;
    var_21 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_3 - 2] [i_2] [i_2] [i_1] [i_2] = ((-(max((((arr_6 [1] [i_2] [i_3]) ? 37378 : (arr_8 [i_2]))), (arr_3 [16] [i_3 + 2])))));
                            arr_11 [i_2] [4] [12] = (arr_5 [i_0] [i_1] [i_2] [i_3]);
                        }
                    }
                }
                arr_12 [i_1] [i_1] [0] = ((arr_1 [i_0]) >= (arr_1 [i_1]));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_22 &= (((((+(((arr_9 [i_0] [i_4] [i_4] [i_1] [i_0]) ? var_13 : (arr_14 [i_5] [i_0] [i_0])))))) ? ((max((arr_2 [i_0]), (arr_6 [i_0] [18] [i_4 + 3])))) : (arr_8 [i_1])));
                            var_23 = (arr_7 [i_0]);
                            var_24 += (max((arr_2 [i_1]), (((arr_8 [i_4 + 2]) ? (arr_8 [i_4 + 1]) : (arr_8 [i_4 + 3])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
