/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = 3197007954218089511;
                    arr_10 [i_0] [i_0] [i_0] = 0;
                    arr_11 [3] [i_0] [i_0] = ((((((max(var_1, (arr_6 [5])))) ? (10686760743020738827 > 1) : (max(11964459430606793374, 28)))) != ((((max(0, var_11)) / (arr_2 [i_0 + 2]))))));
                    arr_12 [i_0] [i_1] [i_2] = var_8;
                    arr_13 [i_1] = ((arr_4 [i_1]) + ((~(max(var_8, 21)))));
                }
            }
        }
    }
    var_13 = var_4;
    #pragma endscop
}
