/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((-1787222989307729909 / ((((arr_2 [i_0 - 1] [i_0]) + (arr_3 [i_0 + 1]))))));
        arr_5 [11] [i_0] = (arr_3 [i_0]);
        arr_6 [i_0] = arr_1 [i_0];
        var_19 = -96;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_9 [1] [i_1] = 7927362010559329816;
        var_20 = (arr_3 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    {
                        var_21 = 4294967295;
                        var_22 = (((((arr_11 [i_2 - 2] [i_3 - 1] [i_4 + 2]) + 9223372036854775807)) << (((var_1 + 179) - 54))));
                        var_23 = (arr_12 [i_3]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = 3882728986;
        arr_20 [12] [i_5] = (((((((arr_8 [i_5] [i_5]) && (arr_11 [i_5] [i_5] [5]))))) ^ var_4));
        var_24 = ((412238326 && (!1267210434)));
        var_25 = (~-1267210435);
    }
    var_26 = var_5;
    var_27 = ((var_7 | (max(((var_3 ? var_15 : var_12)), ((((-127 - 1) <= -2147483634)))))));
    var_28 = var_1;
    var_29 = var_1;
    #pragma endscop
}
