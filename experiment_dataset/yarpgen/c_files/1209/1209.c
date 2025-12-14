/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] = (32767 > 0);
                            var_11 = ((max((min(1, 145)), ((min(var_6, (arr_3 [1])))))));
                            arr_12 [i_0] [1] [i_1] [i_3] = (((min(((max(var_10, (arr_4 [1] [1])))), var_8))) ? (((arr_10 [i_0] [i_3 + 1] [i_0 + 2] [i_2] [i_1 + 1] [i_1 + 1]) ? (max(var_8, var_4)) : (((var_2 + (arr_3 [i_2])))))) : ((((!(((-(arr_6 [i_0] [5] [i_1])))))))));
                            var_12 = (min(((-(arr_10 [i_0] [i_3 + 2] [i_2] [i_3] [i_1 + 1] [i_3 + 2]))), (((-(arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [i_2]))))));
                        }
                    }
                }
                arr_13 [i_1] [i_1] = min((~38009), (max((((arr_3 [i_1]) | (arr_10 [i_0] [i_0 - 1] [i_0 - 2] [i_1 + 1] [i_1] [i_1]))), (arr_10 [i_0 + 2] [i_1 + 1] [i_0 - 1] [i_1 + 1] [i_0] [0]))));
            }
        }
    }
    var_13 = (max(var_13, var_5));
    #pragma endscop
}
