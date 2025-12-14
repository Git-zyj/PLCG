/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 = ((((min(5952816500103218048, 1))) ? ((((arr_2 [i_0 + 1] [i_0]) * (arr_2 [i_0 + 3] [i_0 + 3])))) : (5952816500103218048 * -1)));
        var_15 ^= (arr_2 [i_0 + 3] [i_0]);
        var_16 = (min(((5952816500103218048 ? (-7 && 5952816500103218048) : -1)), (arr_0 [i_0] [i_0 + 2])));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, var_7));
        var_18 = (arr_0 [i_1] [i_1]);
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_19 *= (max((((((min(1, (arr_7 [i_2] [i_2])))) * (var_9 % 37)))), var_11));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_12 [i_4] [i_3] [i_2] [i_4] = ((var_8 >= (((arr_2 [i_4] [i_3]) & ((2 ? 13637934577681025828 : (arr_6 [9] [i_4])))))));
                    var_20 *= (!((((3072 == (arr_2 [i_2] [i_2]))))));
                    arr_13 [i_2] [i_4] = (((((arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 - 1]) >> (arr_8 [i_2 + 4] [i_2] [i_2 + 3]))) | (arr_8 [i_2 + 1] [i_2] [i_2 + 3])));
                    arr_14 [i_4] [i_4] = ((~((min((arr_6 [i_2 + 2] [i_2 + 2]), (arr_6 [i_2 + 2] [i_2 + 4]))))));
                }
            }
        }
        var_21 = (max(-37, (-9223372036854775807 - 1)));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                var_22 = (max(var_22, (min(((((123 && (arr_17 [2]))) && 0)), (((arr_4 [i_5]) && (arr_5 [i_5] [i_6 + 2])))))));
                var_23 ^= (-22 && 22789);
                arr_21 [i_5] [i_5] = (((max(7771143347441031192, (arr_19 [i_5] [i_6 - 1] [i_6 - 1]))) - 10675600726268520420));
                arr_22 [i_5] = var_11;
            }
        }
    }
    var_24 = (max(var_24, ((max(((((0 + 0) != (0 >= 1)))), (min((9223372036854775807 + -10), (var_8 * -4))))))));
    var_25 = (min(var_25, var_4));
    var_26 = 0;
    #pragma endscop
}
