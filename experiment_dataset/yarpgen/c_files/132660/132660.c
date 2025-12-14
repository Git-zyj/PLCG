/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_2));
    var_11 = (max((((((max(var_4, var_0))) ? var_8 : (var_2 + var_6)))), ((var_0 ? ((var_5 ? var_8 : var_9)) : var_4))));
    var_12 = (max(((var_4 ? (((32756 ? var_4 : var_1))) : ((0 ? var_0 : var_7)))), (((var_8 ? -14 : ((var_7 ? var_4 : var_7)))))));
    var_13 = 220;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, 255));
                    var_15 = (min((arr_3 [i_1] [i_1] [i_2]), ((((min(2147483623, var_4))) ^ (var_3 * var_9)))));
                    var_16 ^= max((((arr_2 [i_2] [i_2]) ? 24 : (arr_2 [i_0] [i_0]))), var_2);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_17 |= (((~((var_1 | (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4 + 2]))))));
                                arr_13 [3] [i_1] [i_2] [i_4] [i_3] [i_4] = (((((((min(2147483633, var_8))) ? (min(var_0, var_0)) : 1290565522))) ? ((((227 >= (arr_3 [i_2] [i_1] [i_0]))))) : 25));
                                var_18 = (max(var_18, ((((arr_12 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]) ^ var_2)))));
                                var_19 = (arr_6 [i_0] [i_2] [i_4]);
                                var_20 = ((((((!(((var_4 ? (arr_3 [i_4] [1] [i_0]) : 24))))))) <= (arr_10 [i_0] [i_1] [i_2] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
