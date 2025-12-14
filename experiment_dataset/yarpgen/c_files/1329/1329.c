/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (6436 ? 3891185709 : (~34576));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 += (arr_6 [i_0]);
                    var_21 = ((!((min((arr_1 [i_2] [i_1]), (arr_1 [i_0] [i_0]))))));
                    arr_8 [0] [i_1] [i_0] = (((169183040 || 29319) ? (arr_4 [i_2] [i_1] [i_0]) : ((~(arr_7 [5] [i_0] [i_0] [i_2])))));
                    arr_9 [i_0] [i_1] [7] = (arr_0 [7]);
                }
            }
        }
        arr_10 [i_0] = ((((29321 ? 18446744073709551615 : 22368))));
        var_22 = (min(((!(!var_17))), ((!((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? var_15 : -51)))))));
        var_23 += (((3021106650 || (arr_3 [i_0] [i_0] [i_0]))));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_24 *= ((-(arr_11 [i_3])));
        var_25 = (((~6784696501913913429) >= ((min(var_5, 1)))));
        var_26 = (max(var_26, var_12));
        arr_14 [i_3 + 2] = -1535498398;
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_27 = (min((~6784696501913913419), var_10));
        var_28 = (((((-(((arr_16 [i_4] [i_4]) / -1829660031))))) ? (((var_2 ? 241 : (arr_17 [i_4] [i_4])))) : 4338));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_21 [i_5] = ((3437559594 ? ((11804059081184452223 ? -1 : 8306426707734341353)) : (857407687 != 8796093022176)));
        var_29 ^= ((!((min((min((arr_16 [1] [i_5]), (arr_13 [i_5] [1]))), (var_5 || 32767))))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_24 [i_6] = ((-(!2584544785)));
        var_30 = var_16;
    }
    #pragma endscop
}
