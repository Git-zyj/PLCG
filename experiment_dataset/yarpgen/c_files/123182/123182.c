/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((var_9 ? var_2 : var_11))) ? ((var_5 ? -4378443793561900900 : var_7)) : (var_7 % 215)))) && var_8));
    var_14 = (min(var_11, (48 | var_11)));
    var_15 = (((((17543243275410267086 - var_8) && (9 * var_1))) ? var_10 : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_0] [i_1] [i_2]);
                    arr_8 [i_2] [i_1] = (min(((((arr_6 [i_2] [i_1] [i_0]) / (arr_0 [i_1])))), ((-(arr_5 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = ((((50331648 ? (arr_4 [i_1] [i_3] [i_4]) : -2064108683)) / ((-var_3 ? ((min((arr_2 [i_1]), (-32767 - 1)))) : 104))));
                                var_17 = (min(var_17, (((var_5 ? (((arr_2 [i_1]) ? (arr_2 [i_3]) : (arr_2 [i_0]))) : ((((var_10 ? (arr_0 [i_0]) : var_8)) & (arr_6 [i_0] [i_1] [i_0]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((((((min(903500798299284530, 1023122583))) ? ((246 ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0]))) : (3482236258297293635 ^ var_3))) == (((-1115345014 ? ((458687876 ? var_8 : -1)) : (arr_6 [i_0] [1] [i_5 - 2])))))))));
                                arr_20 [i_0] [i_5 - 2] [i_2] [i_2] [i_0] [i_0] [i_6] = ((~(((arr_16 [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 2] [i_5 - 2]) ? (max((arr_5 [i_0] [i_1]), 0)) : (arr_11 [i_0] [0] [1] [i_5 - 2] [i_6] [i_2] [i_5 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
