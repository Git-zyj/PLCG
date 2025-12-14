/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 |= (arr_3 [i_2]);
                    var_14 = ((((((arr_7 [i_0] [i_1 - 1]) >> (((max((arr_3 [i_0]), 3077244698)) - 3077244696))))) + ((-7630758559779077067 ? (var_1 >= 1) : (((arr_4 [i_0] [i_0]) % -1239254700967698153))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = ((((max((arr_0 [i_1 - 1]), -1345107675))) ? (727435396 >> 31) : (max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))));
                                var_16 = (min(((-(arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_3 + 1] [i_4]))), ((min(var_11, 1345107687)))));
                                arr_13 [i_0] [16] = arr_3 [i_0];
                                arr_14 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_4] = (((((var_7 ? ((var_7 ? 1260113235 : (arr_4 [i_1] [1]))) : (max(-54, 727435401))))) ? (((((255 ? (arr_8 [i_0]) : (arr_7 [i_0] [i_1])))) ? var_6 : ((((arr_1 [i_0]) <= (arr_7 [i_2] [i_4])))))) : (arr_6 [i_0] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_17 = (arr_20 [i_0] [i_1] [i_0] [i_5 - 1] [i_6]);
                                var_18 = (min((((-93 ? -1 : 1))), ((var_6 ? (arr_18 [i_0 - 1] [i_1 + 1] [i_2] [i_6]) : 13711940052916530088))));
                                var_19 += (max(((-80 ? ((7540739061283932328 >> (-30 + 75))) : (((1369591428 ? (arr_1 [i_0]) : (arr_15 [i_0 - 1] [i_0 - 1])))))), var_8));
                                var_20 = (max(var_20, ((max(((((((arr_2 [i_5] [i_2]) >= -592875569))) - (var_1 != var_12))), 239)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (-7549301647453531292 ^ -1662055255);
    #pragma endscop
}
