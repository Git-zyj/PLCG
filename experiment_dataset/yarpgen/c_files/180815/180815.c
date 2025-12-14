/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((-28442 ? -15766 : -5498720137394570696));
        arr_3 [2] = (((-((var_8 ? var_0 : var_1)))));
        var_10 = ((((3933199224756918023 ? var_6 : ((0 ? var_5 : var_2)))) >= ((((((arr_1 [i_0]) ? var_8 : 26936)))))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_11 |= (((arr_7 [i_1 + 2]) ? (arr_6 [i_1]) : (1855563000 && 3225125759)));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_12 ^= (((((-(arr_6 [i_1 - 1])))) && (13677219208122939112 / 906263813)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_2] [6] [i_4] [i_5] [2] |= (arr_9 [i_2] [i_1]);
                                var_13 = (7138873066260922129 ? 3859581352 : 7742846799012292187);
                                var_14 = -5498720137394570696;
                            }
                        }
                    }
                    arr_17 [i_1 + 1] [i_1 + 3] [i_1] = (((((var_1 - (arr_5 [i_1 + 3])) + (arr_6 [i_1])))));
                }
            }
        }
    }
    var_15 |= var_1;
    var_16 = (((((var_9 ? ((var_2 ? var_7 : var_6)) : var_2))) ? (~-4294967295) : var_5));
    #pragma endscop
}
