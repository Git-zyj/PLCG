/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 356641299;
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 |= var_8;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [14] = (arr_3 [i_0]);
            arr_6 [9] [i_1] [i_1] = ((((!(((var_3 ? var_2 : (arr_4 [i_0] [i_1])))))) ? ((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_0])))) : (((1 ? 21 : 356641299)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_15 = ((((((max(var_8, 55))) || 3919186815)) && 8340431551752570385));
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] [6] = (arr_3 [i_4]);
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_18 [i_0] &= -1;
            var_16 ^= ((((0 == (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (max(((min(-22, 65531))), var_4)) : ((((arr_3 [i_0]) / 21)))));
            arr_19 [i_0] [i_0] = -1;
            var_17 = (!50);
            arr_20 [i_0] [i_0] [8] = 0;
        }
        var_18 = ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_4 : (min(65530, 0)));
    }
    #pragma endscop
}
