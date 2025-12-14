/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_4 / var_15) ? var_0 : ((46578 | (min(var_1, -5174072320668865449))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (min(((((min(var_1, var_13))) ? (var_0 | 1125899906842623) : 18968)), (~var_19)));
                    var_21 = var_14;

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_22 = ((~((((arr_4 [i_0 + 2]) || (arr_0 [18] [i_0 - 1]))))));
                        arr_10 [i_0] [i_1] [i_2] [18] = (((((~((var_9 << (67108863 - 67108809)))))) ? (min((67108863 & var_1), (((arr_0 [i_0] [i_0]) ? 46578 : (arr_4 [i_0]))))) : (((~((min(18957, -115))))))));
                    }
                }
                var_23 = (min(((!(arr_4 [i_1 - 1]))), (((arr_8 [i_1 + 1] [i_0 + 4] [i_0] [i_1 + 1]) || (-32767 - 1)))));
                var_24 = ((((((-72 < (arr_3 [i_0]))))) <= ((((min((arr_2 [1]), var_14))) ? ((((var_6 && (arr_5 [i_0]))))) : (min(var_16, var_6))))));
            }
        }
    }
    var_25 = ((((min(var_8, (min(var_4, 8975067440066297868))))) && ((min(var_4, ((var_9 ? var_10 : var_3)))))));
    var_26 = ((~(((((-124 ? 0 : var_6)) < (var_7 * var_19))))));
    #pragma endscop
}
