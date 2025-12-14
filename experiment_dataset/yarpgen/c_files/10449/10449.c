/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 |= min(var_12, (((((var_9 ? 39 : -12379)) == -39))));
    var_16 = (max(var_16, (((10391833399971863520 ? ((-((-1 ? 216 : var_8)))) : var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (!44);
                    var_18 = ((-(min(((32 ? -9223372036854775802 : 65527)), ((((arr_3 [i_1] [i_0] [i_2 - 1]) / var_11)))))));
                    arr_8 [i_1] [i_0] [i_1] = (((((arr_4 [i_2 - 1] [i_1]) ? (arr_4 [i_2 - 2] [i_1]) : (arr_4 [i_2 - 3] [i_1]))) != (min(-1, (arr_4 [i_2 + 2] [i_1])))));
                    arr_9 [i_1] [i_1] = (-(arr_2 [i_2 - 3]));
                    arr_10 [i_1] = (((min(1, 55))) | 0);
                }
            }
        }
    }
    #pragma endscop
}
