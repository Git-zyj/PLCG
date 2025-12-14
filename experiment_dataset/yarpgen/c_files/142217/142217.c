/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = 17650745026984379455;
                var_20 = (min(var_20, ((((((((arr_2 [i_1]) ? (arr_1 [i_0 + 1]) : var_10)))) ? var_10 : (arr_5 [9]))))));
            }
        }
    }
    var_21 = var_1;
    var_22 = ((var_16 ^ (((var_14 <= (var_0 - var_17))))));
    var_23 += (((((((var_1 ? var_1 : 17650745026984379455))) || (((var_15 ? var_5 : var_13))))) ? (max(((var_6 ? var_7 : var_13)), var_9)) : (min((((var_18 ? var_4 : var_3))), 795999046725172166))));
    var_24 = ((((!(795999046725172160 || var_5))) ? var_6 : ((795999046725172151 ? (var_5 && 1) : var_10))));
    #pragma endscop
}
