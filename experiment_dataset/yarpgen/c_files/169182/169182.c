/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(var_15, var_14))) / var_10));
    var_20 = (((-(var_12 + var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((((+((var_12 ? (arr_1 [i_0] [i_0]) : var_7)))) >> (-28107 + 28134)));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_22 -= (min((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))), (min((arr_4 [i_1] [i_1]), (arr_2 [i_1])))));
                    arr_7 [i_0] [i_1] [i_0] = (max(((((((arr_2 [i_0]) ? (arr_6 [i_0]) : (arr_5 [i_0])))) ? -28085 : (max((arr_5 [i_0]), (arr_0 [i_0] [5]))))), (arr_2 [i_0])));
                }
                var_23 = arr_0 [i_0] [i_0];
                var_24 = (arr_3 [i_0] [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}
