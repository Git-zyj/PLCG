/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 -= (((((((((var_2 > (arr_2 [i_1]))))) * (((arr_2 [i_0]) >> 2))))) ? ((((!54) | ((((-9223372036854775807 - 1) != 32767)))))) : (min((4294967295 & 65535), (((var_8 << (((arr_0 [3] [i_1]) + 47)))))))));
                arr_6 [i_0] [i_1] [i_1] = ((((((min(49, 26823))) >> (((((arr_5 [i_1] [i_0]) ? (arr_0 [5] [i_1]) : (arr_3 [i_1] [i_1]))) + 46)))) < ((((min(var_6, (arr_0 [i_0 + 2] [i_1])))) + (((arr_0 [1] [i_1]) * 0))))));
                var_11 = (max(var_11, ((((min((((1 > (arr_1 [9])))), var_1)) | ((min(((min(-12546, var_3))), (min(var_6, var_9))))))))));
            }
        }
    }
    var_12 = ((((min((var_4 | -1057975772), ((min(var_1, 65528)))))) >= ((((((228743411 ? -7407596143532045684 : 1)) + 9223372036854775807)) << (((-10315 + 10340) - 24))))));
    #pragma endscop
}
