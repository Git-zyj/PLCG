/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-1336933787 ? 65535 : 65535));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [20] [i_2] = 1;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [4] [i_2] [i_3] |= (!-1448037192);

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [8] = ((32767 >= ((min((arr_7 [i_0 + 1] [i_0 + 1]), (arr_7 [i_0 + 2] [i_0 + 2]))))));
                            arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] = (500801683 + 1);
                            var_12 = (((((65535 * var_9) ? 65534 : (((!(-32767 - 1))))))) ? var_8 : (!-2004815761));
                        }
                        var_13 = (max(var_13, ((((-(arr_2 [i_0 + 2] [i_0 - 1] [i_0 - 1])))))));
                    }
                    for (int i_5 = 4; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_0] = (((arr_0 [i_5 - 2]) ? ((min(var_8, (arr_0 [i_5 - 3])))) : (((arr_0 [i_5 - 3]) / (arr_0 [i_5 + 2])))));
                        arr_19 [i_0] [i_1] [i_2 - 1] [i_5 - 4] [i_0] = min((((arr_5 [i_5]) % 1)), (((!(arr_5 [4])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
