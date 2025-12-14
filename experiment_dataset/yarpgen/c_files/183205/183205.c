/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2 - 1] [i_3] = (min((((1949244653645858213 <= (arr_3 [i_0] [i_1 + 1])))), (max(var_3, (arr_3 [i_1] [i_0])))));
                            var_19 = (max(var_19, ((max((((arr_4 [i_1 - 1] [i_2 - 3] [4]) ? (arr_4 [i_1 + 1] [i_2 + 1] [1]) : (arr_4 [i_1 + 1] [i_2 - 3] [0]))), (((arr_4 [i_1 - 1] [i_2 + 1] [4]) / (arr_4 [i_1 + 1] [i_2 + 1] [6]))))))));
                        }
                    }
                }
                var_20 = (arr_4 [i_0] [i_0] [i_1]);
            }
        }
    }
    var_21 ^= 8452225948555703528;
    var_22 = ((var_0 ? (min(var_4, -951397747288821686)) : 255));
    #pragma endscop
}
