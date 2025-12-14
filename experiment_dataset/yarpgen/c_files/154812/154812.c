/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min((-26 < var_0), var_3)), ((((min(3408515586532688065, 16)) > 15038228487176863580)))));
    var_13 = var_4;
    var_14 = (max(var_10, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = ((max((arr_0 [i_0] [i_1 + 2]), var_1)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_16 = (min(15038228487176863580, (arr_8 [i_1 + 2] [i_0] [i_2] [i_3] [i_3 + 1])));
                            arr_10 [i_0] [i_1 + 1] = ((!25) % (arr_4 [i_2 - 2]));
                            var_17 = (~-1);
                            var_18 = (((min((arr_1 [i_0]), 17954420402374394883)) >= (213 * 492323671335156754)));
                        }
                    }
                }
                arr_11 [i_0] [i_1 + 1] = ((((max(var_0, var_7))) * (((((max(230, var_1))) * (((arr_1 [i_0]) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_0] [i_1 - 2]))))))));
                arr_12 [i_0] [i_0] = (5916484701640765804 - 31);
                var_19 = ((((min((arr_6 [i_0] [i_1 - 1] [i_0]), (arr_6 [i_0] [i_1 + 1] [i_0])))) ? (15347704007184565819 + 30) : (arr_6 [i_1 - 2] [i_1 + 1] [i_0])));
            }
        }
    }
    var_20 = (845398816 <= 1);
    #pragma endscop
}
