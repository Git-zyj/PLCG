/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171663
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */int) ((min((var_5), (var_4))) <= ((+(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */int) var_9)), (924119629))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3)))))))));
    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) var_14))))))) ? (max((((((/* implicit */_Bool) var_5)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)58965)) ? (2600242494U) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6571))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)143)) : (-924119626))))) || (((/* implicit */_Bool) var_6))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) var_2);
                    var_20 = ((/* implicit */unsigned int) ((0ULL) << (((273632043633536429ULL) - (273632043633536397ULL)))));
                    arr_7 [8ULL] [i_1] [i_1] [i_0 + 2] = ((/* implicit */unsigned short) arr_5 [i_1]);
                }
            } 
        } 
    } 
}
