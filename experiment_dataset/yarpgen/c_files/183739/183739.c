/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 -= (arr_4 [14] [i_1] [i_1]);
                    var_15 = 22;
                    arr_8 [i_0] [i_0] [i_0] = ((~(max(((5653715107522997366 ? 1884618158 : -5653715107522997366)), (var_2 >= 33546240)))));
                }
            }
        }
    }
    var_16 ^= 477488306662026869;
    var_17 = (max((((var_4 == ((5653715107522997366 ? 16063532438252508495 : 16063532438252508495))))), var_8));
    var_18 ^= var_13;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {

                    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_3] [i_6] [i_4] [i_5] [i_6] = ((((max(477488306662026869, (arr_13 [i_6 - 1])))) ? ((-(arr_6 [i_6] [i_4] [1] [i_6]))) : (arr_7 [i_6] [i_4] [i_4])));
                        var_19 |= min(((56667 / (arr_5 [i_6 + 1] [i_6 + 1] [0]))), 65530);
                        arr_20 [i_5] [i_6] = (arr_14 [i_3] [i_4] [3]);
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, (((((((!var_3) <= var_11))) / ((((((arr_15 [1]) ? (arr_13 [i_3]) : var_11))) ? (var_11 != var_0) : ((-112 ? var_4 : -102)))))))));
                        var_21 = (((((arr_13 [i_3]) ^ var_4)) >= ((~(arr_13 [i_3])))));
                    }
                    var_22 = (((((((arr_12 [i_3] [i_4] [12]) || 3084181377)) ? 44137 : (arr_11 [i_5 + 4] [i_5 + 3]))) / (((((((arr_4 [22] [22] [i_5 + 2]) * var_1))) ? (((((arr_3 [4] [i_4]) == 2047)))) : 2383211635457043120)))));
                    var_23 = (max(((+((((arr_13 [i_3]) > (arr_18 [i_5] [2] [2] [i_3])))))), -54));
                    var_24 = ((477488306662026869 ? (arr_18 [i_3] [i_3] [4] [i_3]) : 0));
                    var_25 = ((+(((arr_11 [i_5 + 2] [i_4]) ? (arr_11 [i_5 + 4] [i_4]) : (arr_4 [0] [i_4] [i_4])))));
                }
            }
        }
    }
    #pragma endscop
}
