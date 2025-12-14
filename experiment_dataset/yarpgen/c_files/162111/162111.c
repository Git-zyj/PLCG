/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(((min(511, ((var_5 ? var_13 : var_11))))), (min((var_15 << 1), (var_18 % var_5))));
    var_21 = 14339163348016591883;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_22 = ((!(var_8 % var_15)));
                    var_23 = ((((min((~1), var_11))) ? -var_10 : ((((((65535 >> (1742970591 - 1742970590)))) ? 65535 : 4294967295)))));
                    arr_7 [i_0] [i_1] [i_2] = ((((arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (arr_4 [i_0] [i_1 + 1] [i_0]) : (arr_4 [i_0 - 1] [i_1 - 1] [i_0 - 1]))));
                    arr_8 [i_1] [i_1 - 1] = ((((((!var_10) ? (arr_4 [i_1] [i_1] [i_2 + 4]) : (!var_18)))) % (max((((-(arr_2 [i_2] [6])))), (max(var_15, (arr_2 [i_0 + 3] [i_0 + 2])))))));
                    var_24 = max((var_6 * var_10), (max((14339163348016591883 + 1742970583), (arr_3 [i_1]))));
                }
                var_25 -= ((arr_2 [i_0] [i_0]) ? ((min(((min(var_12, (arr_6 [10])))), (min((arr_2 [3] [3]), 155))))) : (min(((((arr_6 [14]) < var_6))), (549755813887 ^ 1988433282))));
                var_26 = (max((max((arr_1 [i_0]), ((min((arr_1 [i_0]), (arr_4 [i_0] [i_0] [17])))))), var_0));
                var_27 = (max(var_27, ((((1 / var_6) & (((~(arr_1 [i_0 + 2])))))))));
            }
        }
    }
    var_28 = (min(var_28, var_9));
    #pragma endscop
}
