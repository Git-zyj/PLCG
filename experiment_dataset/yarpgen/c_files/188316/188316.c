/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((((((arr_6 [i_0] [i_0] [i_2 - 3]) | var_2))) ? ((-(arr_5 [i_0] [i_0] [i_1] [i_1]))) : (((arr_5 [i_0] [i_0] [i_2 - 2] [i_1]) / (arr_6 [i_0] [i_0] [i_2 - 2])))));
                    var_19 *= ((var_15 ? ((var_4 | (arr_5 [i_0] [i_1] [i_2 - 2] [6]))) : ((max(((-(arr_3 [2]))), (((arr_0 [i_1] [i_2 - 2]) ? var_4 : (arr_6 [i_2 + 1] [i_0] [i_0]))))))));
                }
            }
        }
        var_20 = (((((max(2086661652, 16190951664340432119))) ? -559218388 : -13140060625585098734)) << ((((arr_5 [i_0] [i_0] [i_0] [8]) < (arr_5 [i_0] [i_0] [i_0] [6])))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_21 += max(((-((6512442867543538492 ? 9740314837681286092 : (arr_9 [i_3]))))), (((((6344270712535343178 ? 8896081477971348811 : var_3)) >> (((((arr_4 [i_3] [i_3] [i_3]) ? (arr_9 [i_3]) : 3270330011459063318)) - 3756261912))))));
        var_22 = (((arr_4 [i_3] [i_3] [i_3]) ? ((((3233833819 != (2559187841162768505 & var_2))))) : var_5));
    }
    var_23 = (-(max(((var_1 ? var_9 : 595368165)), -13946856217392779736)));
    #pragma endscop
}
