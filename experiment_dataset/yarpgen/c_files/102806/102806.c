/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_20 = ((((min((arr_4 [i_0 + 2]), ((var_17 ? var_6 : (arr_5 [i_0] [i_3])))))) ? (arr_12 [i_0] [i_2]) : (((min((arr_1 [i_3 + 2]), (arr_6 [i_3 + 2] [i_0 + 2])))))));
                        arr_13 [i_3] [i_1] [i_2] [12] [i_2] = ((((max(var_11, (arr_2 [i_0])))) ? ((~(arr_2 [i_0 + 1]))) : var_12));
                    }

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_18 [i_2] [13] = ((((-(max(3791264175, var_3)))) / (((min((arr_16 [i_4 + 1] [i_2] [i_2] [i_4]), (arr_16 [i_4 + 1] [i_2] [i_2] [i_4])))))));
                        var_21 = 0;
                    }
                }
            }
        }
    }
    var_22 = ((((min(-1, -1))) ? (((max(var_0, var_17)))) : (((var_2 < ((1 >> (-126 + 156))))))));
    #pragma endscop
}
