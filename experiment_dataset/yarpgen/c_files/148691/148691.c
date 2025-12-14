/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(241, var_9));
    var_14 = ((-(((!(~241))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = -var_0;
                    var_16 = (arr_0 [i_1]);

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_1] [4] [i_3] [6] &= -18891;
                        var_17 = (min(((max((!-9922), (((arr_6 [i_2] [i_1]) ? var_0 : 27))))), ((((max(var_6, 14))) ? var_11 : (!4193881142)))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_12 [i_4] [i_1] [1] [i_4] = (max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]), (min(((var_4 ? 241 : (arr_10 [i_1] [i_1] [i_1] [i_4] [i_4] [i_1]))), (arr_7 [i_1 + 1] [i_1] [i_1] [i_1] [i_2])))));
                        arr_13 [i_4] [i_1 + 4] [i_4] [i_1] [i_1] [i_1] = ((((!(arr_7 [0] [10] [i_2] [i_4] [i_1 + 1]))) ? (((arr_2 [i_1 + 3]) ? 101086158 : 247)) : (((arr_11 [i_4] [i_1 + 4]) ? (arr_11 [i_4] [i_1 + 1]) : var_7))));
                        var_18 = (min(var_18, ((max((max(((((arr_8 [i_0] [i_0] [i_0] [2]) > var_8))), (max((arr_6 [4] [i_0]), (arr_2 [i_0]))))), (2905313890 | 101086147))))));
                        var_19 = ((-((min(32559, 41085)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
