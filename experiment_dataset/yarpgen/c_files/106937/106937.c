/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = ((((((arr_0 [i_1]) ? (arr_2 [i_0]) : 0))) ? (arr_2 [i_0]) : (max(7739217484290105091, (((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_1])))))));
            var_15 -= 248;
            var_16 = (max((((arr_0 [i_0]) << (127 - 120))), ((-5 ? 183 : (((((-127 - 1) + 2147483647)) << (arr_0 [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = (max(var_17, (((-(min(-4294967295, (((~(arr_0 [i_0])))))))))));
            arr_9 [1] [i_2] [1] = (max((((-(arr_4 [i_0] [i_2] [i_0])))), (((arr_6 [i_0]) ? (arr_3 [i_0]) : 90))));
            var_18 ^= -7739217484290105092;
            arr_10 [i_0] = (arr_6 [i_0]);
        }
        var_19 = (min(var_19, var_3));
        var_20 = (((arr_5 [i_0] [i_0]) <= ((~(max(-7739217484290105091, var_9))))));
        arr_11 [i_0] |= (max((arr_4 [i_0] [i_0] [i_0]), (((!((((arr_7 [i_0]) ? 768 : (-9223372036854775807 - 1)))))))));
    }
    var_21 += (-var_6 % -128);
    var_22 = (max(var_22, 8751862337373972558));
    #pragma endscop
}
