/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (~var_15);

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((var_12 / (var_14 & 4559503595426973842)));
        var_21 += (((max((((1 ? (arr_0 [i_0 - 2] [i_0]) : (arr_2 [i_0])))), -2271383189453588403)) / (arr_1 [i_0 - 1] [i_0 - 2])));
        var_22 -= ((var_10 ? -var_17 : (arr_0 [4] [4])));
        var_23 = (((min((arr_0 [i_0 - 2] [i_0 + 1]), (arr_0 [i_0 + 2] [i_0 + 1]))) ? var_12 : (((arr_2 [i_0 + 2]) * (arr_1 [i_0] [i_0 - 1])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    var_24 += ((+((min((arr_6 [i_3 - 1]), (arr_10 [i_1] [i_2] [i_2] [i_3 - 1]))))));
                    arr_12 [i_1] [i_1] [i_1] = (min(((~(arr_9 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3]))), var_5));
                    var_25 = (max(((((7 ? 18047751152223118069 : 15)) + -var_6)), (arr_5 [i_3])));
                    arr_13 [i_1] = var_18;
                    var_26 = (1812719623 < 2598);
                }
            }
        }
    }
    #pragma endscop
}
