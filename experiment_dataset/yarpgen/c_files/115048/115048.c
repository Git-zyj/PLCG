/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_12 ^ var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (((arr_3 [i_0] [i_0] [i_0]) ? (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_7)) : (arr_0 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_18 -= (((31816 < 31816) >= (max((arr_7 [i_1] [10] [1]), -90))));
                            var_19 = (((max(((((arr_6 [i_2] [i_0] [i_0] [i_2] [i_1]) + (arr_3 [i_0] [i_0] [i_0])))), (arr_1 [i_0] [i_0]))) <= (((787758894 ? 1 : 3311038439)))));
                        }
                    }
                }
                var_20 = (min((((arr_2 [2] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))), (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
                var_21 = (var_13 <= 33720);
                var_22 = (min(var_22, ((max((arr_1 [i_0] [i_0]), ((min(-5758, -5758))))))));
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
