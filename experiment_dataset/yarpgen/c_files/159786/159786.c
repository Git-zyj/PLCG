/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((var_10 ? (max(((126 ? var_8 : -127)), var_10)) : (9007199254478848 > var_6)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = ((((max((max(var_5, 2671230661)), (~-498268722)))) ? ((max((((!(arr_4 [i_0 + 1] [i_0 - 1] [i_0])))), -498268725))) : var_12));
                    arr_10 [i_0] = ((((!(arr_4 [i_1 + 2] [0] [i_2]))) ? ((min((!var_2), (max(187, 40))))) : 17));
                }
            }
        }
    }
    var_17 = ((((((max(4725869853986398210, 75)) >> (var_4 - 7877022911939316899)))) ? ((var_7 ? (~var_5) : ((3929548104 ? 627678492 : var_4)))) : (((((3301540533745635854 ? var_0 : var_6))) ? var_14 : ((min(var_3, var_9)))))));
    var_18 = ((var_3 >> (((max((var_2 | 6090151819305876816), (~498268721))) - 18446744073211282879))));
    #pragma endscop
}
