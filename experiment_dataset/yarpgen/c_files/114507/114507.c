/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_0 + (((~(~var_9)))))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 = (((~1635129110541447517) ? -17758 : ((18446744073709551615 ? (17757 != 13849396781304637344) : 13849396781304637335))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 *= var_9;
                        var_16 = (var_12 ? (((((arr_9 [i_0] [i_0] [5] [i_0]) > ((max((arr_11 [i_1]), (arr_7 [i_0] [i_0] [i_0 + 2])))))))) : var_0);
                        arr_12 [i_0] [i_0] = (((((~(~0)))) ? (~3715) : var_9));
                        var_17 = (max((max((arr_7 [i_0 + 1] [i_0 - 2] [i_1 - 1]), (arr_4 [i_0 + 1] [i_0 - 2]))), ((~(arr_7 [i_0 + 1] [i_0 - 2] [i_1 - 1])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_15 [i_4] = (~17744);
        var_18 = (((arr_13 [i_4]) && 3413536615042878515));
    }
    #pragma endscop
}
