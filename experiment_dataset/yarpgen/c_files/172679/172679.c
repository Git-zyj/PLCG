/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_9;
        arr_4 [i_0] [i_0] = (((((((((arr_2 [i_0] [i_0]) ^ (arr_1 [3])))) + var_8))) ? (arr_1 [i_0]) : ((max(var_3, (arr_0 [i_0]))))));
        arr_5 [i_0] = (max((arr_0 [i_0]), (max((min((arr_0 [i_0]), (arr_2 [i_0] [i_0]))), (((var_8 != (arr_2 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (min(var_14, (((~((~(((var_6 != (arr_8 [2])))))))))));
        var_15 = (((((((-(arr_7 [i_1]))) & (((max(-1, 18621))))))) ? (max(((-18626 ? 18446744073709551615 : 1)), ((min((arr_9 [i_1]), -217920076))))) : (max(var_1, ((((arr_1 [12]) ? var_8 : (arr_2 [i_1] [i_1]))))))));
        var_16 -= (((min((min(var_6, (arr_9 [i_1]))), ((min(var_4, var_4))))) & var_13));
        var_17 = (max((max(0, 62176)), (((-(((var_9 < (arr_9 [i_1])))))))));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_18 = (max((((arr_7 [1]) ? (arr_10 [i_2 - 1] [i_2 - 1]) : (arr_7 [0]))), (~var_1)));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    var_19 = ((+((~(((arr_2 [i_3] [12]) ? (arr_13 [i_2] [i_2]) : (arr_2 [i_2] [i_2])))))));
                    var_20 = (min(((((arr_13 [i_2 - 1] [i_3 + 1]) > (arr_0 [i_2 - 3])))), (min((max(var_10, (arr_8 [i_4]))), (((arr_7 [i_4]) & var_12))))));
                    var_21 = (min(var_21, ((((((arr_9 [3]) || (arr_9 [i_2]))) ? (((var_1 && var_13) ? (12810439890676721399 || 123) : (arr_7 [i_3]))) : (((var_12 ? (!var_13) : (arr_11 [i_2 - 2])))))))));
                    arr_17 [i_4] [i_4] = (arr_9 [i_2]);
                    var_22 = (((min(((-(arr_14 [i_2 - 1] [i_2] [i_2 - 1]))), (((arr_2 [i_4] [i_4]) ^ var_13)))) != ((~(arr_6 [i_4] [i_4])))));
                }
            }
        }
        arr_18 [i_2] = var_11;
        var_23 = ((((((var_4 & var_4) ^ var_4))) & (max(((var_2 ? (arr_10 [i_2] [i_2]) : (arr_0 [i_2]))), ((((arr_11 [i_2]) ^ (arr_0 [i_2]))))))));
    }
    var_24 = var_13;
    #pragma endscop
}
