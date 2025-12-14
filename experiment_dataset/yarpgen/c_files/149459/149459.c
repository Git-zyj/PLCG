/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((0 ? 7 : -1920168266)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((-(min((arr_1 [i_0]), (arr_2 [i_1])))));
                var_17 += ((~((-1920168249 ? 1920168265 : -1920168221))));
                var_18 = (((((~(arr_1 [i_0])))) ? (((var_5 || (arr_1 [i_0])))) : 1920168248));
                var_19 = ((1920168249 ? -1920168227 : 120));
            }
        }
    }
    var_20 ^= var_14;
    var_21 ^= var_9;
    #pragma endscop
}
