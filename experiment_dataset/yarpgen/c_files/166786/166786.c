/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((1333040893 - 1) + (max(var_1, var_12)))) + var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (arr_1 [i_0]);
                arr_4 [i_0] [i_0] [i_0] = ((((((arr_2 [i_0] [i_0] [i_0]) + ((3006502508 ? 15959222788817367695 : (-9223372036854775807 - 1)))))) && ((!(!-28867)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((((max((arr_11 [i_3] [i_2 + 2]), (arr_11 [12] [i_2 - 1])))) ? (((65535 << (802068760 - 802068750)))) : (arr_11 [i_2 - 1] [i_2 + 1]))))));
                            arr_17 [i_5] [i_4] [i_4] [i_4] [i_2] = (max((max(1, (arr_12 [i_2 + 1] [i_4 + 2] [i_5]))), (max((arr_12 [i_2 - 1] [i_4 - 1] [i_4]), (arr_12 [i_2 + 1] [i_4 + 2] [13])))));
                        }
                    }
                }
                arr_18 [i_2] [i_2] &= -1023;
                var_16 = (min(var_16, (arr_13 [i_2 - 2] [i_2 - 2] [i_2])));
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
