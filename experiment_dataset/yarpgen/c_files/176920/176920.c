/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_19 = 100;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        var_20 -= (~5);
                        var_21 |= 1;
                    }
                }
            }
            var_22 = (229 | 3);
            var_23 |= ((-(~0)));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_24 = 1;
            var_25 |= (arr_9 [1] [i_4]);
        }
        var_26 = 46578;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_27 = -36;
                        var_28 -= (((arr_25 [i_6 - 1] [i_6] [i_6] [i_6] [i_7] [i_7]) ? 218 : (arr_5 [i_6 - 1] [i_6 - 1])));
                        var_29 = (((arr_20 [i_5]) ? 117 : (arr_9 [i_6] [i_7])));
                    }
                }
            }
        }
        var_30 = (1 / 214);
        var_31 = (arr_15 [i_5]);
    }
    var_32 -= ((max((~214), 252)));
    var_33 = ((~(~var_17)));
    #pragma endscop
}
