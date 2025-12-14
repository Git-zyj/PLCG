/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_0));
    var_20 += min(1, 1);
    var_21 = (-4 % 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_22 = (min(var_22, ((max(((min(((var_4 + (arr_5 [i_0]))), (65517 >= 1)))), (max(((min((arr_5 [i_0]), 1))), (max(var_5, (arr_5 [i_1]))))))))));
                var_23 = (arr_3 [i_1 + 2] [i_1 + 2]);
                arr_6 [i_1] [i_0] [i_1] = (1 * 0);
                arr_7 [i_1] [i_0] [i_1] = (((((((((arr_2 [i_0]) != 1))) << (-550666094 + 550666098)))) ? (((max(1, 1)))) : (((arr_3 [i_0] [i_1 + 1]) + (arr_3 [i_1 + 2] [i_0])))));
            }
        }
    }
    #pragma endscop
}
