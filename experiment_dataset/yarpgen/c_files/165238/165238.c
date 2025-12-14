/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = (max(var_16, -59));
        var_17 = (min(var_17, 1539587138));
        var_18 = ((~(((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_1 [i_0 + 1])))));
        var_19 = (arr_0 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            {
                var_20 ^= 1262861954;
                var_21 = 1899276056;
                var_22 = (max((arr_5 [i_1 + 2] [i_1 + 1]), var_6));
                var_23 = ((2395691240 ? 2395691253 : 1899276056));
                var_24 = (min(var_24, (((!1899276049) != ((~((max((arr_2 [i_1 + 2]), var_6)))))))));
            }
        }
    }
    #pragma endscop
}
