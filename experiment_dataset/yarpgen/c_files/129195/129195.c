/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~-1538609127);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [18] = 1;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2 - 1] [i_1] |= (((((var_5 / var_10) ? (arr_5 [i_1 - 3]) : 4294967295)) - (2 >= var_0)));
                        arr_11 [i_0] [i_0] [i_2] = ((!((16080819522609907988 || (arr_5 [i_1 + 1])))));
                        var_12 = var_4;
                        arr_12 [i_0] [i_1 + 1] [i_2] [i_3] = (((arr_7 [i_1]) >= (((arr_5 [i_2]) ? ((1 ? 1950931138618478763 : var_2)) : (~255)))));
                        arr_13 [1] [i_2 + 2] [i_0] = 1;
                    }
                    var_13 -= (arr_2 [20] [i_1]);
                    arr_14 [i_0] = (((~var_10) ? var_3 : ((-((~(arr_0 [i_1] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
