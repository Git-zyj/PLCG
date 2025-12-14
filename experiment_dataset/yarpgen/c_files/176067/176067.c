/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 &= ((max(-1, (arr_2 [i_1]))));
                var_20 -= (((((13835058055282163712 != (arr_4 [i_0])))) == ((~(arr_2 [i_1])))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] [19] = (max(var_9, ((min(256121430, (1 << 0))))));
                    arr_10 [i_2] [i_1] [i_0] = var_14;
                }
            }
        }
    }
    var_21 = ((!((min(var_1, (-119063689 == var_18))))));
    #pragma endscop
}
