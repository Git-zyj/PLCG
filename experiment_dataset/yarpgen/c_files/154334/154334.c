/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = (max(1903699327, ((~(-1903699327 != 1)))));
                var_11 = (((((-1903699314 == 65) ? (596048326 < 1903699344) : (53980 / 84))) + ((~(11502 && 11516)))));
            }
        }
    }
    var_12 = (max(var_12, ((min(214, (max(((1903699341 ? 1903699327 : 596048319)), ((max(1815391571, 40746))))))))));
    var_13 = (((var_5 + 2147483647) >> (((((((-1815391570 | 22459) + 2147483647)) << (-1 < 1))) - 664186748))));
    var_14 = (max(var_14, (((((((2746962435 & 1815391588) <= (2746962435 + 11516)))) - (((var_0 < (((-1467665963123296821 + 9223372036854775807) >> (1548004857 - 1548004813)))))))))));
    #pragma endscop
}
