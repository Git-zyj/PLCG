/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = 18446744073709551597;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 = (((max(13976180157015027852, (arr_0 [i_1 + 1]))) >= (((var_2 || 4470563916694523763) ? 13976180157015027852 : (arr_5 [14] [i_1 + 1])))));
                    arr_7 [23] [i_1] [i_1] [23] = (min((((arr_4 [i_0 - 4]) ? (arr_0 [i_0 + 3]) : var_15)), ((((arr_4 [i_0 + 3]) > (arr_0 [i_0 - 1]))))));
                    var_22 *= ((((((arr_5 [i_1] [i_1 - 1]) || var_7))) < (((arr_5 [i_1] [i_1 - 1]) ? (arr_5 [i_1] [i_1 - 1]) : var_15))));
                    arr_8 [1] [i_1] [i_1] = ((((1660804167 ? (arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1]))) == (arr_4 [17])));
                }
            }
        }
    }
    #pragma endscop
}
