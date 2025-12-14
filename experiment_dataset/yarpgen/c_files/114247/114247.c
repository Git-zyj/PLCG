/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 *= (max((((((var_8 ? 27572 : 13))) ? (min(2376304619, 27566)) : var_7)), var_1));
    var_21 = ((max((min(var_4, 27562)), ((max(var_9, 27576))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 |= ((var_12 <= (((15267 ? (2376304619 % -27598) : (((115 ? var_11 : var_9))))))));
                    arr_9 [i_1] [i_1] = (var_9 | 2101931427386268850);
                    var_23 ^= ((!((max(239, 115)))));
                    var_24 = ((var_6 ? 1 : 27556));
                    var_25 = ((((max(var_16, ((max(30, 31750)))))) ? ((58972 ? -27567 : 18446744073709551606)) : (((-27566 ? var_15 : 6564)))));
                }
            }
        }
    }
    #pragma endscop
}
