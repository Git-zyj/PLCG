/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((0 ? (var_1 && var_17) : var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (max((max((arr_1 [i_0] [i_1]), (var_2 & var_13))), (min(10, (((!(arr_1 [i_0] [i_1]))))))));
                var_20 = ((((-(((!(arr_0 [i_0] [i_1])))))) - (arr_2 [i_0])));

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_21 = ((~(((!((((arr_5 [i_2] [i_1] [i_1]) ? -21515 : (arr_5 [i_0] [i_0] [i_2])))))))));
                    var_22 = (max(var_22, (((+((((max((arr_1 [i_1] [i_2]), 65535))) ? ((((arr_5 [i_0 + 1] [i_1] [i_2]) && (arr_5 [i_0 - 1] [i_0] [i_2 - 1])))) : (!var_2))))))));
                    var_23 -= (arr_1 [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
