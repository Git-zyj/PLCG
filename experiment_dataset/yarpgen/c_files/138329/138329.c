/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = (((((((arr_5 [i_0] [i_0] [i_0]) ^ var_4)) >= (((max(190, (arr_7 [i_2]))))))) ? (((arr_2 [i_4] [i_1] [i_0]) << ((((var_12 ? 190 : (arr_5 [i_4] [13] [3]))) - 187)))) : (((arr_2 [i_0] [i_0] [i_2]) ^ ((max((arr_10 [i_0] [i_1] [i_2 + 1] [i_2 - 2] [i_3] [i_3] [i_4 - 1]), var_14)))))));
                                var_23 = ((((max((arr_0 [i_0] [19]), var_5)) / 7868585573229997660)));
                                var_24 |= ((min((min((arr_2 [i_4 - 1] [i_0] [i_0]), var_1)), var_4)) * ((var_17 ? (!var_7) : (max((arr_10 [i_0] [i_0] [i_2] [15] [i_3] [i_3] [i_0]), var_2)))));
                                var_25 = (max(var_25, ((((min(var_2, ((min((arr_3 [i_0] [i_1]), var_8))))) - (arr_5 [i_0] [16] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (max(var_26, (((-(~190))))));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_27 = 53;
                        var_28 = var_3;
                        var_29 = var_10;
                    }
                }
            }
        }
        var_30 = (min(((~(max((arr_16 [i_5 + 1]), (arr_7 [i_5 + 2]))))), (((((arr_5 [i_5 + 2] [i_5] [i_5]) > var_5)) ? var_6 : (((arr_1 [5]) ? var_4 : var_5))))));
    }
    var_31 = ((-(max(var_18, var_0))));
    var_32 = var_8;
    #pragma endscop
}
