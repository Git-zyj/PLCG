/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((-(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_0] [i_0] = ((((min((arr_5 [i_2] [21] [i_0]), (arr_0 [i_0])))) + (arr_5 [i_0] [i_1] [i_2])));
                    arr_10 [i_2] [i_1] [i_1] [i_1] = (((arr_4 [i_0] [i_1] [i_2]) ? (!var_2) : (arr_4 [i_0] [i_1] [i_2])));
                    var_10 ^= ((!((min(3771842600, 64)))));
                }
            }
        }
        arr_11 [i_0] = (min((max(-1, (1504850611 << 1))), var_6));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_16 [i_4] [i_4] [i_3] = ((~((~(arr_15 [i_3])))));
                var_11 = ((max((min(var_8, var_2)), (arr_12 [7]))));
                arr_17 [i_4] = var_2;
                var_12 = (max(var_12, (((var_0 || (((-((min(var_2, (arr_6 [12] [12] [i_3]))))))))))));
            }
        }
    }
    #pragma endscop
}
