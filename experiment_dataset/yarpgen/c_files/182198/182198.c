/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (((~var_3) - (((~(arr_7 [i_2] [4]))))));
                    var_13 = (((((-((7316289151450654067 ? 6277101864527730255 : 255))))) ? var_6 : (max((!var_8), 16325424593684862687))));
                    var_14 = (max((arr_4 [i_2] [i_1]), (arr_6 [i_0] [0])));
                    var_15 = (arr_6 [0] [17]);
                    arr_9 [i_2] [i_2] [8] &= (((max((arr_2 [i_2 - 4]), 9223372036854775807))));
                }
            }
        }
    }
    var_16 = var_3;
    var_17 = -7173475340814551538;
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                {
                    arr_19 [i_5] [9] [i_4] [i_5] = arr_14 [i_4];
                    var_19 *= (max((max(var_8, (((216172782113783808 == (arr_17 [i_3] [i_4] [6])))))), (arr_10 [i_3])));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_24 [16] [i_5] [i_5] = (arr_11 [i_6 - 3] [12]);
                                arr_25 [i_5] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
