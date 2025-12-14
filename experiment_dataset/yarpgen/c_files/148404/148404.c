/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_11));
    var_14 *= var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (min(var_15, (((!((min(var_4, var_3))))))));
        var_16 &= max(((min((!var_9), ((!(arr_0 [4])))))), ((-((min(43, (arr_0 [8])))))));
        arr_2 [i_0] = var_6;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [10] [10] |= ((((912746218 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))) > (((max((arr_0 [4]), 0))))));
            var_17 |= (((max(var_4, (arr_4 [i_0] [3] [i_0])))));
            var_18 = ((-((min((arr_0 [i_0]), (arr_4 [i_0] [i_1] [i_0]))))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_19 ^= var_4;
            var_20 = (((arr_6 [i_2 + 1] [i_0]) ? (arr_0 [i_0]) : var_11));
            var_21 = (var_8 != (arr_6 [i_2 - 1] [i_0]));
            var_22 = (((arr_9 [i_0] [i_0]) ? (arr_1 [i_2 - 1]) : (arr_9 [i_0] [i_0])));
            var_23 = (~(arr_4 [i_0] [i_2 + 1] [i_2 - 2]));
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_24 = (!var_2);
            var_25 ^= -5591588394000266341;
        }
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            arr_14 [i_0] [i_4] = (min((arr_3 [i_4 - 1] [i_4 - 1] [i_0]), (arr_3 [i_4 - 2] [i_4 - 2] [i_0])));
            arr_15 [i_0] [i_0] = (i_0 % 2 == 0) ? ((min((((arr_13 [i_0] [i_4 + 2]) + (arr_13 [i_0] [i_4 + 2]))), (((-((var_6 ? var_1 : 0)))))))) : ((min((((arr_13 [i_0] [i_4 + 2]) - (arr_13 [i_0] [i_4 + 2]))), (((-((var_6 ? var_1 : 0))))))));
            var_26 *= 17070;
            var_27 = ((((((((arr_4 [i_0] [i_0] [i_0]) | var_5))) ^ var_10))) ? ((((max(var_12, var_5))))) : (min(-var_8, var_1)));
        }
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_28 ^= arr_13 [2] [i_5 + 3];
            var_29 = (max(var_29, (((!((((arr_9 [4] [4]) ? (arr_8 [10] [10] [i_5]) : 0))))))));
            var_30 ^= var_4;
        }
        var_31 = var_11;
        var_32 = -50;
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_33 ^= ((((max((arr_10 [i_5] [i_7] [i_5]), (arr_10 [i_7] [i_7] [i_7])))) ^ ((((arr_22 [i_5 + 3] [i_7 + 1]) && (arr_20 [i_5] [i_7] [i_7]))))));
                        arr_30 [i_5] [i_8] [i_5 + 3] = var_12;
                        var_34 = ((((((arr_0 [i_5]) ? (((~(arr_20 [i_5 + 3] [i_5] [i_5])))) : (arr_1 [i_5 + 2])))) && var_11));
                    }
                }
            }
        }
    }
    #pragma endscop
}
