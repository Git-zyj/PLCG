/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(var_11, var_10)) | (((var_11 && (74 | var_0))))));
    var_20 = ((-((((min(var_10, -113))) ? ((min(1023, 1))) : var_14))));
    var_21 = var_17;
    var_22 ^= 0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_23 = (max((min((arr_1 [i_0] [i_0]), (((arr_1 [2] [i_0]) & 9195952869753915525)))), (((-10 ? -13134 : (arr_2 [9]))))));
        var_24 = ((+(((arr_0 [i_0]) ? 3725492172 : var_2))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_25 = (min(var_25, ((((((~(-2 ^ 51743)))) ? ((((arr_3 [i_2]) ? (arr_5 [6] [i_1] [i_1]) : var_6))) : (max((arr_0 [i_2]), (var_15 * 569475134))))))));
                    var_26 = (((min(((!(arr_3 [i_1])), ((!(arr_7 [8]))))))));
                    arr_9 [i_0] [i_0] = ((2 > (arr_4 [i_0] [i_1])));
                }
            }
        }
        var_27 = ((536870911 ? (((21 ? (((min(17, (arr_7 [i_0]))))) : 3758096384))) : ((((49 ? 7097962024766512686 : -15)) - -9756))));
    }
    #pragma endscop
}
