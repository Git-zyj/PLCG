/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_15;
        var_20 = (arr_3 [i_0]);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_21 = (arr_5 [i_1]);
        var_22 = (((-67108864 & 134152192) == ((min((arr_6 [i_1 - 1] [i_1 + 1]), (arr_1 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_23 = (arr_9 [i_1 + 1]);
                    var_24 = var_18;
                    var_25 &= (((1 * -67108864) == (((arr_2 [i_1] [i_1 - 1]) * (1513724748 == 1)))));
                    var_26 ^= var_17;
                    arr_13 [i_1] [i_1] [i_1] = (arr_2 [i_1] [i_3]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_27 = min((min(69, -67108864)), ((((arr_1 [i_4]) == (arr_14 [i_4] [i_4])))));
        var_28 = (min(var_28, var_11));
    }

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_29 = (arr_18 [i_5]);
        arr_20 [i_5] = var_2;
        var_30 = (arr_19 [1]);
        arr_21 [10] [10] &= (-134152206 == 1);
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        arr_24 [i_6] [i_6] = ((max((min((arr_17 [i_6 + 3]), (arr_17 [i_6 + 3]))), var_17)));
        var_31 = (1 & -134152193);
        var_32 &= var_2;
        var_33 = (((arr_16 [i_6]) ^ ((((max(16384, 4619))) | ((min(var_1, (arr_22 [i_6]))))))));
    }
    for (int i_7 = 3; i_7 < 22;i_7 += 1)
    {
        arr_28 [i_7] = var_9;
        var_34 = (((((max((arr_25 [i_7]), (arr_27 [i_7 - 2]))))) * (arr_25 [i_7])));
        var_35 &= (arr_25 [i_7]);
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_36 = (arr_27 [i_8]);
        arr_33 [i_8] = (((((max((arr_32 [i_8] [7]), var_19)))) * (((var_13 == (arr_26 [i_8]))))));
    }
    #pragma endscop
}
