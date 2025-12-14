/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((max(var_10, 0)), ((~(min(0, 4))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 += 18446744073709551608;
                    arr_8 [i_1] [6] [i_1] [i_1] = (((min(9223372036854775680, 16)) == 242));
                    var_14 = 18446744073709551615;
                    arr_9 [i_1] [3] [i_1] = (((((arr_0 [i_0]) + (18446744073709551605 && 248))) << (((max(-var_9, (arr_2 [i_0 - 1] [1] [13]))) - 18446744073709522665))));
                }
            }
        }
    }
    var_15 = (max(((18446744073709551612 ? -101 : 18446744073709551605)), ((((max(var_8, 1)) <= (min(var_10, var_6)))))));
    #pragma endscop
}
