/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    var_11 = (max(var_11, 793261320));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 += (arr_7 [i_0 - 1] [i_2 - 1]);
                                arr_11 [i_0] [i_3] [i_2] [i_3] [i_4] [i_4] [i_4] = (arr_7 [i_1] [i_3]);
                                var_13 = (min(var_13, (((~(min(6264454005904462580, (arr_10 [i_2 - 2] [i_2 - 2] [i_2 - 4] [16] [i_0 + 1]))))))));
                                arr_12 [i_0] [i_4] [i_4] [i_3] [i_4] [1] = (((((~(arr_5 [i_0 + 1] [i_2 + 1] [i_1])))) ? ((min((arr_5 [i_0 - 1] [i_2 - 1] [i_2]), (arr_5 [i_0 + 1] [i_2 - 2] [i_2])))) : (arr_5 [i_0 - 1] [i_2 - 3] [i_3])));
                            }
                        }
                    }
                }
                arr_13 [i_0] [6] [8] = 1014464465875285779;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_14 = (max(var_14, (((!(arr_9 [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 1] [i_6] [i_6] [5]))))));
                arr_19 [i_6] = (((arr_8 [i_5] [i_5] [i_5] [i_5]) >> ((-(arr_7 [i_5 - 1] [i_5 - 1])))));
            }
        }
    }
    #pragma endscop
}
