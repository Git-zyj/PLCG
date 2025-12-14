/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [8] |= (min((((var_2 != (max(var_1, 53009))))), ((((!(arr_4 [i_0]))) ? (((var_8 ? 53009 : (arr_0 [i_1])))) : (arr_4 [i_1])))));
            arr_6 [8] [i_1] [i_0] |= 0;
            arr_7 [i_1] = ((~(arr_2 [i_1])));
        }
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_17 *= (arr_9 [i_2 + 2]);
                    arr_12 [i_2 + 2] = (min(31164, (((max(var_12, (arr_3 [i_3] [1]))) - 9223372036854775807))));
                }
            }
        }
    }
    var_18 = (min(var_13, (((var_6 < ((0 ? var_13 : 26185)))))));
    var_19 = ((!((min(40333, var_12)))));
    var_20 = ((var_9 ? (min((max(var_8, var_13)), (65535 / 25))) : -var_2));
    #pragma endscop
}
