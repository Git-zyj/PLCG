/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = var_14;
    var_18 ^= (((((var_0 ? var_8 : var_0))) ? (max(((142 ? 142 : 49152)), 124)) : var_14));
    var_19 = ((1 ? 1 : 107));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (((((((arr_5 [i_1] [i_0] [i_1]) == (arr_0 [i_0 + 1] [i_0 + 1]))))) <= (max((((94 ? 40468 : 32767))), (arr_0 [i_0 - 3] [i_0 - 2])))));
                    arr_8 [i_1] [i_1] [i_1] = (arr_5 [i_1] [i_1] [i_1]);
                }
            }
        }
        arr_9 [i_0] = (max((max((((!(arr_6 [i_0] [i_0] [2] [4])))), ((~(arr_3 [i_0 - 3] [6]))))), (arr_6 [i_0] [i_0] [1] [1])));
        var_20 ^= (((arr_1 [i_0]) ? ((min(((var_12 > (arr_3 [i_0] [1]))), (max((arr_2 [i_0] [i_0] [i_0]), (arr_1 [i_0 - 3])))))) : (arr_2 [i_0] [4] [i_0])));
        arr_10 [i_0] [i_0 + 1] = ((-(arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
