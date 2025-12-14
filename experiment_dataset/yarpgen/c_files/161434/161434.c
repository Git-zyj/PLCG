/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (((~-35) ? ((~(arr_6 [i_0] [i_0] [i_0 - 2]))) : (max((arr_0 [i_0] [i_0]), (((arr_1 [i_0]) ? (arr_1 [i_0]) : -35))))));
                    var_17 ^= (min(65515, (65524 == 14127352498116324805)));

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((-(arr_3 [i_0] [i_1])));
                        var_18 = (min(var_18, 2923135361030148815));
                        var_19 = (max(var_19, (arr_5 [i_0 + 1])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_20 = ((-2923135361030148816 ? ((min(12288, var_0))) : 65528));
                            arr_17 [i_5] [i_0] [i_4] [i_2] [i_0] [i_0] = ((!(arr_3 [i_0] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_0] [i_4] [i_6] = (~var_14);
                            arr_22 [i_2] [i_4] [i_2] [i_4] [i_4] [i_0] = ((!(1 & -32765)));
                            var_21 = ((~(((arr_5 [i_0 + 1]) ^ var_8))));
                            var_22 = (((arr_7 [i_1]) ? 4426627176927156485 : (max((arr_1 [i_0]), (min(25109, (arr_7 [i_0])))))));
                        }
                        var_23 ^= (max(var_7, ((((((-8 ? -23 : 56274))) ? (arr_2 [i_0]) : (arr_1 [i_2]))))));
                    }
                }
            }
        }
    }
    var_24 = var_2;
    #pragma endscop
}
