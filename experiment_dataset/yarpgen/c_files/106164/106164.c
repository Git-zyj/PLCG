/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((((min(2147483647, 2147483647))) ? (arr_0 [i_0] [i_1]) : (min((((var_2 && (arr_1 [i_0])))), (((arr_2 [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [1]) : var_2))))));
                arr_4 [i_0] [i_0] [i_1] = (var_10 && var_5);
                var_13 = ((((!(arr_3 [i_1 - 1]))) ? ((((!((max(var_5, (arr_0 [i_0] [i_0])))))))) : (max((((17679 ? var_10 : (arr_1 [i_0])))), (max((arr_2 [i_0] [i_0] [i_1]), var_10))))));
                arr_5 [i_1] = (min((((var_1 <= (((!(arr_2 [i_1] [i_0] [i_0]))))))), (((((arr_0 [i_0] [i_1 - 1]) - 14610)) % (((-712387102902351936 ? -2147483647 : -14625)))))));
                arr_6 [i_0] [i_0] = (max(((4220623089 ? 3174796928524406015 : (1 & 1))), 45841));
            }
        }
    }
    var_14 = 0;
    var_15 = var_6;
    var_16 = (((max(65529, 8000800357115792275)) >> (var_10 + 507902130120302743)));
    var_17 = var_0;
    #pragma endscop
}
