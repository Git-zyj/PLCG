/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_0;
    var_13 = 12576523721447297302;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((3588025055 ? (arr_6 [i_0 - 1] [i_0 - 1] [i_0]) : (arr_6 [i_0 + 1] [i_0 + 1] [22]))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_16 [10] [10] [8] [8] [i_1] [i_1] &= (!706942215);
                            var_14 = ((-var_2 ? (((((3588025055 << (((arr_5 [i_0] [i_2] [i_3]) - 408600577)))) >> ((((var_2 ? var_2 : 9311126403355399312)) - 14726066706308244159))))) : var_7));
                            arr_17 [i_2] [i_0] [i_2] = ((var_0 ? ((9311126403355399328 + (arr_9 [i_1] [i_2] [i_1]))) : (((1 ? (arr_8 [i_2 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : var_9)))));
                            arr_18 [i_2] [2] = (arr_5 [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                arr_27 [4] [i_5] [i_5] = var_5;
                arr_28 [i_4] [i_4] = 0;
            }
        }
    }
    #pragma endscop
}
