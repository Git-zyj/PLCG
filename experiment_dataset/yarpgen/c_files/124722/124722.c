/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (min((((((var_2 ? var_12 : -1)) % var_11))), (((((var_0 ? -30512 : var_1))) ? ((226 ? 262115288585079183 : 254)) : var_12))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_15 ^= (arr_1 [i_0]);
            arr_6 [i_0] [i_1] [i_1] = (arr_4 [i_0] [i_0] [i_0]);
        }

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_16 += (0 || var_0);

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_17 = (((((+(((-103 + 2147483647) << (arr_1 [i_0])))))) + (((arr_13 [8]) | var_5))));
                            arr_18 [i_2] [i_2] [i_2] [i_4] [i_0] = ((((((((arr_10 [i_0] [i_2]) ? 17720 : var_0)) / -1879065312))) || (((-1 ? -var_6 : var_5)))));
                            var_18 ^= (arr_1 [i_3]);
                            var_19 = (arr_7 [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_20 = (arr_20 [i_0] [i_0] [i_3] [i_7]);
                            var_21 ^= 0;
                            arr_23 [5] [5] = (((((arr_3 [i_3] [i_6] [i_7]) || (arr_3 [i_7] [i_3] [i_0]))) ? ((min(65535, 65523))) : ((var_0 ? var_5 : (arr_3 [i_0] [i_2] [i_3])))));
                            var_22 = (arr_20 [11] [i_3] [i_2] [i_0]);
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_27 [i_0] [i_2] [i_3] [i_8] = (((((var_5 * (arr_9 [i_8])))) ? ((-(arr_9 [i_8]))) : ((min(1, (arr_9 [i_0]))))));

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_31 [i_0] [i_2] [6] [i_8] [i_9] [i_0] [i_0] = ((-1832541979288452511 ? (arr_3 [i_3] [i_3] [i_3]) : (((arr_3 [i_0] [i_0] [i_0]) ^ (arr_3 [i_0] [i_3] [i_3])))));
                        var_23 -= (((~3077259261828054420) ? 5 : 21179));
                        arr_32 [i_2] [i_2] [3] [i_8] [9] = var_3;
                        arr_33 [i_9] [i_8] [i_3] [i_2] [i_0] = ((((min(var_11, (arr_16 [9] [i_8] [i_3] [i_2] [i_0])))) & (max(((var_2 ? 3 : (arr_29 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]))), ((max(var_6, var_4)))))));
                    }
                    var_24 ^= ((~((-21 ? ((1642949514 ? 8848471186567569856 : (arr_30 [i_0] [18] [i_3] [i_8] [i_3] [i_2] [i_0]))) : 1))));

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_25 = (max(var_25, var_7));
                        arr_37 [i_0] [15] [i_0] [0] [i_8] [i_0] = ((((!(((-3378006166816486370 ? 220 : 213))))) ? ((min(15508, var_10))) : var_7));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            var_26 *= arr_39 [i_0] [6];
            var_27 = (-93 || var_4);
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            var_28 -= (arr_41 [i_0] [10] [14]);
            var_29 = var_12;
            var_30 ^= (var_0 != ((14775705336667759005 ? (arr_41 [i_0] [i_12] [i_12]) : var_11)));
        }
    }
    var_31 = var_5;
    #pragma endscop
}
