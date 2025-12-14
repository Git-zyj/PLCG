/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = 112;
                    arr_7 [i_0] = (((((268435456 ? (((2143289344 * (-127 - 1)))) : (min(15694165651366059240, -3103853904445542818))))) ? (arr_3 [i_0]) : ((((max(-88, 1))) ? ((min(79, 1))) : (max(-922537909, 35))))));
                }
            }
        }
    }
    var_16 = (((((8339 && -103) && ((min(var_4, -1))))) ? (((1675766835 || (((var_2 ? var_5 : (-32767 - 1))))))) : ((((4213585354 ? var_6 : 20829))))));
    var_17 += ((var_5 ? (var_14 & -986658886) : (min((min(var_12, -8706474001958122896)), (max(78, 4503598553628672))))));
    var_18 = ((((max(-8192, 1784844455))) ? ((min((max(131072, 261479258)), ((max(37231, var_3)))))) : (min(var_0, 1851832255))));
    var_19 = ((((max((min(9, -1121679405)), 161))) ? var_1 : (((var_9 + var_5) ? ((32760 ? -17259 : var_13)) : ((max(-11711, 15496)))))));
    #pragma endscop
}
