/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_10, (((((48 ? var_10 : 34222))) ? ((7343407701163110990 ? 13762629135676700943 : -1073741824)) : (min(-6538472883235692833, 13762629135676700943)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [3] [10] [i_2 - 1] [i_3] = (arr_8 [i_0] [i_0] [i_2] [i_3]);
                            arr_11 [i_2] [i_2] [i_2 - 1] [9] [i_3] [i_3] = (min((((-((4120157630 ? var_8 : 0))))), -6538472883235692833));
                            var_12 = (((((max(var_3, var_10)) ? ((min(-3626661383225487055, -1681849280551413860))) : (min(549755813856, 18))))));
                            var_13 = (max(var_13, ((max((((arr_4 [i_2 + 1] [i_3 - 1] [i_1 - 1]) ? (arr_1 [i_2 + 1] [i_3 - 1]) : 127)), (((-1681849280551413837 ? -3 : (arr_4 [i_2 + 1] [i_3 - 1] [i_1 - 1])))))))));
                        }
                    }
                }
                var_14 = (min(var_14, (((((-1285879743 ? 1340358762 : 15496003140233329398))) ? (((((2950740933476222218 ? 1681849280551413830 : 4594149707819773554))) ? -27 : (((-1340358737 ? var_4 : 116))))) : 1151795604700004352))));
                var_15 = (max(var_15, (((max(3792769654761927258, 587483462))))));
                arr_12 [0] = (min((arr_7 [i_0] [i_1 + 1] [7] [6]), (((arr_7 [i_1] [i_1 - 3] [i_1] [i_1]) ? (arr_2 [i_1] [i_1 - 2] [i_1]) : (arr_7 [i_0] [i_1 - 2] [i_1] [i_1])))));
                var_16 = max(((max(12, 1))), (arr_6 [i_1 - 2] [1] [i_0] [i_1 - 3] [8] [8]));
            }
        }
    }
    var_17 = (((7675384868252697245 / (((max(32512, var_3)))))));
    #pragma endscop
}
