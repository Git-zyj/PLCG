/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -195829040));
    var_18 = 8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = 65527;

                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        var_19 = 8;
                        arr_10 [i_1] = 158;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_20 &= arr_13 [7] [i_0] [i_1] [i_2] [i_0];
                        var_21 = (((arr_5 [i_0] [i_1] [i_2] [i_4]) ? (~-1) : 298503337));
                        var_22 = (arr_3 [i_0] [i_0]);
                        var_23 = ((183 ? ((65527 ? 4294967295 : 0)) : 1469135771));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_24 = ((-1 != (arr_2 [i_1] [i_1] [i_1])));
                                arr_21 [i_5] [i_5] |= ((23765 ? 95 : (--30812)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
