/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(-1, var_1)) ? -1 : var_11)));
    var_14 = (max(var_14, (((var_5 != ((var_1 >> (((min(1842748242319804896, 18202)) - 18196)))))))));
    var_15 = (min(((var_11 ? 33554431 : ((((-2145079855 + 2147483647) >> (var_11 - 143)))))), (var_2 * -19509)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 ^= (((((~((((arr_1 [22] [i_0]) < var_7)))))) ? var_8 : ((((arr_5 [i_2] [0] [i_2]) * (arr_2 [14] [i_1]))))));
                    var_17 = (((((9882 ? (arr_2 [i_0] [0]) : (arr_2 [i_0] [i_2])))) ? (((arr_2 [i_0] [i_1 - 1]) % (arr_2 [i_2] [i_1 - 1]))) : ((max((arr_2 [i_0] [i_2]), (arr_2 [i_0] [i_1]))))));
                }
            }
        }
    }
    var_18 -= (max(((((min(1006632960, -1)) - -var_9))), ((min(114, -4497922401469944743)))));
    #pragma endscop
}
