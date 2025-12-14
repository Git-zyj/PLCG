/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_9 | (min(var_8, var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0] = min((min(8386560, (arr_4 [i_2] [i_0]))), (((var_3 / (-1 && -486708887)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] = (max((((arr_5 [i_0] [i_0] [i_0 - 2]) ? var_1 : (arr_1 [i_0]))), var_3));
                                var_12 = var_10;
                                var_13 = ((var_9 ? (max((1 - 2177499119), (((24 ? var_6 : var_4))))) : ((((((486708886 ? 486708880 : (arr_12 [i_0 - 2] [i_1] [i_0 - 2] [i_3 - 2] [i_4])))) ? var_1 : var_9)))));
                            }
                        }
                    }
                    var_14 += ((((-3 < ((var_9 ? 4085 : var_3)))) ? (var_0 < var_5) : (((var_10 < var_10) >> (((var_4 + var_3) - 3353))))));
                }
            }
        }
    }
    #pragma endscop
}
