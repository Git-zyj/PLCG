/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((((-1 ? ((var_9 ? var_5 : var_5)) : -0))) && var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 = (((((1 ? 31 : 32767))) ? (((((1 ? var_5 : 1))) ? var_10 : (((32755 >= (arr_6 [i_0] [i_0])))))) : -6));
                var_15 = (((((183 >> (32767 - 32750)))) ? 5109886457902235694 : 1));
                var_16 = ((1 / ((-(max(-4845561332061738902, 15710121954233815120))))));
                var_17 = (min(var_17, (((((((-9223372036854775807 - 1) ? ((((arr_1 [i_0] [i_1 + 1]) != (arr_1 [1] [1])))) : ((223 ? 1 : 183))))) > (arr_1 [3] [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
