/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 <= ((((max(var_0, var_10))) ? var_2 : (max(var_2, var_6))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0 - 3]) > ((var_3 ? 31 : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_12 += ((-58 ? -66 : 13429265939432197181));
            var_13 = (max(var_13, ((((arr_2 [i_0 - 2]) | (arr_2 [i_0 + 1]))))));
            var_14 = 13429265939432197176;
        }
    }
    var_15 += ((((((var_9 ? var_3 : var_6)))) > var_4));

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_16 = (min(var_16, ((min((min(61324, 11390157965995999471)), ((((arr_4 [i_2]) ^ 4212))))))));

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_17 = -92;
            arr_12 [i_3] = (((arr_5 [i_2] [i_3]) & (arr_5 [i_2] [i_3])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_18 += (((((arr_16 [i_3]) ? (arr_16 [i_4]) : (arr_16 [i_4]))) <= (((arr_16 [i_2]) & (arr_16 [i_5])))));
                        arr_19 [i_2] [i_3] [i_4] [i_4] = -65;
                    }
                }
            }
            var_19 = (arr_7 [i_2]);
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_20 = (((((((((arr_16 [i_6]) >= (arr_1 [i_6])))) ^ ((min((arr_2 [i_6]), var_10)))))) ? (((((arr_5 [i_6] [i_6]) >= 64)))) : (min((arr_14 [i_6] [i_6] [i_6]), (arr_5 [i_6] [i_6])))));
        arr_22 [i_6] = 10008535910683739652;
    }
    #pragma endscop
}
