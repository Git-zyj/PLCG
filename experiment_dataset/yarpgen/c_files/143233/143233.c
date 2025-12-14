/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((((-27297 % ((8268113631087468925 ? (arr_1 [i_0] [i_1 + 2]) : -126)))) + 2147483647)) << (((((((arr_1 [i_1 + 1] [i_1 + 1]) ? var_8 : (arr_1 [i_1 + 2] [i_1 + 2]))) + 65)) - 26)));
                arr_6 [i_1] [i_0] [i_1 - 1] = ((-4264550595734190185 ? 50225 : -8268113631087468925));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_19 = (((((min(-109, 14)))) == ((~(arr_2 [i_2] [i_2] [i_2])))));
        var_20 = (((58 ? var_17 : (arr_3 [18]))));
        arr_9 [i_2] = (min(-2, 4294959104));
    }
    #pragma endscop
}
