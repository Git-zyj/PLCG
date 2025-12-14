/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_10 ? var_6 : (var_17 && var_15)))) ? (((((var_5 ? -98 : var_2)) - (min(var_7, -98))))) : var_17));
    var_20 = (var_16 + (var_11 - var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max(4294967270, ((2057393158 ? ((3474841534 ? var_11 : 2057393147)) : (((~(arr_3 [i_0] [i_1]))))))));
                var_21 -= (!51603);
                var_22 = (0 - (min((arr_3 [i_0] [i_1]), var_11)));
                var_23 += (((-19 + 9223372036854775807) >> 0));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 += (!((((arr_6 [i_2]) ? (arr_6 [i_2]) : 3514065658))));
        arr_8 [i_2] [i_2] = ((((!((((arr_7 [i_2]) ? 182460430198778719 : 1284372364))))) ? var_8 : (((((0 ? var_4 : var_5))) ? (max(3801795241, 209)) : (arr_7 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_4] = (((((((min(1, -25))) ? 2237574127 : (arr_9 [i_2] [i_3])))) ? var_5 : (!17540485226196844755)));
                    var_25 = ((~((((min(0, 0))) ? (arr_12 [i_2] [i_2] [i_2] [i_2]) : (-8855695402001224963 + 3801795226)))));
                    var_26 = (max(var_26, ((((~var_16) % var_12)))));
                    var_27 = ((~-17270) ? -var_17 : ((((((-(arr_10 [i_2] [i_3] [i_4]))) < -1563666582)))));
                }
            }
        }
    }
    #pragma endscop
}
