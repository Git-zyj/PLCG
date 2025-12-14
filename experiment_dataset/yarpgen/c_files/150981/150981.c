/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((1879048192 / 1552538039280463173) ^ ((max(1879048195, 428572854)))))) < ((var_6 ? ((428572854 ? var_7 : var_16)) : (1879048192 / var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((-1879048192 ? 2539980707322406498 : (arr_2 [i_0 + 3] [i_1 - 2]))) >= (!0))))));
                var_19 ^= 1879048195;
                var_20 -= (((((~(arr_2 [i_1 - 3] [i_0 + 2])))) ? ((((arr_2 [i_0 + 1] [i_1 - 1]) ? (arr_2 [i_0 - 1] [i_1 - 2]) : (arr_2 [i_0 - 2] [i_1 - 2])))) : ((1411746209846001671 ? 12246176055710000286 : 28823))));
                var_21 ^= ((~(((((-1879350856 + 2147483647) << (428572854 - 428572854))) ^ ((~(arr_0 [i_1])))))));
            }
        }
    }
    var_22 += ((!(((159 ? -1879350852 : 157)))));
    #pragma endscop
}
