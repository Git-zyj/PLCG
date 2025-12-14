/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (((((139462161686911452 ? (((arr_6 [i_0] [i_0] [i_0]) - (arr_12 [i_0] [i_0]))) : 49663))) ? var_7 : ((var_7 ? ((~(arr_5 [i_0] [i_1]))) : 1))));
                                arr_14 [2] [14] [17] [i_0] [i_0] [0] = (((var_10 ? (arr_10 [i_4 + 1] [i_3] [i_2] [16] [16]) : (arr_10 [i_4 + 2] [i_4] [16] [4] [i_3]))));
                                var_18 = (arr_3 [i_0] [i_0]);
                            }
                        }
                    }
                    var_19 = (min(((((max((arr_10 [i_2] [i_1] [i_2] [i_0] [10]), (arr_8 [i_1] [i_1] [i_0] [5])))) ? 6451734014936370308 : (arr_10 [i_2] [14] [i_0] [i_0] [i_0]))), var_8));
                }
            }
        }
    }
    var_20 = var_12;
    var_21 = (max(97, ((((var_4 ? var_8 : var_6)) ^ ((max(var_1, 1)))))));
    var_22 = var_0;
    #pragma endscop
}
