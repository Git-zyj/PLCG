/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = ((((arr_8 [i_0] [i_0] [i_2]) ? ((var_1 ? var_3 : var_0)) : (((arr_6 [i_1] [i_1] [i_1]) ? (arr_3 [i_1] [i_1] [i_1]) : var_2)))));
                    var_13 = ((max(var_11, (~var_9))));
                }
            }
        }
    }
    var_14 = ((var_8 ? 4393751543808 : (((84 ? 458752 : 14)))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_15 ^= ((((((arr_1 [i_5]) ? (((arr_8 [i_3] [i_5] [i_5]) ? 4688139214224602159 : var_7)) : (((var_7 ? var_8 : var_5)))))) ? var_4 : var_2));
                    var_16 ^= var_2;
                    var_17 += ((((var_2 == ((var_2 ? 78 : 26)))) ? (((((((arr_3 [i_4] [i_4] [i_4]) ? var_5 : (arr_8 [i_5] [i_4] [12])))) ? ((min((arr_0 [i_5] [i_3]), var_10))) : ((min((arr_9 [i_3]), var_2)))))) : (min(((4290772992 ? 4688139214224602159 : 1)), var_0))));
                    var_18 = (((max(((var_2 ? var_5 : var_7)), (((arr_7 [i_4] [10] [12] [14]) ? var_0 : (arr_18 [i_5]))))) % ((2143289344 << (((arr_4 [i_5] [i_5]) - 219))))));
                }
            }
        }
    }
    var_19 = (max((min(2194728288256, -595633368133915000)), var_1));
    var_20 += (min(1, var_1));
    #pragma endscop
}
