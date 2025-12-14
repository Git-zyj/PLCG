/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (arr_1 [i_1]);
                var_12 -= ((((((((arr_1 [i_0]) ^ -1199156013)) % var_6))) ? ((~(~var_3))) : (((arr_0 [i_0] [12]) ^ -8))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_13 = (((((var_5 ? ((~(arr_4 [i_3] [i_3] [i_2]))) : (arr_9 [i_2])))) < (((((var_4 ? 3476935690836272233 : 1199156031))) ? var_9 : (((arr_12 [i_2] [i_3] [i_4]) ? (-127 - 1) : -36028797018963968))))));
                    arr_17 [i_2] [1] = min(((-7477414218189126969 + (arr_0 [i_2] [15]))), (((-(arr_15 [i_2] [i_3] [i_3 + 3])))));
                    var_14 = var_5;
                    var_15 = var_0;
                    arr_18 [6] [i_3] [i_2] = ((((((arr_5 [i_3 + 1] [i_3 - 1] [i_3 + 1]) ? (arr_5 [i_3 + 1] [i_3 - 1] [i_3 + 1]) : (arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1])))) != (max((arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1]), 6878497610285859172))));
                }
            }
        }
    }
    #pragma endscop
}
