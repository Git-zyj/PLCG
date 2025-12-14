/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 10072099836040477101;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [22] [i_1] [i_0] [22] = -220;
                                arr_12 [i_0] [i_0] [i_2] [i_3] [13] = ((-var_4 & (max((arr_0 [i_0]), (arr_1 [i_0])))));
                                var_20 = (max(var_20, ((max(((3566419130 ? (arr_10 [i_4]) : 1794936948)), (arr_10 [i_1]))))));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_0] = ((-65534 ? ((-var_10 ? 7042520408117285978 : (max(-126931831246187666, 8688039213174782396)))) : var_1));
            }
        }
    }
    var_21 = (max(var_21, var_6));
    #pragma endscop
}
