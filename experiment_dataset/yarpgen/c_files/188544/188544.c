/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_2 & ((var_9 ? var_5 : var_12)))) >> (var_10 + 241295474)));
    var_20 = (min(var_20, ((((var_6 ? (3818603692 << 7) : ((var_18 ? var_10 : 476363594))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_21 = (((((3818603710 ? (arr_5 [i_2]) : 3495785303))) || var_18));
                    var_22 *= var_9;
                    var_23 = (arr_1 [i_0] [i_0 + 3]);
                }
                var_24 = ((((50813 ? -7237645843767968182 : -1841012161)) == (((var_11 ? 30720 : var_14)))));
                var_25 = (21722 <= -15098);
                var_26 &= (((13092355235437774969 ? (-127 - 1) : var_14)));
            }
        }
    }
    var_27 += var_18;
    #pragma endscop
}
