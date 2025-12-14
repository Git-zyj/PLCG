/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 >= ((-(var_0 & var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (((min(var_3, (arr_1 [i_0 - 2]))) > ((max(((max(1, 65535))), (((arr_4 [i_0]) ? (arr_8 [i_0] [i_1] [1] [i_3] [i_4]) : var_10)))))));
                                var_16 = (((((-(arr_7 [i_2 + 3] [i_0 + 2])))) ? (arr_7 [i_2 - 2] [i_0 - 3]) : (249 | 4294967281)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_17 = var_6;
                                var_18 = (15 + -6233314637838316630);
                                arr_17 [i_6] [i_6] [i_5] [i_6] [i_6] = (((max(var_3, 13154828041656107448))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_11;
    var_20 = 27303;
    #pragma endscop
}
