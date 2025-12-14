/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, var_13));
        var_15 *= (min((min(((min((arr_1 [i_0] [0]), (arr_0 [10])))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : 11)))), ((min(0, -32)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [8] = (min(var_6, var_7));
                    var_16 = (max(var_16, (((-7102148970941875571 ? 32 : 49152)))));
                    arr_9 [i_0] [i_1] [i_2] = ((+((-121 ? (arr_1 [i_1 - 1] [i_2]) : (arr_5 [i_1] [i_1 - 1] [i_1 - 1])))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_17 = var_3;
        var_18 += (max((((17099 ? (arr_10 [i_3]) : 17))), ((2305843009212645376 ? (((var_12 | (arr_0 [i_3])))) : (18 | 9563545328766868036)))));
        var_19 = (max((min((arr_0 [i_3]), (arr_5 [i_3] [i_3] [i_3]))), var_8));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    {
                        var_20 = ((((arr_14 [i_3]) >= (((min((arr_4 [9] [i_4]), (arr_18 [i_6 - 1] [i_5 - 2]))))))));
                        var_21 |= (((((((min(16388, (arr_18 [i_4 - 1] [7]))))) * (((arr_11 [i_3] [i_5 - 3]) / (arr_1 [11] [i_4 - 1]))))) | (arr_13 [i_5 + 1])));
                        var_22 = (min(245, (arr_1 [i_3] [4])));
                        arr_22 [i_5] [i_6 - 1] [i_5] = (max(((((max(65532, 16289227334413933354))) ? 2632981341 : -41)), ((((arr_6 [i_5 - 3] [4] [11] [i_5 - 3]) ? (arr_6 [i_5 - 3] [i_5] [i_5 - 2] [i_5 + 1]) : (arr_6 [i_5 - 1] [i_5] [i_5 - 3] [i_5 - 3]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        var_23 = (arr_11 [5] [4]);
        var_24 = ((!(((4294967295 ? var_13 : 4226233679656131040)))));
        var_25 = (max(var_25, ((((arr_1 [i_7] [i_7]) | var_12)))));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = -49152;
        var_26 = (max(var_26, (arr_13 [i_8])));
    }
    var_27 += max((~3831323656), var_12);
    #pragma endscop
}
