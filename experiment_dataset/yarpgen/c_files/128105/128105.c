/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((+(min(((1023 ? (arr_1 [i_0]) : (arr_1 [i_0]))), var_0))));
        var_12 = (max(var_12, (((((((arr_2 [i_0]) - (((arr_1 [i_0]) ? 254 : (arr_2 [i_0])))))) ? (((((((arr_2 [i_0]) != (arr_1 [i_0]))))) * (((arr_0 [i_0] [i_0]) * var_8)))) : 8589934591)))));
        arr_4 [i_0] = 2893898151915261039;
        var_13 = (arr_1 [i_0]);
        var_14 = (min((!98304), (((arr_2 [i_0]) ^ 43496))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_15 = ((((min(var_4, (arr_0 [i_1 + 1] [i_1 - 1])))) && (((arr_0 [i_1 - 1] [i_1 + 1]) && (arr_6 [i_1 - 1])))));
            var_16 -= (((arr_5 [i_1]) % -17083));
            var_17 = (min(var_17, ((((min((arr_9 [i_2] [i_1] [i_1]), ((min((arr_8 [i_1] [i_2] [i_2]), (arr_2 [i_1])))))) < ((min((-32767 - 1), -1024))))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_18 = ((~((1 ? (arr_10 [i_1] [i_3] [i_1]) : (arr_6 [i_5])))));
                            var_19 = (min((((!(arr_6 [i_1 + 1])))), (max(-1023, var_4))));
                            arr_20 [i_1] [i_1] [i_1] [i_2] [i_3] = ((((min((arr_18 [i_4 - 1] [i_3] [i_1 + 1]), (arr_11 [i_5] [i_4 + 1] [i_3] [i_1 + 1])))) && (((min(4519107728773487676, (arr_16 [i_5] [i_4] [i_3] [i_2] [i_1 + 2])))))));
                        }
                    }
                }
            }
        }
        arr_21 [i_1] [i_1] = ((arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 - 1]) << (((((arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1]) ? 80 : -110)) - 38)));
    }
    var_20 = ((((var_4 ? var_8 : -1024))));
    #pragma endscop
}
