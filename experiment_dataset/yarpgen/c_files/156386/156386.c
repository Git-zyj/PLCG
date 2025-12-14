/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(963050737, -899749325));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [7] = ((+((((((arr_6 [i_0] [11] [i_0] [i_0]) % 11458467536061344875)) == (arr_5 [i_0] [9] [9] [9]))))));
                    arr_10 [i_0] [i_1] [11] [i_0] = ((((!(arr_1 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_3] [i_0] = ((((((~45176) ? ((-106 ^ (arr_5 [1] [i_2] [1] [14]))) : 337923396))) & ((~(arr_0 [i_4 - 2])))));
                                var_12 ^= (arr_3 [0] [i_0] [i_0]);
                                var_13 = (arr_6 [3] [1] [i_0] [i_0]);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [15] [i_0] = (((2 ? (arr_14 [i_3] [i_3] [i_1] [7]) : (arr_6 [10] [10] [i_2] [14]))));
                            }
                        }
                    }
                    arr_19 [10] [10] [i_0] = (min(-2048, (~-1385563056)));
                }
            }
        }
    }
    #pragma endscop
}
