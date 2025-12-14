/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 -= (min((min(1, 1)), ((!(arr_3 [i_1 + 4] [i_1 + 3])))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [14] = (min(((min((arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1 + 2]), -95))), 1));
                        arr_12 [i_2] [i_1] [3] [i_1] = ((458752 != (((arr_10 [i_1 + 4] [i_2 + 1]) ? (arr_7 [i_2] [i_2 + 1]) : (arr_10 [i_1 + 3] [i_2 - 1])))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_17 = -var_5;
                            var_18 = (min(((((arr_4 [1] [i_2 - 1] [i_2]) ? (arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2]) : 4051037619))), (((var_13 + 109) ? (arr_5 [i_0] [i_2] [i_2] [i_2]) : (~-6965149987312219730)))));
                        }
                        arr_15 [i_0] [i_2] [i_1] [i_2] [7] = (~-156);
                        var_19 = (min((((3615385630379773464 ? 243929677 : 127))), ((((((arr_3 [i_2] [i_3]) ? (arr_1 [i_0]) : -6965149987312219730))) ? (-9223372036854775807 - 1) : (((max(77, 0))))))));
                    }
                    var_20 -= ((458752 ? (((1784316644 ? 128 : 239))) : 4051037644));
                }
            }
        }
    }
    var_21 |= (min(((var_3 ? (0 * 1) : (max(6965149987312219734, 12024)))), var_9));
    #pragma endscop
}
