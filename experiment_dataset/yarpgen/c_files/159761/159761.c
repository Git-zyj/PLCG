/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((!((((arr_4 [i_0 - 2]) / (arr_4 [i_0 - 2]))))));
                var_21 = (max(var_21, (((!((((22 - 1075240924) & 1))))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_22 = ((((((((-(arr_8 [i_0] [22])))) ? ((var_13 ? 2062722603 : -1879011125)) : ((max(var_19, var_6)))))) ? (max(var_18, (arr_3 [1]))) : ((((var_14 && (arr_3 [i_0 - 1])))))));
                    arr_9 [13] [12] [2] [i_2] |= (~var_13);
                    var_23 |= ((max((max((arr_4 [i_0]), var_8)), -1879011125)) < (min((((1879011114 ? var_17 : (arr_3 [i_2])))), (min(var_8, (arr_6 [i_0]))))));
                    arr_10 [i_2] [i_1] [22] [i_0] = 63;
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_13 [i_0] [i_3] = ((min((arr_7 [i_0 - 2] [i_0 - 2] [i_0 + 2] [10]), (arr_7 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_1]))));
                    var_24 = (~1921516350);
                    arr_14 [i_3] [18] [23] = ((((((arr_0 [i_0]) ? -var_1 : 3943))) ? (((((var_0 ? var_4 : -1879011138))))) : (((-1845976489 ? -1879011125 : 0)))));
                    var_25 = (max(var_25, ((max((arr_4 [i_0 - 1]), ((min((arr_4 [i_0 + 1]), (arr_4 [i_0 + 1])))))))));
                }
            }
        }
    }
    var_26 |= 3492588565;
    #pragma endscop
}
