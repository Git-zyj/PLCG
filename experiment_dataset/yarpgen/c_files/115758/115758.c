/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_10 = ((((((arr_1 [i_0 + 1]) ? 1 : (arr_1 [i_0 - 1])))) ? (arr_1 [i_0]) : (((((1023 ? (arr_0 [i_0 - 1]) : (arr_1 [i_0])))) ? (arr_0 [i_0 + 2]) : ((max((arr_0 [i_0]), (arr_1 [i_0]))))))));
        var_11 ^= (((((3244940943 ? (((3244940941 >> (6116099672133000543 - 6116099672133000536)))) : 9223372036854775794))) || (((arr_1 [i_0 + 2]) != (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [17])))))));
        var_12 &= ((281337537757184 ? (((((arr_1 [i_0]) ? (arr_1 [1]) : (arr_1 [i_0 - 1]))))) : (arr_1 [i_0 + 4])));
        var_13 = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 |= ((((((((1 ? 3244940943 : 56206))) & ((-281337537757162 ? 1023 : 281337537757165))))) ? ((3849414856 ? (arr_6 [11] [i_1 + 1] [i_1] [i_0 + 1]) : (((arr_7 [i_3] [i_3] [1] [i_3]) ? (arr_1 [i_0 - 1]) : (arr_7 [i_0] [7] [i_0] [i_0]))))) : ((((((arr_6 [i_0] [i_0] [i_0 - 1] [i_0 + 1]) >> (((arr_1 [i_0]) - 38571)))) >> (((arr_1 [3]) - 38576)))))));
                        var_15 = (min(1703230654952051648, 64508));
                        arr_11 [i_1] [i_1] [i_2] [i_3] = (arr_5 [i_2] [i_3]);
                    }
                }
            }
        }
    }
    var_16 = 65535;
    var_17 = var_2;
    var_18 += (((((-(!1)))) ? var_2 : (((((var_7 ? var_8 : var_4))) ? var_4 : (6116099672133000540 / 356888224)))));
    var_19 = (max((var_0 * -var_6), (((!50718) ? -var_5 : (max(var_4, var_8))))));
    #pragma endscop
}
