/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = 6422247884767761797;
                arr_6 [i_0] [i_0] [i_1] = (((((1924145348608 << (1024 - 1010)))) ? (((var_15 >> ((((var_4 ? 12024496188941789829 : var_11)) - 12024496188941789808))))) : ((-(max(var_13, var_15))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (((24 / 6422247884767761786) ? (arr_4 [i_2] [i_2] [i_2]) : (arr_2 [i_2] [i_2] [i_2])));
        var_17 = (min(var_17, (((165 ? (arr_5 [i_2] [i_2] [21]) : 1)))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_16 [i_4] = (((((min(var_9, var_6)))) ? (max(var_15, var_7)) : ((((max(6422247884767761802, 262143))) ? -45 : 12024496188941789809))));
            var_18 = (min(var_18, 12024496188941789814));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_19 = ((-56 ? 3458025367251320337 : ((max((127 << var_7), (arr_1 [i_3]))))));
            var_20 = (max(var_7, (-127 - 1)));
            arr_20 [i_3] [i_5] [i_5] &= ((+(((arr_7 [i_3]) + 32))));
            var_21 = (((((2119295060 ^ (arr_7 [i_3])))) ? ((var_0 * ((~(arr_8 [i_3] [i_3]))))) : ((((min(165, 0))) | var_3))));
        }
        arr_21 [i_3] = var_15;
    }
    var_22 = ((-var_11 ? (2 >= var_2) : 1));
    #pragma endscop
}
