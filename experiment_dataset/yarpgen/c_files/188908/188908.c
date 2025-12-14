/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 126;
                var_14 *= ((-413589383 ? (!5291566787110084208) : ((((var_6 != 0) < (min(18446744073709551615, -32753)))))));
            }
        }
    }
    var_15 = var_9;

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (min((max((arr_7 [i_2]), (arr_7 [i_2]))), ((7083 - (arr_6 [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_16 [i_2] [10] [10] [i_5] = (((min(19, 35888059530608640))) ? (((~-7083) ? ((7064 ? (arr_14 [i_5] [i_4] [i_2] [i_2]) : var_9)) : (1020930642189227097 < 3980303814490285873))) : (((arr_6 [i_5 - 1]) * -7068)));
                        var_16 = (max((arr_11 [i_2] [i_3 + 4] [i_4]), (((((var_1 & (arr_7 [i_2])))) ? (32735 / 1869955498203288936) : (((max(var_12, 19519))))))));
                        var_17 = (-((((((arr_10 [i_4]) ? (arr_14 [i_2] [i_2] [i_4] [i_5]) : 15891107891596921445)) <= 7083))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_18 = ((7886141189272998822 ? ((var_6 ? 1020930642189227085 : (arr_14 [i_6] [i_6] [3] [i_6]))) : var_9));
        var_19 = 7083;
    }
    #pragma endscop
}
