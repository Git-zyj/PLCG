/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        var_15 = min(18446744073709551611, 23);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((min(18446744073709551593, (((((((arr_1 [2]) ? 4 : 4))) ? var_12 : (~var_3)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
                                arr_13 [i_0] [i_0] [i_1] [18] [i_2] [i_0] [i_4] = ((min(((32767 ? 23 : var_4)), (arr_0 [i_0]))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = var_7;
                            }
                        }
                    }
                    arr_15 [1] [i_0] [i_2] = (((((arr_8 [2] [i_0] [14] [10] [i_2] [i_2]) ? ((755615112023489566 ? 4294967295 : 18446744073709551611)) : (min(13, 206))))) ? 5632303110452325368 : (-24771 > 951681482));
                    arr_16 [i_0] [i_1] [i_2] = (((((((((arr_4 [i_0] [15]) ? var_4 : var_11))) ? var_4 : (max((arr_0 [i_0]), (arr_8 [22] [i_2] [i_1] [i_1] [i_1] [6])))))) ? (((((arr_5 [i_0 + 1] [i_2 - 1]) == ((min(var_8, 4294967295))))))) : (arr_0 [i_0])));
                }
            }
        }
        var_18 = var_2;
        var_19 |= (min(((var_6 ? ((0 ? -5632303110452325368 : (arr_0 [1]))) : (((arr_0 [1]) + var_9)))), 109));
    }
    var_20 = (((var_5 != (max(var_2, var_7)))));
    #pragma endscop
}
