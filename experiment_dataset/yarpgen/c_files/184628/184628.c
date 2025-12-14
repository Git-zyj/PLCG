/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(((var_9 ? var_1 : (min(var_9, -12)))), var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_1] [0] [i_0] = (~var_2);

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (arr_4 [i_2] [i_0] [i_2])));
                                arr_18 [6] [i_2] [8] = (min(8821072682110828344, (min((arr_3 [i_0]), (arr_0 [i_2])))));
                            }
                        }
                    }
                    arr_19 [i_2] [i_2] [i_1] [i_2] = var_9;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_2] [i_2] [i_6] = ((((14053792846554554271 ? ((((arr_2 [i_5]) >= var_3))) : (arr_0 [11]))) <= (max(var_0, (arr_6 [i_2] [i_2] [i_6])))));
                                arr_28 [i_2] = (((!((max((arr_7 [i_0] [15] [5]), (arr_23 [i_1] [i_1] [i_2] [i_1] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
