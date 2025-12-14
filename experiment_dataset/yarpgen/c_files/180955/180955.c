/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [i_2 + 4] [i_2 - 1] [i_3] [i_4 - 2] = (((arr_8 [i_1] [i_1 + 1] [i_1 + 1]) ? (arr_13 [i_0] [i_1 + 1] [i_0] [i_3] [i_4 - 3]) : (((((arr_11 [i_0]) >= var_11)) ? ((~(arr_3 [i_0]))) : (arr_14 [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2] [1] [i_0])))));
                                var_18 ^= 12857336928823129977;
                                arr_16 [i_4 - 3] [i_3] [i_0] [2] [i_0] [4] [0] = (((arr_1 [i_0] [0]) ? (((((var_2 ? (arr_11 [i_3]) : var_0))) ? (((min(var_0, var_1)))) : (min(5589407144886421638, 3476238736)))) : 5589407144886421621));
                                arr_17 [i_2 - 1] [i_0] [i_3] [i_2 - 1] [6] [i_0] [i_0] = 4294967286;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [i_0] = (~-5589407144886421638);
                            arr_25 [i_0] [i_0] [i_5] [8] [i_6] = ((-((-(arr_7 [i_0] [i_1 - 1] [i_1 - 1])))));
                        }
                    }
                }
                var_19 = 4924;
            }
        }
    }
    var_20 = ((~(max(var_11, -var_10))));
    var_21 = ((((min((((12857336928823129981 ? var_2 : var_7))), (5589407144886421642 - 12857336928823129978)))) && (-1131053052 ^ 430945099)));
    #pragma endscop
}
