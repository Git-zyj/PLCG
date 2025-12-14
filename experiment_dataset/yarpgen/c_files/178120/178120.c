/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_19 = var_5;
                            var_20 &= (arr_11 [6] [i_1 - 3] [i_1 - 3] [i_1 + 1] [2] [i_1 - 2] [i_1 + 1]);
                        }
                        var_21 = (((~(arr_0 [i_1 - 3] [i_1 - 2]))));
                        arr_12 [i_1] [4] = (((((arr_0 [i_1 - 1] [1]) + (~1)))) ? (((17 ? (!16) : 1))) : (((~1) ? (max(65512, (arr_6 [i_1] [i_2] [i_1]))) : 1)));
                        arr_13 [3] [i_0] [i_1] [i_0] = ((+((max((arr_4 [i_0] [i_0] [i_0]), 1)))));
                    }
                    arr_14 [i_1] [8] [5] [i_1 - 3] = (arr_0 [i_1] [i_1]);
                    var_22 = ((208811882 == (((((arr_11 [i_2] [i_2] [i_1] [0] [i_1] [i_0] [4]) % (arr_6 [i_1] [4] [0]))) << (-16539 - 72)))));
                    arr_15 [i_0] [i_1] [i_1] = (max(((((arr_7 [i_2] [i_0] [i_1 + 1] [i_0]) | (((min(1, var_8))))))), (((arr_0 [i_1 - 2] [i_1 - 3]) ^ (arr_4 [1] [i_1] [i_1 - 3])))));
                }
            }
        }
    }
    var_23 = var_7;
    var_24 = ((var_14 << (((162295395 * 1) - 162295393))));
    #pragma endscop
}
