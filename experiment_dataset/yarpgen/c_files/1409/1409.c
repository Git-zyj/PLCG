/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((((arr_3 [i_0 + 1] [6] [6]) ? (arr_5 [i_0] [i_0 - 3] [i_1] [i_2]) : var_10)))))));
                    arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_1] = -var_7;
                    arr_7 [i_0] [i_0] = (+((((((arr_2 [i_0]) + 60)) <= (arr_5 [i_0] [i_0] [i_0] [i_0 - 2])))));
                    var_16 = (min(var_16, ((max((arr_1 [i_0]), (min((arr_0 [i_1 - 1]), (((arr_4 [0] [i_1 - 1] [i_0]) / var_9)))))))));
                    arr_8 [i_0] [i_0 - 2] [i_0 + 1] [i_0] = ((var_6 ? var_5 : (arr_2 [i_0])));
                }
            }
        }
    }
    var_17 |= ((~(((((var_1 ? var_3 : 2859420394647271942))) ? var_4 : ((min(-108, var_11)))))));
    var_18 = var_11;
    #pragma endscop
}
