/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = (((((65535 ? (arr_1 [i_0 + 2]) : -632457502))) ? (!var_3) : (arr_0 [i_0 + 3])));
        var_14 = 844990240;
    }
    var_15 ^= (max(var_8, ((((-31233 + 52515) >= (14098050876612990062 && 63473))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            {
                arr_7 [i_2] = var_6;
                arr_8 [i_2 - 2] [i_2] = ((var_12 || ((((9223372036854775791 / 63473) % ((var_3 % (arr_0 [i_1]))))))));
                arr_9 [i_2] [i_2] [i_1] = (((!0) <= (((!((max(var_9, (arr_4 [7])))))))));
            }
        }
    }
    var_16 -= var_2;
    #pragma endscop
}
