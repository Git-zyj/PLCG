/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((((-(((arr_5 [12]) | -1))))) ? ((((arr_4 [i_0]) + 0))) : (max(var_13, (1624007391877526286 || var_7))))))));
                var_16 = ((!((min(16133358262402466386, var_6)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [8] = ((var_5 ? (1 || 0) : (((((arr_9 [i_0] [i_1] [i_0] [i_3]) ? 1 : 31))))));
                            var_17 ^= 3706658968;
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] = min(((min(var_12, (-1624007391877526286 || 0)))), ((~(min(var_10, 127)))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] = ((((((arr_5 [i_3 + 1]) ? (arr_5 [i_3 - 2]) : (arr_5 [i_3 - 3])))) != var_11));
                        }
                    }
                }
                var_18 = (-2147483647 - 1);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [1] [i_4] [5] [i_0] = max((((0 ? 16 : 1624007391877526286))), (((-(2046847277 % -127)))));
                                var_19 = var_14;
                                var_20 = (min(var_20, (((((~(((arr_2 [i_1] [1]) ^ 1))))) ? (arr_21 [i_0]) : ((var_12 ^ (((arr_19 [i_6] [i_6]) ^ (arr_5 [14])))))))));
                                var_21 ^= ((((~(arr_7 [i_1] [i_6] [4] [i_6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            {
                arr_30 [i_8] [i_8] = ((((1 != -107) ? ((var_8 ? (arr_9 [i_7] [i_7] [i_8] [i_8 + 2]) : var_11)) : (arr_10 [i_7] [i_7] [i_7] [i_7] [i_8] [0]))));
                arr_31 [i_8] = (max(1, 0));
                arr_32 [i_8] [i_8] = (((((1 ? 1 : 3080387014))) ? -50 : (((16 == (arr_8 [i_7] [i_7] [i_7] [i_8]))))));
            }
        }
    }
    #pragma endscop
}
