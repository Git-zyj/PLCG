/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((-(((var_9 >= var_3) ? var_7 : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_13 *= ((-var_8 * ((min((arr_6 [i_1 - 1] [i_0 + 1]), (arr_6 [i_1 - 1] [i_0 - 1]))))));
                    var_14 = var_7;
                    var_15 = (min(0, (65535 <= -31405)));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0 - 1] [i_0] [11] = var_1;
                    var_16 = (((((((arr_4 [8]) ? (arr_6 [i_0 - 2] [i_1]) : var_6))) ? var_7 : ((~(arr_5 [i_1 - 1] [i_3] [i_1 - 1] [i_0]))))));
                }
                arr_11 [i_0 + 1] = ((((min((arr_0 [i_0 + 1]), (arr_2 [i_1 - 1] [i_0 - 1])))) && (((~(arr_1 [i_0 + 1]))))));
                var_17 -= var_8;
            }
        }
    }
    var_18 += max(-2147483642, 32767);
    var_19 = var_9;
    #pragma endscop
}
