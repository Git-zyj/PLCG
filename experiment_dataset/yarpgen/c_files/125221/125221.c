/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_18 *= 255;
                        var_19 *= ((min(var_12, (((4271778421 ? 237 : -28))))));
                        var_20 = ((((((arr_4 [i_1 + 2] [i_1 + 1]) ? (arr_8 [i_1 - 1] [i_1 - 1]) : (arr_8 [i_1 + 3] [i_1 + 3])))) ? (8388607 ^ -32748) : 32767));
                    }
                    var_21 = (arr_5 [i_0] [i_0] [i_0]);
                    arr_10 [i_2] [i_0] = ((~(((((arr_5 [2] [i_1] [i_1 - 1]) ? var_1 : -31062))))));
                    var_22 = (((!-54) % (((arr_3 [i_1 - 1] [i_1 - 1]) ? (arr_3 [i_1 - 1] [i_1 - 1]) : 232))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_13 [i_4] [i_4] = ((!(((((max(-32748, 255))) ^ (arr_8 [i_0] [i_0]))))));
                    var_23 = (min(var_23, 2195895365460360678));
                    var_24 *= ((-63 ? (((~(arr_8 [i_0] [i_4])))) : (max(((17529643753992307286 + (arr_12 [i_0] [i_0] [i_0] [i_4]))), var_8))));
                    var_25 = ((((((-(arr_6 [i_0] [i_0] [i_0] [i_4])) <= -21413)))));
                    arr_14 [i_0] [i_0] [i_4] = ((((32767 <= ((min(var_0, (arr_12 [i_0] [i_0] [i_1 + 2] [i_0])))))) ? (max(2582602953088407681, ((((arr_5 [i_4] [i_1] [i_0]) % -2141))))) : ((((((arr_12 [i_0] [i_0] [i_1] [i_4]) ? (arr_12 [i_0] [12] [i_1] [13]) : 117)) * ((min(var_8, var_16))))))));
                }
                arr_15 [i_1] [i_0] [i_0] = ((~(arr_0 [i_0] [i_0])));
                arr_16 [i_0] [i_0] = (arr_8 [9] [9]);
                arr_17 [i_0] [i_0] = ((((max((!var_10), (((arr_2 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_4 [1] [1])))))) ? var_14 : (917100319717244333 ^ 210)));
            }
        }
    }
    #pragma endscop
}
