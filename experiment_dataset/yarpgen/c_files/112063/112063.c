/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_10 = (min(var_10, (((95 + ((1 * ((14077267272011700141 ? 0 : (arr_2 [i_1] [i_0]))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_0] = ((!(arr_3 [i_2] [1] [i_0])));
                    var_11 = (max(var_11, ((((65529 - 8) >> (-24 + 52))))));
                    var_12 = (min(var_12, ((((arr_8 [i_1 + 1] [i_1 - 1] [4] [4]) ? (arr_8 [i_1 - 3] [i_1 - 2] [8] [i_2]) : (arr_7 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_2]))))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_13 = (((((arr_8 [i_0] [i_3] [i_0] [i_3 + 1]) && (arr_10 [i_1 + 1]))) ? (((13 ? 4294967283 : 4294967293))) : 4064));
                        arr_12 [i_0] [i_2] [i_0] = (((!105) ? (!var_1) : (((arr_11 [i_0] [i_0] [i_2] [i_3]) ^ 46))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1 + 1] [i_2] [i_0] = ((+((((arr_8 [i_4] [i_0] [i_0] [i_0]) && 1748974299815239245)))));
                        arr_16 [16] &= (arr_2 [i_2] [i_1]);
                        var_14 = arr_3 [i_0] [i_2] [i_4];
                    }
                    arr_17 [i_0] [1] [i_2] [i_1 - 2] = ((1748974299815239245 || (((var_5 ? (arr_11 [i_1] [i_0] [i_1] [i_2]) : 14077267272011700141)))));
                }
            }
        }
    }
    var_15 &= (((var_1 <= (((max(var_0, var_8)))))));
    var_16 = var_5;
    var_17 = (max(var_17, ((((14077267272011700143 & (1 ^ 246)))))));
    #pragma endscop
}
