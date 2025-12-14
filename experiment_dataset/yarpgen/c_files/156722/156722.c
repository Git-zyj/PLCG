/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 += (((4291383980 || ((max(-2577642138384881926, var_11))))));
        arr_3 [i_0] [i_0] = 3583315;
        var_17 = 3583315;
        var_18 = 4291383980;
    }
    var_19 = (((3583316 + ((0 ? 3583315 : -513870511)))));
    var_20 = ((min(4291383981, var_15)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            {
                var_21 &= (-236 & -6982);
                arr_8 [i_2] = 48;
                arr_9 [i_1] [i_1] &= ((((((var_8 || 229064130) ? 18446744073709551615 : (!51041046)))) && (((60 && 2285000772824576527) && ((!(arr_5 [i_1] [i_1])))))));
                arr_10 [6] [i_2] [i_2] = (((((((arr_5 [i_2 + 1] [i_2 + 1]) == (arr_6 [i_1] [i_1]))))) <= (max((arr_4 [i_1] [i_2 - 1]), 3583315))));
            }
        }
    }
    #pragma endscop
}
