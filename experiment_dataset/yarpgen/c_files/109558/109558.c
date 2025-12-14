/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max(((min(var_2, 3094521853))), (6456487173324108667 << var_6))), var_8));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = ((((min((~var_8), (arr_1 [i_0])))) || (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3 - 2] [i_0] = (min(2914393973, -4067));
                        arr_12 [12] [i_0] [i_2] [i_3 - 2] [i_1] = (((min((arr_2 [i_3]), 1)) << (-var_8 - 72632237)));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3 + 1] = ((((-4088 + (arr_3 [i_1] [i_1])))) && (arr_0 [i_1]));
                    }
                }
            }
        }
        var_14 = (((((arr_2 [i_0 - 1]) ? var_2 : var_5)) * ((var_8 ? (arr_10 [i_0] [i_0 - 1] [i_0] [9] [i_0] [i_0]) : (arr_4 [i_0])))));
        arr_14 [i_0] [i_0] = ((41 >> (-4079 + 4098)));
        arr_15 [i_0] [i_0] = (~4057);
    }
    var_15 &= ((((~(max(2100159245918204886, var_6)))) | var_3));
    var_16 = ((var_4 ? (((((4061 ? 9223372036854775798 : 210931918))) ? (((var_8 + 2147483647) >> (var_9 - 9452))) : (~var_7))) : 4058));
    #pragma endscop
}
