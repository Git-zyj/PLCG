/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145366
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_0] [i_1])) & (9223372036854775807LL)))) ? (((/* implicit */unsigned int) 1998908201)) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))) & (3150489593U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (4194288U) : (4294967287U)))) ? (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) var_12))))) : (max((((/* implicit */unsigned long long int) var_10)), (13770646368071023653ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))));
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)106))) % (7374104375333770733LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13684))) < (9223372036854775807LL))))));
                arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((1002490141484796718LL) > (max((((/* implicit */long long int) var_0)), (-9223372036854775807LL))))))) > (var_5)));
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)46145);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 16; i_2 += 1) 
    {
        for (unsigned int i_3 = 4; i_3 < 15; i_3 += 4) 
        {
            {
                arr_14 [i_3 - 1] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                arr_15 [i_3 + 2] = ((/* implicit */unsigned int) -409238856);
                arr_16 [i_2 - 1] [8U] [i_2] = ((/* implicit */unsigned char) var_4);
            }
        } 
    } 
}
