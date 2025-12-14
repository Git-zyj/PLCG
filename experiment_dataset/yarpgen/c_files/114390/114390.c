/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = var_11;
    var_22 = ((var_1 ? ((18999 ? 14 : ((12717164170870830181 ? 186731472 : 8126)))) : (((min(2283577237371162465, -8082863269745393836))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = -var_12;
                arr_5 [i_1] = ((!((((~15) ? (max(46537, -5278111883093040770)) : -30378)))));
                arr_6 [i_0] [10] = ((((min(0, var_12))) ? ((8315395600335719153 ? var_16 : 71579100)) : ((((((arr_3 [i_0] [i_0]) ? 72057594037927935 : 46537))) ? (max(-32396, 35184369991680)) : -46540))));
                arr_7 [i_0] [i_1] [i_1] = ((46537 ? ((max((arr_3 [i_0] [i_0]), (((8118 ? -15920 : var_0)))))) : 8082863269745393835));
            }
        }
    }
    var_23 = ((~(~352)));
    #pragma endscop
}
