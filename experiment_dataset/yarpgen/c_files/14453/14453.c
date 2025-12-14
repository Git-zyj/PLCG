/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = ((((min((arr_5 [i_2 - 2] [i_2 + 1] [i_1 + 3] [i_1]), (min(var_4, 61600))))) != ((((max(1, (arr_6 [i_0])))) ? var_13 : (arr_2 [i_1 - 1] [i_1 + 3])))));
                    var_20 = (arr_5 [i_1 + 4] [i_1] [i_1] [i_2 - 4]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (61600 >= 61600);
                                var_22 = var_7;
                            }
                        }
                    }
                    var_23 -= (min(var_12, var_7));
                }
            }
        }
    }
    var_24 = var_0;
    #pragma endscop
}
