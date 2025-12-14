/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] = var_14;
                    arr_9 [i_0] = ((163 ? (arr_1 [i_0]) : ((73 ? var_3 : (arr_7 [i_0] [0] [i_0])))));
                    var_20 = (arr_7 [i_0] [i_1] [i_1 + 3]);
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_14 [i_0] [i_1 + 4] [i_0] = var_15;
                    var_21 = ((3392448213 ? 2232783305 : 66));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_22 ^= (((-41 && 189) ? (arr_10 [i_1 + 1]) : (((((arr_13 [i_1 - 2]) < (arr_12 [i_0] [i_1] [i_1 + 4])))))));
                                arr_21 [i_0] [i_1] [i_0] [i_4] [i_4] [i_4] [i_0] = ((189 ? 208 : (~173)));
                            }
                        }
                    }
                }
                arr_22 [22] [i_0] [i_1] &= 128;
                arr_23 [i_0] [i_0] = ((((((arr_11 [i_1] [i_1 + 4] [11] [i_1 - 1]) << (127 - 119)))) ? (~var_5) : ((var_1 ? (min((arr_18 [i_0] [i_0] [i_0] [4] [i_0]), 47)) : 597161924))));
            }
        }
    }
    var_23 = ((((min(((min(2436, 77))), ((6570373096027227323 >> (var_15 + 11276)))))) ? (min(var_12, 63)) : (((86 ? -1651215491 : -47)))));
    #pragma endscop
}
