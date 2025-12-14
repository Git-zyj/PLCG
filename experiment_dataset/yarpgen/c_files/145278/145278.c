/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_0 [i_0])));
        arr_2 [i_0 - 2] = (-7981567591990497138 + 14970910745876077804);
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_14 = (arr_4 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_15 = (max(var_15, ((((~-126) ? (arr_3 [i_3]) : (~15326399967662831730))))));
                    var_16 += (((((arr_7 [i_1] [i_1]) >= (var_3 || 3475833327833473811))) ? (arr_7 [i_1] [i_1]) : ((min(-1, (arr_4 [i_1]))))));
                }
            }
        }
        arr_9 [i_1] = (min((arr_4 [i_1]), (((arr_7 [i_1] [i_1]) ? ((var_1 + (arr_6 [i_1]))) : (arr_4 [i_1 + 1])))));
        var_17 *= var_6;
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            {
                var_18 = (arr_10 [6]);
                var_19 ^= 16;
                arr_14 [i_4] = -var_7;
            }
        }
    }
    var_20 = var_7;
    var_21 = ((-(var_11 + 852560445)));
    #pragma endscop
}
