/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((min(var_9, (min(168, var_1)))))))));
    var_15 = (max(var_15, var_6));
    var_16 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 -= (min((arr_2 [i_1]), (max((((arr_1 [11]) ? 1 : (arr_1 [8]))), (((1 || (arr_6 [3] [i_1]))))))));
                var_18 = (arr_2 [i_0 + 1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 -= ((0 / (arr_3 [i_0])));
                        arr_14 [i_0] [0] [i_0] [i_1] &= (((arr_5 [i_1] [i_1] [2]) <= (arr_5 [6] [3] [i_1])));
                    }
                    arr_15 [i_2] [i_2] [i_2] = (((arr_4 [i_0 + 3]) >> (((arr_3 [i_0 + 2]) - 175))));
                }
                arr_16 [i_0 + 3] [i_0 + 3] [5] = (((arr_5 [i_1] [i_0] [i_1]) + (87 + 1)));
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
