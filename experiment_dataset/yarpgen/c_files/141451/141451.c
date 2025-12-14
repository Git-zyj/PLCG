/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 = ((~(((arr_4 [i_0] [3] [i_1 + 1] [i_3]) % (arr_2 [i_1] [i_2] [i_2])))));
                            arr_10 [i_0] [i_1] [1] [i_0] [9] [i_2] = ((4539628424389459968 ? 4539628424389459968 : 4539628424389459978));
                            var_22 -= var_10;
                            var_23 = var_5;
                            arr_11 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = (((((min(4539628424389459990, var_16)) ? (arr_7 [i_2] [i_1] [i_2]) : (597 + var_10)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            arr_19 [i_5 + 1] [i_4 - 1] [8] [i_1 + 1] [11] = (((((~((13907115649320091637 >> (-211531850 + 211531893)))))) ? ((((arr_7 [i_0] [8] [i_5 + 1]) - (arr_0 [i_1])))) : ((((1 ? 1 : -31650)) + 223))));
                            var_24 |= 7077;
                            arr_20 [i_5] [i_4] [i_1 - 1] [i_0] = (((((((max((arr_16 [i_0] [i_0] [i_4] [i_0]), (arr_8 [i_5] [i_1] [i_4] [i_1] [i_0])))) / (arr_6 [i_1] [i_0] [i_4] [i_0])))) || (arr_17 [i_0] [i_1 - 2] [i_4])));
                            arr_21 [i_4] = 122;
                        }
                    }
                }
                arr_22 [i_0] [i_1 - 1] [i_0] = var_16;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_25 += ((-((211531849 << (13907115649320091628 - 13907115649320091626)))));
                    var_26 = (((min(-211531831, 95)) / ((max(597, var_16)))));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_27 = (min((arr_25 [i_9 + 1]), (((!(arr_32 [i_6] [i_6 - 1] [i_6 + 2] [i_9 - 2]))))));
                                arr_35 [i_6] [i_7] [i_6] [i_6] [i_10] [23] = (11018083012815763242 / 1);
                            }
                        }
                    }
                    arr_36 [i_6] [i_7] [i_6] = (min(-211531842, -58458));
                }
            }
        }
    }
    #pragma endscop
}
