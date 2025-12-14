/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (~-17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] = 1;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = (max((max(-2038712623, 28)), 1));
                            arr_14 [6] [i_1] [i_2 - 3] [i_2 - 1] [i_3] [i_3] = (max(((-7196259542742146980 ? 3404482980096692354 : 15251813359810248550)), -1024));
                        }
                    }
                }
                var_12 = (((((((arr_9 [i_1] [0] [i_0]) ? -113 : (arr_0 [1]))) * 1)) > ((-16 % (arr_3 [i_0] [i_1])))));
            }
        }
    }
    var_13 = var_7;

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_14 = (arr_16 [18] [20]);
        var_15 = 1;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_16 = (max(var_16, (((-(25 + 2778276366212047424))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_17 = max((arr_21 [i_6]), 1);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_31 [i_7] [i_6] [i_7] [i_8] = 3194930713899303095;
                                arr_32 [i_7] = 65496;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
