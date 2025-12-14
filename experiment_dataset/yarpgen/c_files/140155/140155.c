/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((((max(((((arr_4 [i_0] [i_0] [i_2]) ? 61030 : 1449620185))), (arr_5 [i_0])))) ? (((10428 ? (max((arr_7 [i_2]), (arr_0 [i_0] [i_0]))) : (((-2365909820769122702 ? 88 : -717814442)))))) : (min(168, 15644274472727356509))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 += ((((((((arr_2 [i_4]) == 350032498)) ? (((((arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_4]) == (arr_0 [i_2] [i_1]))))) : (arr_2 [i_4])))) ? (arr_1 [i_4]) : ((min((((131 ? (arr_4 [i_1] [i_4] [i_4]) : (arr_6 [9] [9] [i_2] [i_2])))), (arr_5 [i_4]))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [8] = ((((((168 | -1529319556) & (min((arr_0 [i_3 + 1] [i_1]), 15))))) || ((max(((1529319555 ? 127 : -4058)), 698)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, (((var_12 ? -7212408271047577056 : (((((max(var_16, var_1))) ? ((var_15 ? 127 : 29)) : 147))))))));
    #pragma endscop
}
