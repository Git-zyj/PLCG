/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((min(((89 ? 8338735633984226194 : var_6)), (((17214 ? var_2 : var_6)))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((var_1 > (arr_1 [i_0] [i_0]))));
        var_13 = (arr_1 [i_0] [i_0]);
        var_14 = (max(var_14, (((((min(((min(8338735633984226181, 225))), ((~(arr_1 [i_0] [i_0])))))) ? (((!((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 32767)))))) : ((((!8338735633984226194) || ((min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = (max(((min(-13174, var_2))), (((-(arr_4 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_2] = ((((min(var_6, var_7))) ? (-2147483647 - 1) : (((25 == (arr_6 [i_1] [i_1] [i_1]))))));
            var_16 ^= (((min(((min(var_6, var_6))), (arr_5 [i_1]))) == var_9));
        }
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            arr_13 [i_1] = ((-(((11810003213076822674 ? 2147483647 : (arr_4 [i_1] [i_1]))))));
            var_17 = ((((min(48515, (min(4294967291, var_8))))) + ((((min(var_7, (arr_5 [i_1])))) ? 6636740860632728941 : (((77 ? 1017962005 : 655225133)))))));
        }
        arr_14 [i_1] = (((arr_3 [i_1]) / (arr_3 [i_1])));
    }
    var_18 += var_4;
    #pragma endscop
}
