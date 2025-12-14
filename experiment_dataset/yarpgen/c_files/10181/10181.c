/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((((31 < (~var_9))) ? var_9 : var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = ((+((max((arr_6 [i_0] [i_1] [i_2]), (arr_6 [i_0] [i_0] [i_2]))))));
                    var_12 = (arr_1 [i_1]);
                    var_13 = var_4;
                    var_14 = (max((((var_9 ^ ((1144267852 ? var_7 : -32))))), ((~(arr_4 [3] [i_1] [i_1] [i_1])))));
                    var_15 = ((max(var_0, var_8)));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_16 |= ((-(((((119 ? var_6 : var_7))) ? ((var_9 ? var_2 : (arr_8 [i_3]))) : var_5))));
        var_17 = ((((max(var_3, (!var_1)))) ? ((max(48, 12288))) : 32768));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_12 [23] [i_4] = -var_4;
        arr_13 [i_4] [i_4] = var_4;

        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            var_18 = ((var_7 ? 18 : ((1 % (max(var_3, 3150699444))))));
            arr_17 [i_4] [i_4] [i_4] = ((+((~((((arr_14 [i_4] [i_4] [i_4]) >= var_9)))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                arr_22 [8] [i_6] [i_7] = ((4010068583260823972 ? 1144267852 : 18));
                var_19 = (min(((max((!53948), (!-13)))), (max((arr_14 [4] [i_6] [i_6]), (arr_18 [i_6])))));
                var_20 -= (max(32599, -var_3));
                var_21 = (max((max(31, (226 || var_3))), 18));
                var_22 &= ((((((!((max(var_2, 7745481829645631992))))))) > -7745481829645631968));
            }
            for (int i_8 = 4; i_8 < 23;i_8 += 1)
            {
                var_23 = -1827812534;
                var_24 -= (((((~(((arr_19 [i_6]) ? var_9 : 2678))))) + 10701262244063919623));
                arr_25 [i_4] [i_4] [i_4] = (((var_7 - 11) ? ((var_0 ? ((var_7 ? var_2 : var_3)) : var_1)) : 4294967295));
                var_25 = (min((min(14, 15)), 3268));
            }
            arr_26 [2] = ((var_8 ? var_2 : var_9));
            var_26 = (max(16566, ((min(var_7, (arr_10 [i_4] [i_4]))))));
            arr_27 [i_4] [i_6] = (min((min(var_5, var_8)), ((((var_10 ? (arr_20 [i_4] [i_4] [i_6]) : var_7))))));
            var_27 *= (arr_10 [i_6] [i_4]);
        }
        for (int i_9 = 2; i_9 < 23;i_9 += 1)
        {
            var_28 = ((((max(((min(var_5, 78))), (((arr_24 [i_4] [1] [i_9]) ? var_9 : var_5))))) ^ -7825522011581333975));
            arr_32 [i_4] = 1;
        }
        var_29 = (min((arr_16 [i_4] [23] [23]), ((min(3119881363, (arr_18 [i_4]))))));
    }
    #pragma endscop
}
