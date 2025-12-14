/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (~(((var_15 * 1) ? (((min(var_13, var_9)))) : (min(2621057447924888818, var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 &= min((((arr_4 [i_2 - 1]) ? (arr_0 [i_1]) : (~11042832697409589327))), 12);
                            var_20 = var_10;
                            var_21 = (((max(((var_5 - (arr_3 [i_0] [i_2]))), ((((arr_5 [i_2]) < 174)))))) ? 1 : (min(((var_13 ? 1 : 15825686625784662798)), (arr_8 [i_0] [i_1] [i_0] [7] [i_1]))));
                            arr_10 [i_0] [i_1] [i_2 - 1] [i_3] = (((arr_7 [i_2 - 1] [i_2 - 1] [i_1]) > (((1 ? (((arr_4 [i_0]) * var_9)) : ((((!(arr_9 [i_2]))))))))));
                        }
                    }
                }
                arr_11 [0] [0] |= ((((-82 ? var_2 : ((((arr_8 [8] [i_1] [i_0] [i_0] [8]) <= 15825686625784662798))))) ^ -1));
                var_22 = ((var_5 ? ((-(((arr_3 [i_1] [i_0]) + var_3)))) : ((1 ? (min((arr_1 [i_0]), var_12)) : (((min(var_13, var_9))))))));
                var_23 = ((1 & (min((arr_4 [i_0]), (arr_4 [i_1])))));
                var_24 = (max(var_24, ((max(15825686625784662808, -82)))));
            }
        }
    }
    var_25 = var_16;
    var_26 |= ((!((((!var_7) ? var_6 : 1946148555)))));
    #pragma endscop
}
