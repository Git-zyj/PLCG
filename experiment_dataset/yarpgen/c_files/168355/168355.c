/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_13 = ((~(min((!3869078876094432735), 14577665197615118880))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_14 *= ((12809061912830663270 > ((min((arr_5 [i_3] [i_2 + 1] [i_2 + 1]), (max(0, var_4)))))));
                            var_15 |= var_7;
                            var_16 = (min(((var_2 ? ((0 ? 8108618624464253971 : var_1)) : -5481824005552537208)), (((!((max(1, 72057594037927936))))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    {
                        var_17 = ((-((~((min((arr_15 [i_0] [6] [i_0] [6]), 0)))))));
                        var_18 = (min(var_18, (min(5637682160878888345, 255284590))));
                        var_19 = ((((max(82, var_9))) ? 1 : (max(8413446302663318240, 1))));
                    }
                }
            }
            var_20 = ((6499 | (arr_14 [i_0] [i_1])));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 4; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_21 = ((12 ? var_2 : 1));
                            var_22 |= var_12;
                        }
                    }
                }
            }
            var_23 = (max(var_23, (arr_0 [i_7 + 1])));
        }
        var_24 = (0 != ((-(var_4 && var_0))));
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
    {
        var_25 = -396213950;
        var_26 = (max((-5993025056612456589 % 19076), (~5637682160878888345)));
        var_27 = (max(var_27, ((((((-(arr_20 [10] [i_11] [10])))) ? -107 : (((arr_22 [i_11] [12] [0] [i_11]) / -22724)))))));
        var_28 = (max(var_28, ((!(arr_15 [i_11] [i_11] [i_11] [i_11])))));
    }
    for (int i_12 = 2; i_12 < 23;i_12 += 1)
    {
        var_29 &= (max((~157), var_2));
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 24;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        var_30 |= ((((((arr_39 [18] [6]) <= -1117926600435598922)))));
                        var_31 = 28143;
                    }
                }
            }
        }
        var_32 = (min(var_32, ((((12809061912830663270 - 12809061912830663270) ? ((-(max(4, var_8)))) : (((-((min((-127 - 1), 243)))))))))));
    }
    var_33 = var_2;
    #pragma endscop
}
