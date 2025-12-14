/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = ((((min(-1951463449, 29878))) | ((max((var_4 >= 9309246317911000316), var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 &= 9137497755798551300;
                    var_14 = (((!((max(-4937, 9309246317911000306))))));
                    var_15 = ((((min((arr_1 [i_2 + 1]), (arr_1 [i_2 - 1])))) ? var_1 : -51));
                }
            }
        }
    }
    #pragma endscop
}
