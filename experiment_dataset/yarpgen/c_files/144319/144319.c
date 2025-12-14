/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((!((min(255, 4095)))))) + (1599665302 <= 2823306582)));
    var_12 ^= ((-var_1 ? ((min((!-1), ((-10202 ? var_3 : -115))))) : (min(var_8, var_1))));
    var_13 = (min(((11 ? (min(2939119174307859917, var_4)) : var_3)), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (min(var_14, -1139393740));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_15 = (((arr_6 [i_2 + 1] [i_1] [i_1]) ? (arr_8 [i_1] [i_1] [i_0]) : (14 * -11)));
                    arr_9 [i_0] = -1139393767;
                }
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    arr_12 [22] [10] [i_3] = 15;
                    arr_13 [i_0] [i_1] [i_3] = ((-11 | (max(-5, 7087009499662830235))));
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_16 [i_0] [i_1] [12] [i_0] &= ((((min(120, -79))) && ((max((arr_1 [14] [i_1]), 3388562786)))));
                    var_16 = (arr_11 [i_0] [16] [i_4]);
                    arr_17 [i_0] [0] [i_4] = 183;
                    var_17 = arr_11 [i_0] [i_4] [1];
                    var_18 ^= (-259553474 ? (!6192459325794470623) : 1);
                }
            }
        }
    }
    #pragma endscop
}
