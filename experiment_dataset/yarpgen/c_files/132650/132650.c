/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 67;
    var_12 = (min(var_12, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((~(356649268 ^ var_0)));
                var_13 = var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, ((((185270385 + (arr_6 [i_1] [i_2])))))));
                            arr_13 [i_0] [i_0] [8] [8] [4] [i_0] = arr_4 [7] [i_2] [i_2];
                            var_15 = (((var_9 ? (arr_8 [i_0] [i_0] [i_2]) : (arr_6 [i_2] [i_1]))) << ((((((max(var_2, (arr_0 [i_0])))) ? 4109696911 : (arr_9 [i_0] [i_1] [i_0]))) + 131)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
