/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 <= (((!(((var_3 ? 18446744073709551613 : var_1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((max(18446744073709551599, ((max(57768923, (arr_5 [i_1]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((~2) < ((((arr_6 [i_0] [i_0] [i_0] [i_0]) - (arr_9 [i_0] [i_0] [i_0])))));
                            var_14 = (min(var_14, ((min(((((min((arr_1 [i_0] [i_0]), (arr_2 [i_0])))) ? ((-2160582902233377893 ? 18446744073709551613 : (arr_9 [i_1] [i_1] [i_1]))) : (arr_7 [i_0] [i_0] [i_0] [i_0]))), ((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? ((18446744073709551601 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_3]))) : (arr_5 [i_3])))))))));
                            var_15 *= (arr_9 [i_0] [i_0] [i_0]);
                        }
                    }
                }
                var_16 = (max(var_16, ((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? 18446744073709551613 : var_7)))))));
            }
        }
    }
    var_17 += -1325589555;
    #pragma endscop
}
