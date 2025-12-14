/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1 + 1] = ((((max(1550335880626328698, (arr_3 [i_1 + 2] [i_1 + 1] [i_1 + 2])))) ? ((((arr_3 [i_1 - 1] [i_1 + 3] [i_1 + 3]) ? (arr_3 [i_1 + 1] [i_1 + 2] [i_1 + 3]) : -125))) : ((715636896627055881 ? 2150219231326646396 : 124))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [8] [8] [i_4] [i_4] &= var_6;
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_1 + 2] = ((((((var_4 >= (arr_8 [i_3] [i_2 - 2] [i_3 + 2]))))) * (min((arr_8 [i_0] [i_2 - 2] [i_3 + 1]), (arr_8 [i_0] [i_2 - 2] [i_3 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 += var_1;
    var_15 = (112 <= var_3);
    var_16 = (min(((max((var_4 && var_3), var_6))), -127));
    #pragma endscop
}
