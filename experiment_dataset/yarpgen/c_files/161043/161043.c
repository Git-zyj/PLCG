/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [9] [i_0] = (arr_1 [i_0]);
        arr_4 [1] [1] = ((min((arr_1 [i_0 + 1]), var_1)) - (arr_1 [i_0 + 1]));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_1] = (arr_0 [i_0 + 1]);
            var_13 = ((~((-357642914 - (arr_2 [i_0] [i_0])))));
            var_14 = (max(var_14, ((~((1 | (~835653074)))))));
        }
    }
    var_15 = ((((((var_12 ? 357642914 : var_3)))) ? ((-(var_7 / var_3))) : (var_2 * var_10)));
    var_16 = var_7;
    var_17 = ((var_2 ? ((min(var_12, (!357642892)))) : ((((((max(var_7, 1)))) >= var_1)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                arr_16 [i_3] [i_3] [i_2] = (arr_10 [i_2]);
                arr_17 [i_2] [2] &= (~2119004522463318927);
            }
        }
    }
    #pragma endscop
}
