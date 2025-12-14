/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = -var_5;
        var_14 ^= (((!140) || (((var_10 ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 + 1]))))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((58 ? (--50342) : 52));
        var_15 = (max((arr_0 [i_1]), 50342));
        var_16 = ((-var_2 ? (((arr_6 [i_1] [i_1]) << (6450816461687758153 - 6450816461687758136))) : ((((-(arr_6 [i_1] [i_1])))))));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_17 = ((!((((1798 && (arr_9 [i_2])))))));
        arr_10 [i_2 - 2] = (min((min(-230385858466821685, (arr_9 [i_2 - 2]))), (((-var_5 ? (arr_9 [i_2]) : (arr_9 [i_2 - 2]))))));
    }
    for (int i_3 = 3; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            var_18 = (min(var_18, ((((((max(15193, (arr_15 [i_4] [i_3] [i_3]))))) ? (((((arr_15 [i_4] [i_4 + 1] [i_4]) < var_9)))) : (((((var_0 ? var_8 : 74))) ? (min(443826667572282169, 443826667572282169)) : 112)))))));

            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                arr_20 [21] [i_4] [i_4] [i_3] = (((((-(((var_9 < (arr_11 [i_3] [i_3]))))))) ? ((-((max(50342, 15193))))) : (48 / 15193)));
                var_19 = (--75);
            }
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_23 [14] = var_1;
            arr_24 [i_3] = (((((((29 ? 255 : 0))) ? 27662 : (max((-9223372036854775807 - 1), 36026597995708416)))) | (max(var_1, (((arr_15 [i_3] [i_3] [i_3]) ? (arr_17 [i_6] [i_3]) : var_12))))));
        }
        arr_25 [13] [22] = (arr_16 [i_3] [i_3] [i_3 - 1]);
        arr_26 [i_3] [i_3] = 448;
    }
    var_20 = var_9;
    #pragma endscop
}
