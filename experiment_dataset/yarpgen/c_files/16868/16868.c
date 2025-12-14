/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_12 += (201 >= 201);
                        var_13 = ((~(((arr_10 [6]) ? (arr_9 [i_2] [i_2] [i_1] [i_2]) : var_1))));
                        var_14 = (max(var_14, (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3])));
                        var_15 = (((((~(arr_4 [i_0] [i_0] [i_1])))) ? var_5 : (arr_6 [i_0] [6] [i_0])));
                        var_16 = 183;
                    }
                }
            }
        }
        var_17 |= (!55);
        var_18 = (min(var_18, (arr_2 [1])));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_19 = (min(((202 ? var_0 : 774607654)), ((var_8 ? (!13147) : (arr_3 [i_4])))));
        var_20 = ((((((arr_6 [i_4] [i_4] [i_4]) < (arr_6 [i_4] [i_4] [i_4]))))) & (((arr_6 [i_4] [i_4] [i_4]) ? 55 : (arr_6 [i_4] [i_4] [i_4]))));
        var_21 = (arr_6 [i_4] [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            {
                var_22 = (((2147483647 | 201) == (((~2860830926270747506) % 1623627852515272912))));
                var_23 = (206 % 1);
                var_24 = (min((~var_8), (!391936717)));
            }
        }
    }
    var_25 = 3;
    #pragma endscop
}
