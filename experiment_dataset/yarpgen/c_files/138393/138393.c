/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_13 = (((arr_5 [i_1] [i_2] [i_2] [i_0]) ? var_5 : (arr_5 [2] [i_1] [i_2] [i_2])));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_14 &= var_11;
                            var_15 = (max(var_15, (arr_0 [i_2] [i_3])));
                        }
                    }
                }
            }
            var_16 = (((arr_11 [i_1] [i_1] [i_0] [i_1]) || (((var_0 % (arr_5 [i_1] [i_1] [i_0] [i_0]))))));
        }
        arr_13 [i_0] = (((((16 - (arr_7 [i_0] [i_0] [i_0])))) ? (arr_3 [i_0]) : ((-(arr_0 [i_0] [7])))));
    }
    var_17 -= (var_8 & var_1);
    #pragma endscop
}
