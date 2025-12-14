/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 + 1] = var_12;
        arr_3 [i_0] = var_1;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] = ((((min((-47 % 1), 1))) ? ((-45808 ? (min(var_5, 127)) : (var_11 ^ 16))) : var_0));
        var_15 = ((27308 ? 4732742758728116428 : 1));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_15 [i_1] = ((-(arr_10 [i_1] [i_2] [i_1] [i_2])));
                        var_16 = (min((~3045289087787713181), (arr_0 [i_4] [i_3])));
                    }
                }
            }
        }

        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            var_17 = ((((127 % -9223372036854775802) << (arr_13 [i_1]))));
            arr_18 [i_1] [i_5] [i_5] = ((((~((9339 ? -5 : 0)))) * 130));
            var_18 = (min(var_18, ((((min(((((arr_10 [i_1] [1] [i_1 + 3] [i_1]) ? (arr_11 [i_5] [i_5] [i_5 + 1] [8]) : var_2))), 140)) | (((~(arr_13 [i_5])))))))));
        }
        var_19 &= (arr_0 [i_1] [14]);
    }
    var_20 = var_13;
    #pragma endscop
}
