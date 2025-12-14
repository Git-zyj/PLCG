/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (min(((((arr_0 [i_0]) ? ((12 ? (arr_0 [i_0]) : 48)) : (max(var_7, (arr_0 [i_0])))))), (var_3 ^ var_14)));
        var_18 = (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (max(((14296447789180196550 * (!32750))), (((-(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = ((!((min((max(32741, var_4)), 19)))));
        arr_8 [i_1] = (((((!((10825697306480557953 && (arr_6 [i_1] [i_1])))))) & (max((((10825697306480557961 >= (arr_4 [i_1] [i_1])))), (((arr_6 [i_1] [i_1]) << (-8707 + 8712)))))));
        var_19 -= (max((min((((-2147483647 - 1) / var_14)), (var_12 - 61234))), (((3 ? var_1 : (arr_6 [i_1] [i_1]))))));
        arr_9 [i_1] [i_1] = ((~((max(40216, (max(var_0, (arr_6 [2] [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_20 -= ((((~(min((arr_3 [i_2] [i_2]), (arr_10 [i_2]))))) < (-8707 != -322296983)));
        var_21 *= (min(((((398677406 ? (arr_11 [i_2]) : 45628)) << (((min((-32767 - 1), var_11)) + 32775)))), ((((arr_6 [i_2] [i_2]) && var_11)))));
        var_22 = (((var_11 / var_13) < (((max(65535, (max((arr_1 [i_2]), 6))))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_23 = (max(var_23, (((~(((arr_5 [i_3]) ? var_11 : var_14)))))));
            var_24 = (((arr_3 [i_2] [i_3]) % var_10));
            arr_17 [i_2] [i_3] [i_3] = (var_4 - (7621046767228993672 + var_1));
            var_25 *= ((var_13 != ((((arr_4 [i_3] [i_2]) < 115)))));

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                arr_20 [i_2] [i_2] = (!4294967295);
                arr_21 [i_2] [i_2] [i_3] [i_4 + 1] = ((!(12751739468978527142 == var_14)));
                arr_22 [i_2] [i_2] = (((!-6511185269105128245) ^ (arr_18 [i_4 - 1] [i_3] [i_4] [i_4])));
            }
        }
    }
    var_26 = (~var_12);
    var_27 = ((max(var_7, var_6)));
    var_28 = (max((((var_5 > var_4) & var_14)), (((max(var_14, 6511185269105128245)) + (((max(var_6, 67))))))));
    #pragma endscop
}
