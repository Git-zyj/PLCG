/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = 2288761007;
        var_11 = (max((24434 == 1), ((-(~-811423267)))));
        var_12 = (max(2958663647, (1 | var_7)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_13 = (((var_5 >= -1503405344201657759) > 507134812));
            var_14 ^= ((((var_4 ? var_4 : var_2)) >> (((507134805 % var_6) - 49))));
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_15 = (min(var_15, -107));
            var_16 += (((var_2 >= 1) != 1));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_19 [9] [i_5] [i_4] [12] [i_6] = 2393929686;
                            arr_20 [i_3] [i_3 + 2] [i_3] [i_5] [i_3 + 2] [i_6] &= (((~var_0) * 4294967287));
                            var_17 = var_2;
                        }
                    }
                }
            }
            arr_21 [i_1] = ((-((254 << (var_5 - 10759312135937214065)))));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_18 = ((3179942382 ? (~103) : (3521047612 == 4639132417969970626)));
            var_19 += (166 / 5739959833951016553);
            var_20 = ((25004 >> (var_7 - 18446744072044338080)));
            var_21 = (max(var_21, var_9));
        }
        var_22 = (max(var_22, (var_2 >= var_9)));
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 16;i_10 += 1)
            {
                {
                    var_23 |= (((var_0 || (!var_6))) || ((!(30 && var_8))));
                    arr_31 [i_10 + 2] [i_9] = ((((max(var_4, (min(235, var_1))))) != ((0 ? (-24434 != var_8) : -1059021050))));
                }
            }
        }
    }
    var_24 |= var_2;
    #pragma endscop
}
