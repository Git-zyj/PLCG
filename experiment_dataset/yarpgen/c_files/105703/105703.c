/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_12 = ((!(arr_5 [i_0] [i_0])));
                    arr_10 [i_0] [11] [i_1] [i_0] = min(((-(arr_8 [i_2 - 2] [i_0] [10]))), (arr_0 [i_0] [i_1]));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_15 [i_0] = (~-9);
                    var_13 ^= (arr_11 [i_0] [i_1] [i_3]);
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                {
                    var_14 = (max(var_14, 30583));
                    var_15 &= (((arr_11 [i_4 - 1] [i_4] [i_4 + 3]) ? 173228225 : (arr_11 [i_4 - 1] [i_4 + 3] [i_4 + 3])));
                    var_16 = (arr_14 [i_4] [i_4] [i_4] [i_0]);
                }
                for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    var_17 = (max(var_17, -4126));
                    var_18 = 246;
                }
                var_19 = (min((arr_11 [i_0] [i_1] [i_1]), (arr_12 [i_0] [1])));
            }
        }
    }
    #pragma endscop
}
