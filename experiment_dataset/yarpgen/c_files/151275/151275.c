/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_11 << (((2362482674 != (28185 == 5809116942830022595))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_15 = var_1;
        arr_2 [i_0] = (min(var_5, ((247 ? ((-(arr_0 [i_0]))) : (((~(arr_1 [12]))))))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_16 = (((~((152 << (6776601961447728353 - 6776601961447728345))))));
        arr_5 [i_1] = (arr_1 [1]);
        arr_6 [i_1] = ((((min(223, 102292818893160940))) ? (((arr_0 [i_1 + 3]) ? (arr_0 [i_1 + 2]) : 188)) : (((((arr_0 [i_1 - 2]) + 9223372036854775807)) >> (-2013638207 + 2013638251)))));
        arr_7 [i_1] = (arr_4 [i_1] [i_1]);
        arr_8 [i_1] = (1329755101 < -18);
    }
    var_17 = (min((min((!var_0), var_10)), var_10));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                {
                    arr_15 [1] [i_2] [i_3] [i_3] = 35958428274786304;
                    arr_16 [i_2] [i_2] [i_3 - 1] [i_2] = 58;
                }
            }
        }
    }
    #pragma endscop
}
