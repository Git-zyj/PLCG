/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141850
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
    var_12 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2614668615U) : (1680298700U)))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (+((((~(((/* implicit */int) (short)-26857)))) * (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                arr_13 [i_2] = ((/* implicit */unsigned int) ((((_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) (~(((unsigned int) (short)-26851))))) : (((((/* implicit */unsigned long long int) 4294967272U)) | (((((/* implicit */_Bool) 253173359)) ? (4870822189468630811ULL) : (((/* implicit */unsigned long long int) 9))))))));
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) (((-(2614668615U))) << (((-9223372036854775807LL) & (((/* implicit */long long int) 2937473431U))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_0)))) ? (((unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned long long int) ((int) ((unsigned char) (_Bool)1)))))))));
}
