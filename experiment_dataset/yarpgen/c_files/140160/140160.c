/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] [4] [i_2] = var_7;
                                var_11 += ((((((((var_7 ? 0 : (arr_9 [1] [5] [i_2] [i_3])))) ? ((-3331513566251206615 ? 8191 : (arr_7 [i_0] [i_0] [i_0] [i_0]))) : ((max(173, var_6)))))) ? ((((var_8 % var_10) != (arr_11 [i_0] [9] [i_2] [i_2])))) : ((((var_3 ? 5337477758112984999 : (arr_11 [i_4] [i_1] [i_1] [i_1])))))));
                            }
                        }
                    }
                }
                var_12 = ((var_0 ? ((-((~(arr_10 [i_0] [i_0] [i_0] [6] [8]))))) : (((~(arr_4 [1] [1] [1]))))));
                arr_15 [i_1] [i_0] = (((((((((arr_1 [i_0] [7]) >= (arr_11 [0] [0] [0] [4])))) * (arr_13 [4] [i_1] [i_0] [i_0] [i_0])))) ? -9 : (arr_3 [1])));
            }
        }
    }
    var_13 += 850564748341797499;
    #pragma endscop
}
