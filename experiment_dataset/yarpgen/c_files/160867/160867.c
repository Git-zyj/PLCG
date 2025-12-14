/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-9223372036854775807 - 1);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? 0 : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = 124;
            var_12 *= (max((min(-26080, -11850)), (arr_5 [i_1])));
            var_13 = -4698;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_14 = (((8721 ^ (arr_7 [i_4 - 1] [i_4 - 1] [i_2 - 1] [i_2 - 1]))));
                            arr_15 [i_4] [i_3] [i_2] [i_1] [i_4] = var_1;
                            var_15 = (min(-1359020273, (((var_10 >> ((((74 ? var_2 : var_7)) - 15)))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_16 = (((((max(0, 0)) * (((((arr_13 [i_5] [i_5] [i_5] [i_5 + 1] [i_5]) < -32761)))))) < ((min((((arr_12 [i_5] [i_0]) ? var_4 : var_8)), (arr_10 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 + 1]))))));
            var_17 *= (max((-2147483647 - 1), 1));
            arr_20 [i_0] = ((max(var_3, (arr_2 [i_0] [i_5 + 1]))));
        }
    }
    var_18 = var_1;
    var_19 = var_8;
    var_20 = (max(var_20, (((!(((((var_6 ? 8396242418896772317 : var_3)) / (var_1 - var_4)))))))));
    #pragma endscop
}
