/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((2147221504 ? (2048 - 352236580) : var_0)))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_18 = -2048;
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0 - 2] [i_0 - 3]) ? -2050 : 2050))) ? (((arr_0 [i_0 - 1] [i_0 + 2]) ? (arr_0 [i_0 - 3] [i_0 + 2]) : 2048)) : ((min((-127 - 1), (arr_0 [i_0 + 1] [i_0 + 1]))))));
        var_19 = ((-2041 ? ((~(min(2050, 127)))) : ((((14 + (arr_1 [4]))) % (arr_1 [i_0 - 3])))));
        var_20 = ((!(arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (((76 % 249) ? ((9223372036854775807 ? 33 : (arr_5 [i_1] [i_1]))) : (arr_4 [i_1] [i_1])));
        var_22 = (!((!(arr_5 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_23 = ((-(min((max(31, 2748567400)), ((2450686685246195876 ? 1 : 3940649673949184))))));
                        var_24 = ((!((min(1, -23455)))));
                        var_25 = 14;
                    }
                }
            }
        }
        arr_16 [i_2] = (min(((-(arr_12 [i_2]))), ((max((arr_12 [i_2]), 7615)))));
        arr_17 [i_2] = -76;
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_26 += (arr_18 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_27 += (max(0, 0));
                    var_28 = var_0;
                    arr_25 [i_7 - 2] = (((((0 ? -34 : (!var_8)))) ? ((max((max(var_16, 1)), var_13))) : ((max((arr_18 [i_7 - 1]), (arr_23 [i_7] [i_7 - 1] [i_7 + 1]))))));
                    arr_26 [i_6] [i_7 - 1] [i_8] [8] = (-((((max(0, 4294967281))) ? ((-109 ? var_6 : var_10)) : 2051)));
                }
            }
        }
    }
    var_29 = (max(var_9, ((((max(var_0, -9223372036854775807)) < (!48))))));
    #pragma endscop
}
