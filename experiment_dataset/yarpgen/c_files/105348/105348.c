/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_1));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0] [i_0]) % (arr_0 [i_0 + 1] [i_0]));
        var_16 = ((-(arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = ((arr_0 [i_0] [i_0]) != 0);
                    arr_8 [i_0] [i_0] [i_0] = 4131;
                    arr_9 [i_0] [i_1] [i_1 + 1] [i_0] = ((1131447944 ? 3683173833899463270 : 65535));
                    var_18 = (min(var_18, (arr_5 [i_2] [i_1 - 1])));

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 - 2] [i_0] [i_0 + 1] = ((!(arr_14 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_1] [i_0 + 1] [i_0 + 1] [i_0])));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] |= (((arr_5 [i_2 - 1] [i_1 - 1]) - (arr_5 [i_2 - 1] [i_1 - 1])));
                            arr_18 [i_0] [i_1 - 1] [i_2] [i_0] [i_2] = (((arr_7 [i_4 - 1]) ? (arr_7 [i_0 + 1]) : (arr_7 [i_0 + 1])));
                            arr_19 [i_2] [i_2] [16] [i_2] [i_2] |= (((arr_15 [i_1] [i_1] [i_1] [i_1] [i_2 + 2] [i_3] [i_4 + 1]) ? (arr_4 [i_0] [12] [i_2 - 4]) : (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] [i_2 + 2] [i_3] [i_4 - 1])));
                        }
                        var_19 = (min(var_19, 5359930642517530022));
                        arr_20 [i_0] [i_2] [0] |= (-6649386581985559882 == (arr_15 [i_0] [i_1] [i_0] [i_2] [i_2] [i_2 - 3] [i_3 + 1]));
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        arr_24 [15] = ((1368431541 ? 2047 : 1131447958));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                {
                    var_20 = (min(var_20, (arr_13 [i_5 - 2])));
                    arr_30 [i_5] [i_5] [i_5] = (min(((-1 ? -4123 : 0)), (arr_10 [i_7 - 1] [i_5] [i_7 - 3] [i_6])));
                    var_21 = (min((arr_0 [i_5] [i_5]), (((268434432 <= (arr_7 [i_6]))))));
                    var_22 = (max(var_22, (max((!-6044423816752181292), ((13675 ? 65535 : -4994640286535445921))))));
                }
            }
        }
    }
    #pragma endscop
}
