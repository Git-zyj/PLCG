/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (((-32747 ? (arr_4 [i_1]) : ((min(32, (arr_5 [i_1])))))));
                var_16 = (min(var_16, (((((min((arr_2 [i_0] [16] [i_0 - 1]), (arr_2 [i_0] [10] [6])))) % ((~(arr_2 [i_0] [0] [i_1]))))))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 = (min(var_17, (((((min((arr_10 [0] [i_0 + 2] [i_0 + 2] [i_2 - 1]), ((min(123, 41)))))) | (arr_5 [0]))))));
                        arr_12 [i_1] [i_1] [i_1] [17] = (max(-9988, ((-15473 ? ((48 ? -21591 : var_14)) : 77))));
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_3] = ((~((224 ? var_10 : 24))));
                    }
                    var_18 |= (((min(((max((arr_2 [i_0] [2] [i_2]), var_13))), ((121 ? 255 : 234)))) != ((-(arr_0 [i_1])))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_17 [i_4] [i_1] [i_1] [i_0] = (min(((-((max(98, (arr_5 [i_1])))))), (((((2 ? 77 : 28)) != ((min(13, var_3))))))));
                    var_19 = (min(var_19, (((-1080 ? ((min((arr_11 [16] [i_1] [i_1]), var_13))) : (((arr_11 [2] [i_1] [i_1]) ? (arr_11 [16] [8] [8]) : (arr_11 [10] [i_4] [12]))))))));
                }
                var_20 *= (((((arr_16 [i_0 + 2] [i_0 + 2]) != (arr_16 [i_0 + 1] [i_0 + 1]))) ? (min(((168 ? var_13 : var_9)), ((max(174, 139))))) : (((arr_2 [i_0 - 1] [12] [i_0 + 1]) ? (~var_11) : (arr_3 [14])))));
                var_21 = (max(var_21, (((32 ? 27 : ((14255 ? (arr_9 [4] [i_0]) : var_10)))))));
            }
        }
    }
    var_22 = (min(-9980, var_4));
    var_23 += ((var_3 | (248 | var_14)));
    var_24 = 167;
    var_25 = (min(var_25, var_3));
    #pragma endscop
}
