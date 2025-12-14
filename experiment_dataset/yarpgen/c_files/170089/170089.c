/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -103;
    var_12 = ((var_0 < (((((var_8 ? 30 : 335648279854118682))) ? -2044261925946632922 : 1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, ((((243 < 30962) ? (((arr_1 [i_0]) ? -8192 : (21497 || var_4))) : (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((max(1556183988, 65534))) ? -11157 : (max(21479, (((arr_1 [i_0]) ? 32766 : (arr_2 [i_1]))))))))));
                    arr_9 [i_1] [i_1 - 2] [i_1] = var_5;
                    arr_10 [i_0] [i_1] [1] = ((1556183982 ? -9587 : 223));
                }
            }
        }
        arr_11 [i_0] = 141422544;

        /* vectorizable */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_15 = (max(var_15, 3597));
            var_16 = var_8;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_17 = ((var_6 - (((arr_4 [i_0] [i_4] [i_4]) * ((-5819074893618518634 ? 81006358 : 1986))))));
            var_18 |= -335648279854118681;
            var_19 = var_3;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_20 = (min(var_20, (((+((((arr_4 [i_0] [i_0] [i_0]) < (arr_4 [i_0] [i_5] [i_5])))))))));
                        var_21 = (max(var_21, var_10));
                        arr_25 [i_0] [i_7] = 18446744073709551608;
                        var_22 = (max(120, ((((arr_6 [i_0] [i_0] [i_6] [i_7]) || var_2)))));
                    }
                }
            }
            var_23 = (max(var_23, ((((((arr_3 [i_5]) <= var_7)) ? ((+((max((arr_21 [i_0] [i_5] [i_5]), (arr_2 [i_0])))))) : (((arr_17 [i_0] [i_0] [i_5]) ? 67104768 : (arr_17 [i_0] [i_0] [i_5]))))))));
        }
    }
    var_24 = (max(var_5, (max(var_0, var_9))));
    var_25 = (min(var_25, ((max(((((((-1556183959 ? var_7 : 244))) ? (max(-66793338, var_10)) : var_8))), (((-47 >= -672890883) ? var_7 : 126)))))));
    #pragma endscop
}
