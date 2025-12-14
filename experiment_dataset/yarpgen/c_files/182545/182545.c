/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = ((((((arr_3 [i_1 + 1] [i_0 + 1]) ? var_7 : 3259805474))) ? (~var_19) : 16102241448424742617));
                var_21 = (((((var_8 / var_3) ? 1035161808 : -95)) != (((52412 >> (1035161828 - 1035161822))))));
            }
        }
    }
    var_22 = min((min(((-90 ? var_18 : 4095)), var_0)), (((-((7228 ? var_16 : 1))))));
    var_23 = ((((min((!43895), var_1))) ? (!var_10) : (((((var_3 ? 127 : 1035161810))) ? -5753915176648794085 : (-46283727 & var_6)))));
    var_24 = ((65529 ? (((!(((3071286688 ? 24601 : 54)))))) : 554084179));
    #pragma endscop
}
