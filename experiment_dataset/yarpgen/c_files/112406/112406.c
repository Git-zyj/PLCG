/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((((var_8 ? var_12 : var_5))) / (min(var_3, (var_9 - var_9)))));
    var_14 = ((~((63 ? var_2 : (((~(-32767 - 1))))))));
    var_15 = ((~(var_9 & var_4)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0]) ? var_1 : var_3));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = 63;
                    var_18 = 945321237;
                    var_19 *= var_2;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_20 -= var_11;
            var_21 = ((((((arr_0 [i_3]) ? (arr_0 [i_4]) : (arr_7 [i_3])))) ? (max(10964993670937272475, 10680)) : (arr_0 [i_3])));
            var_22 = -1320309863;
        }
        var_23 = (arr_3 [i_3]);
        var_24 = 1320309863;
        arr_16 [i_3] [i_3] = ((3719774403497145161 ? (arr_13 [i_3] [i_3] [i_3]) : ((-20 ? var_8 : (3719774403497145161 - 26)))));
    }
    #pragma endscop
}
