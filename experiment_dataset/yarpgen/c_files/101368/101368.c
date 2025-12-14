/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = ((~(max((arr_3 [i_0] [i_1]), 13873))));

                for (int i_2 = 4; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    var_13 = (min(var_13, (arr_6 [i_2] [i_2] [i_2] [20])));
                    var_14 = max(((((!var_0) ? (arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_0]) : var_10))), (arr_2 [i_1] [i_1]));
                    var_15 = ((-9223372036854775807 - 1) * 14011389523731560681);
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_16 = (~var_3);
                    var_17 = (!(arr_10 [i_3 - 3]));
                    var_18 = (arr_6 [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_0]);
                }
                for (int i_4 = 4; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_19 = ((~(min((arr_5 [i_4 - 1] [i_1] [i_4] [i_0]), (arr_5 [i_4 - 4] [i_1] [i_4] [i_1])))));
                    var_20 = (min(var_20, ((((((((((!(arr_0 [10]))))) | ((17774606996120286848 ? 9223372036854775807 : 142))))) ? ((var_10 ? (arr_5 [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4 + 2]) : ((554198965 ? (-9223372036854775807 - 1) : 2013542889)))) : (((min((arr_8 [3] [i_4 - 2] [i_4 - 1]), (arr_6 [i_0] [i_4 - 2] [i_4 - 4] [14]))))))))));
                    var_21 = ((-((-10658053539186531318 * (arr_12 [i_0] [i_1] [i_0])))));
                }
                var_22 = (arr_8 [i_0] [i_0] [i_1]);
            }
        }
    }
    var_23 -= min(58, 4742807731400736438);
    var_24 = ((((min(((min(var_2, var_4))), (max(var_7, 0))))) ? 14011389523731560681 : ((((((var_1 ? var_4 : var_1))) ? -2013542889 : var_0)))));
    var_25 = -15;
    #pragma endscop
}
