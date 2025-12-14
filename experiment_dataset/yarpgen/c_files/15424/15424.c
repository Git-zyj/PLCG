/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (min((((var_9 & 11434485484189216214) ^ (arr_2 [i_0]))), var_7));
                var_11 = (min(var_11, (~-1632007915)));
                var_12 = 7012258589520335390;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_13 = (((arr_10 [i_2] [i_2] [i_2]) ^ var_9));
                    var_14 = ((~(((arr_12 [i_2]) ? (arr_12 [i_2]) : (arr_12 [i_2])))));
                    var_15 += var_8;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_16 = -27212;
                                arr_18 [i_5] [i_3] [i_3] |= ((((min(-2112, -120))) ? (~1552687296) : ((-27203 ? (arr_12 [i_4]) : ((((arr_11 [i_4]) | 2121)))))));
                                var_17 ^= -127;
                                var_18 = ((((var_1 ? (!var_2) : (((arr_11 [i_6]) ? (arr_9 [13]) : var_4)))) % (arr_16 [i_2] [i_4] [i_2] [i_5] [i_2])));
                            }
                        }
                    }
                    arr_19 [i_2] [i_2] [i_2] = (arr_9 [i_3]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_31 [i_7] [i_9] [i_9] [i_9] [i_10] [i_7] [i_11 + 1] = var_5;
                                arr_32 [i_7] [i_7] [i_7] [i_7] [i_9] = ((((arr_26 [i_9] [i_11 - 3]) && 2113)));
                            }
                        }
                    }
                }
                var_19 = 120;
            }
        }
    }
    #pragma endscop
}
