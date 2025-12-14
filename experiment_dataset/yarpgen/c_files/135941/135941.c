/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_12 = var_10;
                        var_13 = ((((!((max(var_1, -206104945))))) ? ((var_0 << ((((5279965144928270458 & (arr_6 [6] [i_1] [i_2] [19]))) - 23111701)))) : (arr_3 [20])));
                        var_14 *= var_7;
                        var_15 = ((4756578220466079931 < ((((4222287677 <= (arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1 + 1])))))));
                    }
                }
            }
        }
        var_16 *= (((~var_6) << ((((arr_6 [2] [i_0] [i_0] [i_0]) <= (arr_6 [i_0] [i_0] [i_0] [14]))))));
        var_17 = ((((min(((min(var_7, var_6))), var_10))) && (arr_7 [i_0] [i_0] [5] [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_18 ^= (~var_11);
        arr_11 [i_4] = (((arr_6 [i_4] [i_4] [i_4] [i_4]) ^ (arr_6 [i_4] [i_4] [i_4] [i_4])));
        arr_12 [i_4] [14] = var_9;
        var_19 ^= (((((arr_3 [i_4]) + (arr_10 [i_4]))) >= (arr_2 [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_20 *= 72679628;
        arr_15 [i_5] [1] |= ((var_3 << (((arr_1 [i_5] [i_5]) - 48132))));
    }
    var_21 += ((72679599 ? var_4 : (((var_7 ? var_10 : var_6)))));
    var_22 = (((var_10 <= var_8) || var_4));
    var_23 = var_10;
    #pragma endscop
}
