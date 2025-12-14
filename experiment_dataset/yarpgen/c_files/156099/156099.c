/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_12 ? var_9 : ((min((var_10 > var_12), var_8)))));
    var_15 = ((var_9 ? var_6 : (max(var_7, var_7))));
    var_16 = ((((min(var_6, var_7)) << (var_3 & 1))) - var_13);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 -= 98;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = ((((var_8 && (var_9 << var_6))) ? 65535 : (min((arr_6 [i_2] [i_1 + 1] [i_0]), var_2))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 ^= (((arr_7 [i_0] [i_1 + 1] [i_2] [i_2] [i_3]) ^ (min((arr_2 [i_1 + 1] [i_1 - 1]), 127))));
                        arr_9 [i_0] [i_1 + 1] [i_2] [i_0] [i_3] = ((((((arr_5 [i_0] [i_2] [i_3] [i_3]) ? (arr_7 [i_1 + 1] [i_1 + 1] [i_2] [i_0] [i_3]) : (min(var_3, -1))))) ? ((min(((-(arr_0 [i_0] [i_1 - 1]))), (((arr_0 [i_0] [i_0]) + (arr_1 [i_0])))))) : (((((14 - (arr_5 [i_2] [i_1 - 1] [i_3] [i_3])))) ? 1 : var_13))));
                        arr_10 [i_0] [i_0] = (((arr_1 [i_0]) >= (min(((215 & (arr_7 [i_0] [i_1 + 1] [i_1 - 1] [i_2] [i_3]))), (max((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_0])))))));
                        var_20 = ((((min((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_3])))) || (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_0] [i_2] [i_1 + 1] [i_0] = ((!(~var_9)));
                        var_21 = (max(var_1, 0));
                    }
                }
            }
        }
    }
    #pragma endscop
}
