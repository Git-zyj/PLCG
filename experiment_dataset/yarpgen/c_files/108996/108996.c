/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((1949818869 ? -1949818869 : 1949818868))));
    var_19 = 1949818869;
    var_20 = (((((-1949818870 ? var_13 : var_3))) ? (((1 ? 1 : -15516))) : ((-(min(26898, 5927048152552782163))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 *= ((max(0, var_3)));
                var_22 = (max(var_22, 13));
                var_23 = ((164 ^ (min(5927048152552782175, (max(4355453071521940455, (arr_4 [i_0] [i_0])))))));
                arr_7 [i_0] = (i_0 % 2 == zero) ? ((min(((((arr_4 [21] [i_1]) >> (((arr_3 [i_0]) + 21503))))), (min((arr_4 [i_0] [i_1]), (((-(arr_2 [i_0]))))))))) : ((min(((((arr_4 [21] [i_1]) >> (((((arr_3 [i_0]) + 21503)) + 96))))), (min((arr_4 [i_0] [i_1]), (((-(arr_2 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
