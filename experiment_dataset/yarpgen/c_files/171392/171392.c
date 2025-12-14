/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_3);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max(var_20, (((-((126 >> (((arr_0 [i_0]) + 29469)))))))));
        var_21 = var_13;
        var_22 = (max((min(var_7, (arr_0 [i_0]))), ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_23 &= 12;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_24 = (max((arr_4 [i_2 - 1] [i_2]), (!var_0)));
                        arr_13 [i_1] [i_3] [i_3] = ((((((var_6 ? (arr_3 [i_3]) : (arr_10 [16] [i_2] [i_2]))) + (arr_0 [i_3]))) | (((var_9 << (63 - 55))))));
                        var_25 = var_15;
                    }
                }
            }
        }
        var_26 = (max((((6 ? 255 : 12291672915447462924))), ((max(63, (((536608768 && (arr_8 [i_1] [i_1])))))))));

        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            arr_17 [i_1] [i_5 + 1] = (87 % 127);
            var_27 = ((((max((arr_12 [i_5] [i_5] [i_5 + 1] [i_5 - 1] [i_5]), -12))) ? var_4 : (((max(-53, var_0))))));
        }
        arr_18 [i_1] &= (((((~(arr_9 [i_1] [i_1])))) ? ((-(arr_9 [i_1] [i_1]))) : (max(6064325503134725809, (arr_2 [i_1] [i_1])))));
    }
    #pragma endscop
}
