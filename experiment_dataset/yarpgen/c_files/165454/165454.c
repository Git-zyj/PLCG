/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_1, 0)) / var_9)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [16] = (arr_1 [21]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_2] [i_1] [i_0] = (arr_1 [i_1]);
                        var_13 ^= (arr_1 [i_0]);
                        var_14 = (max(var_14, (((((max((((arr_11 [i_0]) ? (arr_1 [i_1]) : (arr_6 [i_1] [i_1] [5] [i_3]))), (arr_10 [i_0] [i_1] [1] [i_3])))) ? (arr_10 [i_0] [0] [0] [i_3]) : (((arr_12 [i_0]) ? ((min((arr_4 [i_0]), (arr_11 [i_3])))) : ((min(62224, (arr_0 [i_0] [i_1])))))))))));
                        arr_14 [i_1] = (0 * 0);
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = (((arr_5 [i_0] [i_0]) ? (arr_11 [i_0]) : (arr_0 [21] [i_0])));
        arr_16 [i_0] [i_0] = ((((min(7936, (((arr_5 [i_0] [i_0]) ? 19161 : (arr_8 [i_0] [7])))))) ? (max(1, ((0 ? -7954 : 4871)))) : -26114));
    }
    var_15 = 1;
    var_16 = var_7;
    var_17 -= var_6;
    #pragma endscop
}
