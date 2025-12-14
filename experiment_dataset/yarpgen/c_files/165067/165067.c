/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [1] [i_0] [i_0] [i_0] [1] = var_8;
                        arr_14 [i_2] [i_2] [i_1] [i_0] = (arr_6 [i_2]);
                        var_12 = (arr_6 [i_1 + 3]);
                    }
                }
            }
        }
        var_13 = (max(var_13, ((((~(arr_4 [i_0 + 1] [i_0])))))));
    }
    var_14 = 14785947946137288986;
    #pragma endscop
}
