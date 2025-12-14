/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    var_18 ^= (!0);
                    var_19 = (min(var_19, ((min((arr_0 [i_0]), (((((var_17 ? 18446744073709551597 : (arr_1 [i_0])))) ? (((arr_1 [i_0]) - 64)) : (((var_11 ? (arr_0 [i_1]) : var_16))))))))));
                    arr_6 [i_1] [14] [i_1] = ((-(arr_2 [i_1 + 1] [i_2 - 2])));
                    arr_7 [0] [i_2] |= ((((max(var_3, var_16)) > (arr_5 [1] [1] [i_2] [i_2]))));
                }
                arr_8 [i_1] = ((313682105 ? ((((var_8 & var_13) ? (1 & var_1) : (!67)))) : ((var_12 & (var_0 | 1)))));
            }
        }
    }
    var_20 = (((1429104002 ^ 81703010) ? (~var_16) : ((var_12 / (min(var_5, 43))))));
    #pragma endscop
}
