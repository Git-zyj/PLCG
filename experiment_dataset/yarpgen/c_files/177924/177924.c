/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((~((max((arr_1 [i_0]), (arr_1 [i_0]))))));
                var_11 = (min(var_11, (((((!53345) & ((~(arr_1 [10]))))) * (-3022770936109010225 <= -435073539917248920)))));
                arr_7 [i_0] = ((~(((!((((arr_4 [i_0] [i_0] [i_1]) ? (arr_5 [i_0]) : var_9))))))));
                var_12 ^= (((min(4096, 60371))) | (19 | 4096));
            }
        }
    }
    var_13 = (max(-626537589, 626537594));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_2] [i_4] = (arr_4 [i_2] [i_3] [i_4 + 3]);
                    var_14 ^= ((-(var_2 <= var_8)));
                    var_15 = ((var_10 ? (((((~(arr_5 [i_2]))) == (max(var_3, (arr_1 [i_2])))))) : (~var_2)));
                    var_16 = (~0);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_17 = min(81, 274877898752);
                                arr_23 [i_2] [4] [i_2] = (((((198133975 ? (arr_14 [i_2]) : 2091560469))) ? 9777979355021253534 : (arr_15 [i_2] [i_2])));
                                var_18 &= (12 ^ 2091560452);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
