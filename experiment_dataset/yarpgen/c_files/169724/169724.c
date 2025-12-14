/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((((((86 ? var_8 : 170)))) || ((!(arr_3 [i_0 + 3])))));
                    arr_10 [i_0] [i_0] [i_0] [2] = (((min((((arr_8 [i_0] [i_0 + 2] [i_1] [i_2]) ? var_2 : var_4)), var_2))) ? (min(var_9, (8197499944789760109 / 25165824))) : var_3);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_19 [10] [i_1] [i_2] = var_7;
                                arr_20 [9] [9] [i_2] [i_3] = (((((~(min(var_4, 1212453127))))) ? var_3 : (((~((var_12 ? 86 : (arr_1 [i_0 - 1] [i_1]))))))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] |= 199;
                    arr_22 [i_0] [1] [1] [i_0 + 2] = var_9;
                }
            }
        }
    }
    var_14 = (((((!var_2) >> (-8120495627424706566 + 8120495627424706588))) <= var_7));
    #pragma endscop
}
