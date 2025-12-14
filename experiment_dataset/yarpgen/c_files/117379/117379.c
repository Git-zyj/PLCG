/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3] [i_1] &= 202;
                                var_10 = (~15729);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_11 = (min(-9326365684697869976, ((16831467835057973809 ? 1818891891 : 8))));
                            var_12 = ((3061216130579248433 ? (!-3061216130579248435) : 9326365684697869983));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    arr_27 [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 2] = 1818891883;
                    var_13 ^= (((-221704742 ? -2495706493208812785 : 3272298416)));
                    var_14 -= ((((((min(var_0, 3876889142))) || ((90 || (arr_20 [i_7]))))) ? 154874999 : (((max(10183, (arr_18 [i_9])))))));
                }
            }
        }
    }
    #pragma endscop
}
