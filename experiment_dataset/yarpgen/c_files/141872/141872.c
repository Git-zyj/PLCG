/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_11 = 6;
        arr_3 [i_0 + 3] [i_0] = ((((arr_1 [i_0 + 2] [i_0]) ? 2775429137439580076 : (arr_1 [i_0 + 1] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] = (((((arr_5 [i_0] [5]) ? -1562178864 : var_6)) >= ((6701583602597897756 ? (-2147483647 - 1) : 43))));
                        var_12 = (max(var_12, ((((arr_0 [i_0] [i_3 - 1]) && ((max(((-12622 ? 1562178863 : (-2147483647 - 1))), ((1739126586 | (arr_9 [18])))))))))));
                    }
                }
            }
        }
    }
    var_13 *= ((max((min(-12605, var_5)), var_8)) | ((min((1562178853 / var_4), (((-9223372036854775807 - 1) ^ var_2))))));
    #pragma endscop
}
