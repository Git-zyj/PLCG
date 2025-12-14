/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152077
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)17)))) + (((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned char)24))))))) ? (((/* implicit */unsigned long long int) (+(max((var_12), (((/* implicit */unsigned int) (unsigned short)17))))))) : ((+(var_9)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) (-(max((var_0), (((/* implicit */unsigned long long int) (unsigned short)17))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-100)), ((~(((/* implicit */int) (unsigned short)4213))))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)250);
        }
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */_Bool) var_8);
            var_16 &= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) max((18446744073709551605ULL), (((/* implicit */unsigned long long int) (unsigned char)134))))) ? (max((var_12), (((/* implicit */unsigned int) (short)-16392)))) : (((/* implicit */unsigned int) ((var_13) % (((/* implicit */int) var_6)))))))));
        }
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned int) (signed char)126)))));
    }
}
