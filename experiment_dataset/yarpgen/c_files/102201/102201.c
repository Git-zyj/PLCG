/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((60191 ? 1154677849 : 2147483647)) == 178)) ? (((((78 ? 161 : var_16))) ? ((var_3 ? var_12 : -9900)) : (var_16 << 0))) : (-1627273745 - 170));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = ((((((2147483647 < (arr_1 [22]))) ? (((arr_0 [0]) ? 0 : var_1)) : ((0 ? (arr_0 [i_0]) : var_14)))) > (((((((2992537392 << (((arr_5 [i_0] [3] [i_2]) - 15102051117191184446))))) <= ((var_18 ? 9900 : (arr_5 [i_0] [i_0] [i_0])))))))));
                    var_22 = (max(var_22, ((((((((arr_1 [i_0]) ? (arr_3 [i_1] [i_2]) : 18446744073709551615)) + ((var_19 ? 0 : 0)))) << (((var_7 < 1) * (((var_15 == (arr_0 [i_2])))))))))));
                    arr_6 [i_0] [i_0] [i_2] [i_2] = (((((((((arr_0 [i_0]) && 56))) & ((var_14 ? 9927 : var_16))))) * ((((var_14 ? var_0 : (arr_1 [i_1]))) - (1 & var_3)))));
                }
            }
        }
    }
    var_23 = (((((((var_14 ? var_16 : var_8))) ? ((256 ? var_17 : var_19)) : (-9894 == -73933739))) ^ (((9223372036854775794 >= var_9) ? ((1116267954 ? var_2 : 1)) : ((var_14 ? var_18 : var_3))))));
    #pragma endscop
}
