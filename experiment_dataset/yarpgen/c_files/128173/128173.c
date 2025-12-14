/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = 36;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, (arr_4 [i_0] [i_0])));
                                arr_10 [i_0] [i_1 + 1] [i_2 - 1] [i_3 + 3] [i_4] = 991934265;
                                arr_11 [8] [i_1] [8] [i_3] [i_4] [i_1] &= (~var_1);
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_0] = ((~(((arr_8 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_1]) - 3078924187))));
                var_23 = max((min((var_4 | 198), (max(-20136, 0)))), ((((464141246916895074 & 0) ? var_15 : (arr_3 [i_0 + 1] [i_0 - 1])))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_24 = ((var_6 != (arr_6 [i_0 - 1] [i_0] [i_1 - 1] [i_1 - 1])));
                    arr_15 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = -13431;
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_25 = max((max(var_5, 4294967295)), (max((arr_0 [i_0]), (arr_0 [i_0 + 1]))));
                    arr_18 [i_0 + 1] [i_0] [i_6] = (max((((((((arr_7 [i_6] [i_6] [i_0] [i_0] [i_1] [i_0]) ? 4294967293 : var_12))) ? (arr_13 [i_6]) : 50962))), (arr_6 [i_0] [i_0] [i_6] [i_6])));
                    arr_19 [i_0 - 1] [i_0] [i_0] = 8816101936911967059;
                }
            }
        }
    }
    #pragma endscop
}
