/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((~var_2) ^ (5270474339250586271 & 5215303087938871211)));
                var_11 = (max(var_11, (((-(var_0 < var_5))))));
            }
        }
    }
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] [i_2 - 1] [i_2] [i_2] = var_8;
                            var_13 += var_9;
                        }
                    }
                }
                arr_17 [i_2 - 1] [i_3 - 2] = (((~var_6) || (((-1 - (-28192 > -17))))));
                var_14 = (((((~((8546 ? 1 : var_10))))) ? var_7 : (!var_2)));
                var_15 = (+-15028141453148658077);
            }
        }
    }

    for (int i_6 = 3; i_6 < 22;i_6 += 1)
    {
        var_16 &= var_3;
        var_17 = var_1;
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_25 [i_7] = ((((!(!226))) ? (-1 || -var_10) : (!var_9)));
        arr_26 [i_7] [i_7] = (min(28192, ((~(222 ^ var_2)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_18 = (!6228874948543220454);
        arr_30 [1] = (~var_7);
        var_19 = var_5;
        var_20 = -111990118;
        var_21 = ((!(!var_8)));
    }
    var_22 = ((((!(!32766))) ? var_3 : var_6));
    #pragma endscop
}
