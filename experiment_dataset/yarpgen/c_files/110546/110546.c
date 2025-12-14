/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 6;i_4 += 1)
                        {
                            {
                                arr_17 [9] [i_2] [i_2] [i_2] [i_2] = (max((((arr_9 [i_1 - 1]) ? (arr_9 [i_1 - 1]) : var_7)), (arr_9 [i_1 - 1])));
                                var_18 = (max(0, 262143));
                            }
                        }
                    }
                }
                var_19 = var_8;
                var_20 = (max((max(((((arr_13 [i_0] [i_1]) ? -1825361329 : var_13))), (max(114, 61113007402422788)))), ((((min(939524096, 0)) % (min(var_6, 2036257482)))))));
                var_21 = ((max((1 != 46), ((115 && (arr_6 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_22 ^= ((1237704220201199769 ? ((13 ? -912788737 : -754944544)) : -1825361324));
                            var_23 *= (arr_21 [i_6]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    arr_30 [9] [i_8] [i_9] = ((4294967283 ? 1718602145 : 912788737));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_24 &= ((~((~(arr_32 [i_11 - 1] [i_11 - 1] [i_10 - 2] [i_10 - 2])))));
                                var_25 ^= ((((-14 ? (arr_26 [i_7] [i_8]) : ((754944544 ? var_0 : var_5))))) ? ((~(min(var_6, (-2147483647 - 1))))) : (max((((arr_25 [i_7]) ? var_13 : (arr_31 [i_7] [i_8] [i_9] [i_7] [i_7]))), ((var_11 ^ (arr_32 [i_11] [i_10] [i_9] [i_8]))))));
                                var_26 *= (~-0);
                            }
                        }
                    }
                    var_27 *= ((-(min((arr_27 [i_7]), 4923776834734715023))));
                    var_28 -= (min((((arr_27 [i_7]) | (max((-2147483647 - 1), var_2)))), (!var_17)));
                    var_29 = (max(((1944471751 ? 1205355169 : 2147483647)), (((arr_32 [i_7] [i_8] [i_9] [i_7]) + var_7))));
                }
            }
        }
    }
    #pragma endscop
}
