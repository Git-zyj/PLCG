/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((-95 ? 1 : 113))) ? var_16 : (~-1550556310)))) ? 53156 : 12376));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [1] [1] [i_1] [1] = (max(((((arr_1 [i_1 - 1]) <= (arr_5 [i_0] [9] [i_1] [9])))), (min(((1061502857 / (arr_1 [1]))), ((((arr_1 [i_2]) != (arr_9 [i_0]))))))));
                        var_21 += ((((((arr_9 [i_3]) + 9223372036854775807)) << (((-24600 + 24631) - 30)))));
                        arr_11 [i_3] [i_1] [1] [i_1] [i_1] [i_0 + 1] = (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1]);
                    }
                    var_22 = (max(var_22, ((((((-(~8192)))) ^ var_11)))));
                }
            }
        }
    }
    #pragma endscop
}
