/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (min(((((min(var_10, 27194))))), (var_5 - var_5)));
    var_16 = var_4;
    var_17 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = -114;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, (((arr_5 [9] [i_1]) == 32767))));
                        var_20 += 3390451195665137602;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_21 = (arr_9 [i_4] [2]);
        arr_11 [i_4] [i_4] = ((((((min(var_2, (arr_9 [i_4] [i_4])))) ? ((min(1, (arr_9 [i_4] [i_4])))) : (max(var_3, (arr_8 [i_4] [i_4]))))) == ((((var_2 + var_9) ? 55870 : (arr_9 [i_4] [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_22 = (min((var_4 <= var_12), (arr_12 [i_5] [i_5])));

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_23 += (min(((((min(-27189, var_2))) ? 1 : (arr_14 [i_5] [1]))), var_2));
            var_24 += (min(-27194, (min((arr_16 [i_5] [i_6]), (arr_17 [i_6])))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_22 [5] [13] [i_5] = -27;
            arr_23 [i_5] = var_1;
        }
        var_25 = (min(((((var_13 ? var_9 : (arr_18 [i_5] [i_5] [i_5]))))), 8799133918840544239));
        var_26 = arr_19 [i_5] [i_5];
        var_27 += var_0;
    }
    #pragma endscop
}
