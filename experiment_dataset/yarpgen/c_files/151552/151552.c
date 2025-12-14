/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 63678;
    var_15 = (var_4 < var_2);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_16 &= (min((min(((max((arr_1 [i_0] [i_0]), 46280))), -var_1)), (arr_1 [i_0 - 1] [i_1 - 1])));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_17 = var_2;

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_18 = (arr_10 [i_1 - 1] [i_1 - 1] [4] [i_1 + 1]);
                        var_19 &= 2111700908364982055;
                        var_20 ^= 2111700908364982049;
                    }
                    arr_13 [0] [i_1] [0] &= (max((arr_12 [i_0 - 2] [i_2 + 2] [1] [i_2] [i_2 + 2]), -2888));
                }
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    var_21 &= (max(((-var_10 * (arr_10 [4] [i_1] [i_1] [i_1]))), ((((arr_5 [8] [12]) * (arr_15 [i_1 - 2] [14] [i_4]))))));
                    arr_17 [i_1] [i_1] [i_1] = -var_11;
                }
            }
        }
    }
    #pragma endscop
}
