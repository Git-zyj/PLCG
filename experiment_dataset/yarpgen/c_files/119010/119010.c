/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -6306266528501810078;
    var_21 = 14916;
    var_22 = (!var_15);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((!(arr_5 [i_2])));
                    var_23 = (min(var_23, ((((((((var_7 ? (-127 - 1) : (arr_3 [i_0]))) + ((((arr_0 [i_2] [i_2]) + var_15)))))) ? ((var_8 ? (((arr_1 [i_2]) ? -64 : 1)) : (((arr_2 [i_0]) ? (arr_2 [i_1]) : var_2)))) : ((((min((arr_5 [i_0]), 2677191926))) ? 60398 : (arr_6 [i_2] [i_1]))))))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (max((arr_7 [i_0] [i_1] [i_0]), (max((!1617775370), var_3))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_24 = (min(var_24, ((min((min((((arr_1 [8]) ? var_6 : var_1)), 5139)), 2677191925)))));
                    arr_14 [i_0] [i_0] [i_0] = ((!((min((arr_10 [i_0]), (arr_10 [i_0]))))));
                }
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    arr_17 [i_0] [i_0] [i_0] = (arr_0 [i_0] [i_0 - 1]);

                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        var_25 = (min(var_25, (((((-5595 ? (arr_15 [i_0] [i_0 + 2] [i_0] [i_5]) : 0)) + ((((arr_15 [i_0] [i_0 + 2] [i_4] [i_0]) == 2677191925))))))));
                        arr_21 [i_0] [i_0] [i_4 + 3] [i_5 - 2] [i_4 + 3] [i_4 + 3] = (((((arr_11 [i_5 + 3] [i_1] [i_4 - 3]) || -41)) ? (!60398) : (((!(arr_11 [i_5 - 2] [i_1] [i_4 + 3]))))));
                    }
                }
                arr_22 [i_0 + 2] [i_0] [i_0] = ((93 + (max(var_11, (arr_2 [i_0 + 1])))));
            }
        }
    }
    #pragma endscop
}
