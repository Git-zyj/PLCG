/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 32759));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = ((-(((((((arr_7 [i_0] [1] [i_2]) ? (arr_3 [i_0] [i_1]) : -343651584))) > (max(2210650335293296207, (arr_6 [i_2] [i_1] [i_0] [i_0]))))))));
                    var_12 = (min(var_12, (((var_8 ^ (max((arr_6 [i_0] [i_1] [i_1] [i_2]), (arr_6 [i_0] [i_1] [i_2] [i_2]))))))));
                    var_13 = (arr_3 [i_1] [i_2]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_3] = var_3;
                        var_14 = (max(var_14, 1));
                        var_15 = ((164 ? (-9223372036854775807 - 1) : (-9223372036854775807 - 1)));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_15 [i_4] [i_2] [i_0] = (max(120, 0));
                        var_16 = var_3;
                    }
                }
            }
        }
    }
    var_17 = (max((var_6 ^ var_8), (!-1682667606)));
    var_18 = -2147483634;
    #pragma endscop
}
