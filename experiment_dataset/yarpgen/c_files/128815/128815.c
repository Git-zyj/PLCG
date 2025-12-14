/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 - 4] [i_0 - 4] [i_0 - 4] [17] [17] = (min((arr_6 [i_0] [i_0] [17] [i_3]), (min((arr_8 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_1]), (arr_8 [i_0] [i_1] [i_2 + 1] [i_3] [14])))));
                                arr_12 [18] [i_2 - 2] = (min((((min(13584, (arr_8 [i_0] [i_2] [i_2] [i_3] [i_3]))) & (((~(arr_4 [i_0] [18] [18])))))), ((((arr_1 [4] [i_3]) == ((var_2 ? var_2 : (arr_0 [i_4]))))))));
                            }
                        }
                    }
                }
                var_15 = min(((!(((var_13 ? (arr_6 [i_0] [i_1] [8] [i_1]) : (arr_4 [i_0] [i_0] [i_1])))))), ((!((!(arr_3 [1] [i_1]))))));
            }
        }
    }

    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            arr_19 [i_5] [i_6] [i_6] = (min((min((arr_9 [i_5] [i_5] [i_6 + 1] [16] [i_5] [11]), var_5)), (min((arr_15 [i_5 + 1]), (arr_0 [i_6 - 2])))));
            var_16 = (min((arr_16 [i_6]), (arr_8 [i_6 - 2] [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1])));
        }
        arr_20 [i_5 - 1] = (((((min(63868, 7771211391820787351)) | ((min(var_1, (arr_16 [8])))))) - (arr_6 [i_5] [i_5] [i_5] [i_5])));
    }
    #pragma endscop
}
