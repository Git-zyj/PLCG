/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (max(((((var_6 ? 1004754905 : 3290212391)) > 58962)), (((8 | 25) <= (3411750319 * var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 -= (((((var_10 < ((((arr_3 [i_1] [i_1] [i_0]) && 172884507808988340)))))) >> (((((6573 > var_7) ? (~9223372036854775806) : ((1694976596 ? 18446744073709551615 : -1)))) - 18446744073709551584))));
                var_13 = ((((!((min(18446744073709551615, 7479166165321218404)))))));
                var_14 = (max(-2237819304738270246, 1004754909));
            }
        }
    }
    var_15 = var_2;
    var_16 = (max(((max(var_2, (var_2 && 2251799813685247)))), var_4));
    var_17 = (((var_9 << (((((-1 + 2147483647) >> (1004754910 - 1004754908))) - 536870909)))) | ((((max(var_5, 7462))) ? (-117429452964618344 & var_2) : 35521)));
    #pragma endscop
}
