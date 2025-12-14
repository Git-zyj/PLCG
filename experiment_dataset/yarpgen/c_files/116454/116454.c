/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_11 = (((min((var_5 * 1355239567018898716), (((var_5 % (arr_8 [3] [i_1] [i_1] [i_1] [14] [i_1])))))) < (!var_9)));
                            arr_12 [i_2] [i_2] [i_0] = (((((11756 >> (17091504506690652904 - 17091504506690652880)))) * (((arr_3 [i_1] [i_1] [i_1]) | (arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1] [1] [i_2] [i_2])))));
                        }
                    }
                }
                var_12 = ((((((min(var_4, (arr_5 [i_0] [i_0] [i_0]))) << (var_8 == 403452813)))) ? (((((((var_3 / (arr_10 [5] [i_1] [i_0] [i_0])))) <= (min(var_1, (arr_4 [i_0] [i_0]))))))) : (min((((var_2 ? (arr_1 [i_0]) : var_3))), (min((arr_5 [5] [i_1] [i_1]), (arr_8 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1])))))));
            }
        }
    }
    var_13 = (min(-418740151, 1));
    var_14 = (((var_7 | -54) == -418740176));
    #pragma endscop
}
