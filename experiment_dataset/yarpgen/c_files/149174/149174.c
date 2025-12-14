/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(384, -32750);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [6] [i_2] [i_2] [3] = (arr_1 [4] [i_1]);
                    arr_7 [i_2] [i_0] [i_2 - 3] = (max((max((((var_1 <= (arr_0 [i_2] [i_1])))), (~var_7))), (((56 | (~-32750))))));
                    arr_8 [i_0] [i_0] [i_2] = (max(((((194 | var_13) >= ((~(arr_1 [i_0] [i_2])))))), (arr_1 [i_1] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
