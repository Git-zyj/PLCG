/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((((!var_16) + ((min(var_5, var_11)))))), var_8));
    var_18 = ((((!2484240697) ? var_1 : -1810726599)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = ((((!(((~(arr_0 [i_0] [i_0])))))) ? (arr_1 [i_1]) : ((((!(arr_1 [i_0])))))));
                    arr_7 [i_0] [4] [1] [i_0] = (!9774);
                    var_19 = 1810726599;
                    var_20 = arr_3 [i_0] [i_0];
                    var_21 ^= var_4;
                }
            }
        }
    }
    var_22 = (min((((-16 < (((min(var_16, var_10))))))), ((-17530 - (var_14 - var_9)))));
    #pragma endscop
}
