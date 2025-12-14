/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (-var_8 >> (60327 - 146));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (var_6 ? ((((((arr_5 [i_0] [i_0] [i_1]) ? (arr_3 [i_1] [16] [10]) : (arr_2 [i_1] [i_1])))) ? var_10 : (((((arr_3 [i_1] [1] [1]) || var_0)))))) : (var_2 || var_10));
                var_15 = (((((arr_4 [i_0] [i_1]) == var_5)) ? (max(var_9, (arr_0 [i_0]))) : (max((arr_0 [i_0]), (arr_4 [i_1] [i_1])))));
                arr_6 [i_0] [i_1] = ((((((~var_11) | (((((arr_3 [i_1] [i_1] [i_1]) || (arr_2 [i_0] [i_1])))))))) || (((var_6 ? (var_9 || var_8) : (arr_2 [3] [i_1]))))));
                arr_7 [i_0] [i_1] = ((-(min(((var_9 ? var_7 : (arr_3 [i_1] [i_1] [i_1]))), (((var_0 > (arr_0 [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_16 |= ((((((!var_3) >= (11238230980590114366 <= 0)))) % ((min(var_8, (arr_11 [10] [i_3]))))));
                var_17 *= (((((arr_8 [i_2] [i_3]) && (((0 >> (((((-9223372036854775807 - 1) - -9223372036854775790)) + 27))))))) ? 0 : (((((min((arr_9 [14]), var_5))) ? 6203 : ((var_0 ? -1429339862 : 1302834738)))))));
            }
        }
    }
    var_18 = (min(var_18, var_6));
    #pragma endscop
}
