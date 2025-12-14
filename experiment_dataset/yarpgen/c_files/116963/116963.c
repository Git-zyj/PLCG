/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((((var_0 ? 32767 : 1749638725971501014))) ? (124 | -1749638725971501007) : -1749638725971501015)) + 9223372036854775807)) >> (((((~var_0) ? var_6 : (min(42745, 1267754873)))) - 4294939895))));
    var_14 = (min(var_14, -1749638725971501015));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((!(((44003 ? (arr_2 [i_1] [i_1]) : var_2))))) ? (arr_5 [i_1 - 1] [i_1 + 2]) : 18446744073709551615));
                var_15 = (((var_3 ? var_8 : (arr_0 [i_1 + 2]))) != ((((min((arr_4 [i_0] [i_0] [i_0]), 41863)) != ((46 ? (arr_4 [i_1 + 1] [0] [13]) : 49152))))));
                var_16 ^= var_4;
            }
        }
    }
    #pragma endscop
}
