/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max((arr_1 [i_1] [i_1]), 2774855053693407350)))));
                var_21 = ((1482424368 ? (1 || 8235654716327827839) : 29305));
                var_22 = (max((((((1 ? 1 : (-127 - 1)))) ? ((3 ? 1 : 9156)) : 1)), 156));
                arr_6 [i_0] [13] = (min((((var_19 > (arr_2 [i_0] [i_0] [i_1])))), ((var_19 << (((arr_3 [3] [i_0]) - 2590970094))))));
                var_23 = (min(var_23, (((-5376874048549221705 ? ((1008 ? var_18 : (arr_4 [i_1] [i_1]))) : (arr_4 [11] [11]))))));
            }
        }
    }
    var_24 = (min(var_24, ((((!16110005791252434361) << (var_9 - 92))))));
    var_25 = (max(var_25, var_3));
    #pragma endscop
}
