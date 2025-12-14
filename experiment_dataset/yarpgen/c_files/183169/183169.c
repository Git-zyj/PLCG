/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_10 ^= ((((((arr_8 [i_2] [i_2 + 1] [i_0]) >> (arr_8 [i_2] [i_2 + 1] [i_0])))) ? (((arr_8 [i_2] [i_2 + 1] [i_0]) ? (arr_8 [i_2] [i_2 + 1] [i_0]) : (arr_8 [i_2] [i_2 + 1] [i_0]))) : (((arr_8 [i_2] [i_2 + 1] [i_0]) << (37626 - 37610)))));
                        var_11 = (((1 == 2695015561851158069) ? 9223372036854775807 : -311393108));
                        var_12 -= ((6032479280356449602 != ((min((min(var_8, 6836167383342371408)), 96)))));
                    }
                    var_13 = var_4;
                }
            }
        }
    }
    var_14 = var_1;
    var_15 = var_7;
    #pragma endscop
}
