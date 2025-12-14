/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (arr_5 [i_0] [i_0] [i_1]);
                var_16 = (min(var_16, (((((((-var_7 != (max(65200, -9153883983082776945)))))) > ((-(arr_2 [i_1]))))))));
                arr_6 [i_0] [i_1] [i_0] = ((!((((65200 ? (arr_5 [i_0] [i_0] [i_0]) : var_3))))));
                var_17 = (~((~(arr_4 [i_0]))));
                var_18 -= ((~(((65214 > 77) ? (arr_5 [i_1] [i_1] [i_0]) : ((var_6 / (arr_2 [i_0])))))));
            }
        }
    }
    var_19 = (min(((((-81 + 2147483647) >> 6))), ((6 - (((min(6, 336))))))));
    var_20 = -613265890;
    var_21 -= (var_13 ? (max(((var_7 ? 0 : var_0)), var_1)) : (((((((0 << (var_2 + 6008778166261111764)))) != var_14)))));
    #pragma endscop
}
