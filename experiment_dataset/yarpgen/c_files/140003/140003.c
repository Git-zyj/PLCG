/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = max(((((max(-75, var_6))) ? ((var_15 ^ (arr_0 [i_0]))) : (max(var_5, 9052695770192987092)))), (max((max(190772341, -3203978422715817415)), (var_0 && 4037802666))));
                arr_8 [i_0] [i_0] [9] = (min((((((min(-65, var_18))) && ((min((arr_4 [i_1]), var_18)))))), (max(((min(82, (arr_1 [i_1] [i_1])))), (max((arr_6 [i_0] [i_0] [i_0]), var_18))))));
                var_20 = (((max((var_4 || var_16), (2084711413 && 1006124548023921325))) ? (((((84 ? 8388607 : 0))) ? (((var_15 ? (arr_5 [i_0] [i_0]) : 1))) : (((arr_7 [i_0] [i_1]) ? 70368743915520 : 82)))) : (((max((min(2713, 1)), ((((arr_0 [i_0]) && var_16)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                arr_15 [i_2 - 1] = (((((108 + var_16) ? (119 >= 8102703491962589254) : (var_7 ^ var_7))) - ((((min((arr_14 [i_2 + 1] [i_2 + 1] [i_2]), (arr_14 [13] [i_2 - 1] [4])))) ? ((((var_14 || (arr_12 [i_2] [i_2 - 1] [i_2]))))) : (max(var_6, var_1))))));
                var_21 = (((((126 - var_11) * ((((arr_13 [i_3] [i_2]) ? 1 : (arr_10 [18]))))))) & ((((min((arr_14 [i_2 - 3] [i_2 - 3] [1]), 1072486001))) ? ((0 ? (arr_11 [i_3] [i_3]) : 1)) : (max(31806, var_16)))));
            }
        }
    }
    #pragma endscop
}
