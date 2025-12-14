/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(140737488355327, ((max(4294967295, var_1)))))) ? 13858478270979148691 : ((((var_4 ? var_5 : 0)) * 10794067998813222869))));
    var_18 = (max(var_18, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 |= 13858478270979148711;
                    arr_7 [i_1] = ((((((max((arr_1 [i_2]), 14449753238838206501)) < ((max((arr_1 [i_2]), -1679761668)))))) ^ -1679761651));
                    var_20 = (min(-90, (min((((!(arr_4 [i_0] [i_1] [i_1])))), 4294967295))));
                }
            }
        }
    }
    #pragma endscop
}
