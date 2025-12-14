/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        var_20 = (-((128 ^ (arr_4 [i_1] [i_2] [i_3]))));
                        var_21 = (((~((~(arr_4 [i_0] [i_2] [i_3]))))));
                        var_22 = (((arr_0 [i_0] [i_3]) ? (((((((arr_0 [i_0] [i_0]) - (arr_5 [i_0] [i_2] [i_3])))) ? 255 : (((125 <= (arr_10 [0] [7] [i_3 + 1] [i_3] [i_2]))))))) : (((~63) ? var_7 : var_9))));
                    }
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        var_23 |= ((-(arr_3 [3] [i_1 + 1] [i_0])));
                        var_24 = (min((min(-var_1, 115)), ((-(!var_11)))));
                    }
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        var_25 = ((var_10 ? (((~var_6) ? (!48131) : (((arr_4 [i_0] [i_0] [i_0]) ? 158 : 63)))) : (((((39650 ? 8 : var_6))) ? (((!(arr_1 [i_1])))) : ((min(var_8, (arr_3 [i_5] [i_1] [i_0]))))))));
                        arr_16 [6] [i_1] [8] &= ((-((min((arr_13 [i_5 + 2] [i_5 - 1] [i_5] [i_5]), (arr_13 [i_5 - 1] [6] [3] [3]))))));
                    }
                    var_26 -= (arr_11 [i_0] [i_0] [4] [i_0] [i_0] [7]);
                }
            }
        }
    }
    var_27 = (max(var_27, var_16));
    #pragma endscop
}
