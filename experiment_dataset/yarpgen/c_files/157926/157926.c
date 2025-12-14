/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_3);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 1] [i_1 + 1] [i_1] [i_3] [8] [i_3] = ((2405389723 ? 3195943967 : 47798));
                                var_16 = (-(max((arr_4 [i_0 - 2] [i_1]), ((~(arr_5 [i_1] [i_1 - 3]))))));
                            }
                        }
                    }
                }
                var_17 -= ((((1099023342 ? 55688 : 3195943971))) > ((47798 ? (arr_7 [i_1 - 1]) : (arr_13 [13] [i_0 - 1] [i_1 + 2]))));
            }
        }
    }
    var_18 &= ((~(var_11 - var_1)));
    var_19 = (max((!var_1), (var_2 - var_2)));
    var_20 *= var_6;
    #pragma endscop
}
