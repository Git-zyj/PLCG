/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = ((((var_3 ? (48056 + 65519) : ((5955175142324522084 ? 65519 : 8402)))) - (((-1745545710 ? 1745545709 : 17)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (min(0, var_19));
                    var_23 = -1745545710;
                }
            }
        }
        var_24 ^= var_11;
        arr_8 [i_0] [i_0] = ((var_5 ? 97 : ((65534 * ((240 ? -23884 : 5673))))));
        arr_9 [i_0] = (min(((48056 ? 985780106 : (arr_0 [i_0 + 1] [i_0 + 1]))), ((((max(885, 4314459542993992281))) ? -5064575635465303992 : -32766))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (max((((((239 ? var_0 : var_8))) ? (max(var_19, 985780106)) : (((max(var_3, -23884)))))), (((65519 ? (-1745545710 <= -5064575635465303992) : (-32767 - 1))))));
        arr_15 [i_3] = max((((((arr_6 [i_3] [i_3]) ? (arr_4 [i_3]) : var_10)) - 239)), 144);
        var_25 = ((24 ? (((-2147483647 - 1) ? (arr_2 [i_3] [4]) : (((arr_7 [i_3] [i_3] [i_3] [i_3]) ? 1 : var_14)))) : (arr_5 [i_3] [i_3] [i_3])));
        var_26 = -759900372;
    }
    #pragma endscop
}
