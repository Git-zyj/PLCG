/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 += (((((var_11 ? ((var_14 ? (arr_5 [i_0] [6] [i_0]) : (arr_2 [i_0] [i_1]))) : 33))) ? (((30 * 33) ? (var_4 != var_11) : (arr_6 [i_0]))) : ((-11 ? (~-38) : 51))));
                    var_18 = 1965345366;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 += (~var_5);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (((max(var_6, (arr_13 [i_1] [i_2] [i_4]))) >> (-11 - 4294967252)));
                                arr_15 [i_0] [i_4] [i_2] [i_3] [i_3] [i_1] [i_4] &= ((((((arr_13 [i_4] [i_1] [i_2]) == (((var_2 << (var_3 - 2653530715))))))) | (73 - 25798)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
