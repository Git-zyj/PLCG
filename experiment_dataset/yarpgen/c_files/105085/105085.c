/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (((arr_8 [i_0] [i_0] [i_0] [i_2]) && ((((var_4 ? var_5 : 1910444037))))));
                    var_20 = (max(var_20, ((min((arr_8 [i_0] [i_1] [i_2] [i_0]), ((var_6 * ((-(arr_2 [i_1]))))))))));
                }
            }
        }
        arr_10 [0] &= 133;
        var_21 = (arr_7 [i_0] [i_0] [5]);
        var_22 = (((-583830348 ? 7726399570746857633 : -1)));
        var_23 = ((-(min((122 % var_14), 11955793112892184448))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_24 = 32767;
        arr_14 [i_3] [i_3] &= (((~var_9) & ((var_7 | (arr_7 [i_3] [i_3] [i_3])))));
    }
    #pragma endscop
}
