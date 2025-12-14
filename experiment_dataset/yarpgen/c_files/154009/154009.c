/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_14 = 0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (7277882608131216424 > var_8);
                    var_16 = (max(var_16, (var_13 == var_2)));
                    arr_8 [i_2] [i_1] [1] = (var_12 || var_3);
                    var_17 += 122;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_20 [i_5] [i_5] [i_4 - 3] [1] [i_5] = 5561774780507182420;
                        var_18 = (max(((max(64, 1))), 1));
                    }
                }
            }
        }
        arr_21 [i_3] [15] = (arr_18 [i_3] [i_3] [17]);
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {
                {
                    var_19 = (max(1, (arr_17 [i_7] [0] [i_8] [i_8] [i_8] [i_9 - 1])));
                    arr_31 [i_8] [7] [i_8] = ((((((1 < (-62 ^ -32767))))) | (65520 - -8312993625658382834)));
                    arr_32 [i_8] [i_8] = (max((~1), ((((arr_6 [i_7] [6] [i_7] [i_7]) > 132120576)))));
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
