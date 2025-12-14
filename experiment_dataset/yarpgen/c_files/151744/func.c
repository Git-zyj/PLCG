/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151744
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
    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned short)65472)), (var_7))), (((/* implicit */unsigned long long int) var_8))))) ? (673035205U) : (((((/* implicit */_Bool) (unsigned short)39502)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (0U)))));
    var_14 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1 + 3] [i_2] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((arr_3 [i_1] [3ULL] [i_1 + 2]), (((/* implicit */unsigned short) (unsigned char)79))))), (12U)));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) (unsigned short)39504)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_9)))))))));
                }
            } 
        } 
    } 
}
