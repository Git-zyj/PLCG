/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((((((max(var_3, 236))) | -101)) | var_10));
                var_15 = var_5;
                var_16 = ((47906 ? var_10 : (((~6369302355148561415) ^ ((min(7300940493915466523, (-9223372036854775807 - 1))))))));
            }
        }
    }
    var_17 ^= ((~(4857690642772737448 ^ -23)));
    var_18 *= (min((((var_8 - (-12 <= 4294967284)))), var_2));
    var_19 = (max((-32767 - 1), ((1814420380 * (155 / 65535)))));
    #pragma endscop
}
