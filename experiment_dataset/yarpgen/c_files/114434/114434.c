/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((-(max(2164869071, 0)))) * var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = 2130098224;
                    var_15 ^= (min(2164869059, ((7891108781018353967 | (max(17454115232260066165, var_0))))));
                    var_16 = (max(((32767 ? 4360311867995117669 : 4360311867995117669)), -var_4));
                }
            }
        }
    }
    var_17 = (((((-((var_8 ? var_10 : 4127900317))))) ? var_6 : (((3 ? 7891108781018353967 : 2064187032)))));
    #pragma endscop
}
