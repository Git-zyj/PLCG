/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (((((((max(10, 2227578041)) != (arr_2 [i_0])))) <= 1)))));
                arr_5 [i_0] [i_1] [i_0] = (min(((-(((arr_0 [i_1 - 3] [i_0]) ? (arr_0 [i_0] [i_1 - 2]) : 77)))), ((((~var_1) != ((max((arr_2 [i_0]), (arr_3 [2])))))))));
                arr_6 [i_1] [9] = (arr_4 [i_0] [i_0]);
                var_11 = (min(((((max((arr_0 [i_0] [i_0]), var_3))) & 13851705641783319952)), ((min((arr_0 [10] [i_0]), (((arr_3 [i_1]) ? (arr_0 [i_0 + 2] [i_1]) : (arr_0 [i_0 - 2] [i_1 + 1]))))))));
                var_12 = (max(((((arr_3 [i_0 - 2]) >= (arr_2 [i_0 - 2])))), (((((arr_4 [i_0] [i_1 - 1]) / (arr_0 [i_0] [i_0]))) % (((min(var_2, (arr_1 [i_0] [i_0 + 2])))))))));
            }
        }
    }
    var_13 = ((((var_4 ? (var_7 + var_2) : (~9392653743572164341))) <= var_2));
    var_14 ^= (min(var_4, (1 - 1)));
    var_15 = (((((var_2 > var_4) - var_0)) + var_0));
    #pragma endscop
}
