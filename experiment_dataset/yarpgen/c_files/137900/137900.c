/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_19 -= min(((((arr_4 [i_0] [i_1] [i_1]) * (arr_1 [i_0])))), ((((((arr_1 [i_0]) ? 5575089548336726300 : (arr_0 [i_1]))) % (((var_14 ^ (arr_1 [2]))))))));
                arr_5 [17] [i_1 - 1] [i_0] = (((~var_1) ? (arr_3 [i_0]) : (min(5575089548336726269, (((arr_4 [i_0] [i_1] [i_1]) ? var_0 : (arr_0 [i_0])))))));
                var_20 = ((((-5575089548336726301 ? 1 : 2605085871)) < (((1156313419 ? (((arr_0 [i_1]) ? (arr_2 [i_0]) : (arr_1 [i_0]))) : (arr_4 [i_1] [i_1 - 1] [i_1 + 2]))))));
            }
        }
    }
    var_21 = 7260313812385851783;
    var_22 = (max(var_22, ((min(((var_6 ? -5575089548336726264 : (var_1 / 4887180851466812158))), 1158231674)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_23 *= (max(((((arr_9 [i_3 - 4] [i_3]) != (arr_9 [i_3 - 2] [i_3])))), 5575089548336726269));
                    var_24 = (max((64 || 5575089548336726300), (arr_4 [i_3] [i_4 - 1] [i_4 - 1])));
                    arr_13 [i_2] = (max((arr_8 [i_2]), (((arr_8 [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_2])))));
                    arr_14 [i_2] = (max(((min((arr_9 [i_4 - 1] [i_2]), (arr_9 [i_4 + 1] [i_2])))), (((arr_9 [i_4 + 3] [i_2]) ? (arr_12 [i_4 + 3] [i_3 - 2] [i_3 - 2] [i_4]) : (arr_9 [i_4 + 3] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
