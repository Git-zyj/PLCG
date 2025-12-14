/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_10 += ((((((arr_1 [i_0] [i_0]) << (30536 - 30536)))) || 288195191779622912));
        arr_3 [i_0] = (~var_4);
        var_11 = (arr_1 [i_0] [i_0]);
        var_12 ^= (((arr_2 [i_0 - 3]) - (arr_2 [i_0 - 1])));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_13 = (min(var_13, ((((((var_8 ? (arr_4 [i_1 + 1] [2]) : (arr_4 [i_1 - 1] [10])))) ? -32 : (((!(((var_7 ? 34988 : 36028797016866816)))))))))));
        arr_6 [i_1] = (((arr_5 [i_1]) ? (((((((arr_5 [i_1]) < var_5))) / 35000))) : (arr_5 [i_1])));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            var_14 -= ((((arr_7 [10] [i_3]) < 7)));
            var_15 = ((((36028797016866827 >> (((max(var_9, 36028797016866827)) - 36028797016866793))))) ? var_4 : (((((var_6 / (arr_8 [i_2])))) / (((arr_8 [i_2]) ? var_2 : (arr_7 [i_2] [i_2]))))));
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_21 [i_2] [i_3] [i_4] [i_5] [i_2] = ((((max(var_9, (arr_5 [i_2 - 1])))) && (arr_20 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2])));
                            var_16 = (((arr_11 [i_2] [i_2] [i_2]) ? ((17575265195860263047 ? 36028797016866837 : 18410715276692684789)) : (((min(var_4, 17575265195860263047)) * (((((arr_12 [i_6] [i_2] [i_2]) < var_0))))))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 4; i_7 < 10;i_7 += 1)
        {
            arr_24 [i_2] = (arr_23 [i_7]);
            var_17 = max((((arr_15 [i_7 - 1] [i_7 - 4] [i_7] [i_2] [i_7 - 2] [i_7]) ? 36028797016866818 : 8974444647120215388)), ((((arr_15 [i_7] [i_7 + 1] [i_7 + 1] [i_2] [i_7 - 4] [i_7]) ^ var_8))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    {
                        var_18 = (~(((18410715276692684788 && 22) ^ (min((arr_7 [i_2] [i_7]), var_4)))));
                        var_19 = (var_7 >> 11);
                        arr_29 [i_2] [i_2] [i_9] = ((var_0 ? var_9 : ((((((arr_19 [2] [i_7] [i_8] [i_9] [i_7] [i_9] [i_2 - 1]) - (arr_13 [i_2] [i_2])))) ? var_6 : ((var_2 ? var_7 : 47280))))));
                        arr_30 [1] [1] [i_2] [i_9] = var_4;
                        var_20 = (max(var_20, 4294967295));
                    }
                }
            }
            var_21 = (~19183);
        }
        for (int i_10 = 2; i_10 < 8;i_10 += 1)
        {
            var_22 = (min(var_22, ((((((arr_33 [i_10]) ? (arr_33 [i_10]) : (arr_33 [i_10]))) + ((var_1 % (arr_33 [i_10]))))))));
            arr_34 [i_2] [i_2] [i_2] = var_1;
            arr_35 [i_2] = (arr_33 [i_2]);
        }
        arr_36 [i_2] = 18410715276692684782;
    }
    var_23 *= (var_7 < 62795);
    var_24 &= var_8;
    #pragma endscop
}
