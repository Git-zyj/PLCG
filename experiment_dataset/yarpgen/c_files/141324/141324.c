/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(215, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 += (577181371 ? (((arr_5 [i_0]) ^ 21851)) : (0 > 0));
                arr_6 [i_1] &= (+((((arr_3 [i_0] [i_1] [i_1]) == -1643623869))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    arr_14 [i_2] [i_2] [6] = ((arr_10 [i_4] [i_3] [i_2]) * (((((arr_7 [i_4 + 1] [i_3]) <= 0)))));
                    arr_15 [i_2] [i_3] [i_2] [i_4] = (((4294967295 != 8372224) < 4294967295));
                    arr_16 [i_2] = (arr_13 [i_2] [i_3 - 2] [i_2]);
                }
                for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    var_16 *= max((min(4294967285, 65535)), ((((max(4294967295, (arr_17 [i_2] [14] [i_5]))) >= (arr_12 [i_5] [i_5] [i_5 + 1] [i_5 + 1])))));
                    arr_19 [i_2] [i_3] = ((-1286549216 ^ (((((65535 || (arr_12 [i_2] [i_2] [i_3] [i_5]))) ? (!65535) : (((arr_17 [i_2 + 3] [i_2] [i_5 + 1]) ? (arr_7 [0] [i_2]) : -1320973647)))))));
                    var_17 = (max(var_17, (arr_18 [7] [i_3] [9])));
                }
                for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_18 = (max(var_18, ((min((arr_20 [i_3 - 2] [i_3 - 1] [i_3 + 1]), (-0 >> 22))))));

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_25 [i_2] = (((arr_10 [i_2 - 2] [i_2 + 2] [i_2 - 1]) * ((((arr_8 [i_2 + 2]) * 77)))));
                        arr_26 [i_7] [i_3] [i_7] [i_7] [4] [i_7] &= ((((-((1984 ? (arr_20 [i_2] [i_3 - 1] [i_2]) : (arr_18 [i_2] [i_2] [i_7]))))) < (arr_18 [i_6 + 3] [i_3 + 1] [i_2 + 2])));
                    }
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        arr_30 [i_2] [i_6 + 4] [i_3 + 2] [i_2] = (min((arr_27 [i_2] [5] [i_8]), ((-(((arr_29 [i_2] [i_2] [i_2] [i_2]) / 4294967295))))));
                        var_19 = ((((~(arr_27 [i_2] [i_2 - 1] [i_2]))) ^ ((~(arr_27 [i_2] [i_2 - 1] [i_2])))));
                    }
                    arr_31 [i_2] [8] [i_2] [i_2] &= 1286549216;
                }
                for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    arr_34 [i_2] [i_2] = 20;
                    arr_35 [i_2] [10] &= (max(((!(arr_24 [i_2 - 1]))), 1));
                }
                var_20 = (max(var_20, ((((-(arr_27 [i_2 + 3] [i_3 + 1] [i_2])))))));
                arr_36 [7] [7] [i_2] = ((57925 ? (((12300015515581707920 >> (arr_32 [i_2])))) : ((((((((arr_7 [i_2] [i_3 - 1]) ? (arr_29 [i_2] [2] [i_2] [i_3]) : 1))) && ((max(32760, 183)))))))));
                arr_37 [i_2] [i_3 - 3] [i_3] = (arr_13 [i_2 - 1] [i_3] [i_2]);
                arr_38 [i_2] [i_3] [i_2] = 4;
            }
        }
    }
    var_21 &= var_7;
    #pragma endscop
}
