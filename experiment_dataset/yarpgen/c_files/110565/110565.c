/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = ((9223372036854775804 / ((max(32754, (arr_0 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1 + 1] [i_1] = (max(((145 ? (var_4 || var_12) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (max(((min(28781, (arr_5 [i_0] [i_1])))), (((arr_2 [i_1]) ? (arr_7 [i_2] [i_1] [i_0 - 1]) : var_0))))));
                    arr_9 [i_1] [i_1] [i_2] [i_2] = ((((((var_11 == var_1) * (max(27, (arr_6 [i_2] [i_2] [i_2] [i_2])))))) || (arr_3 [i_0] [i_1] [0])));
                }
            }
        }
        arr_10 [i_0] |= (((((13 ? ((0 ? (arr_2 [6]) : 1)) : (((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? -22 : (arr_1 [i_0])))))) ? (max(((max((arr_4 [2] [i_0] [i_0 - 1]), 42))), (14 / 12))) : ((-((6 ? 3890015074 : 65525))))));
        var_16 = (min(var_6, (((max(var_8, -5964284548261275892)) / ((((var_0 || (arr_7 [i_0] [i_0] [i_0])))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_17 |= var_1;
        var_18 = (min(var_18, (((((((2399707305 || (arr_4 [4] [i_3] [4]))) || var_3)) || ((((arr_7 [i_3] [i_3] [i_3]) ? (((((arr_5 [i_3] [14]) <= (arr_5 [i_3] [0]))))) : (min(1749349411, (arr_2 [14])))))))))));
    }
    var_19 = max(var_10, 2399707305);
    #pragma endscop
}
