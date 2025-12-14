/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_19 *= ((((max(-53, 1)))));
                var_20 ^= ((~((-2015469204 | (arr_1 [i_1 - 2] [i_0 - 2])))));
                var_21 = min((~3), -2253);
            }
        }
    }
    var_22 -= (max(1, 52));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_23 -= ((+((max((arr_5 [i_2]), (44592 == -1893596559))))));
                var_24 ^= (!470605808);
                var_25 = (min((16416497823637858895 & 1893596558), ((min((((var_17 ? (arr_8 [i_2]) : (arr_4 [i_2] [i_2])))), (arr_9 [i_3] [i_2]))))));
            }
        }
    }
    #pragma endscop
}
