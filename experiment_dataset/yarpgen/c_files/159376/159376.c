/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 = 164;
                    var_11 += var_5;
                    var_12 = ((((-(arr_1 [i_0 + 4]))) < (~51559)));
                }
            }
        }
        var_13 = (min(var_13, (((((((~(arr_5 [i_0 + 3]))) + 2147483647)) >> (((((317900316 ? var_2 : var_8))) / var_1)))))));
        arr_6 [i_0] = 16320;
    }
    var_14 = (((((var_1 ? (var_5 ^ var_7) : var_1))) ? (((((min(var_6, var_7)))) / 14308939049882151120)) : 16374));
    #pragma endscop
}
