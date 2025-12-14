/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113692
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_11)))) : ((((((_Bool)1) ? (((/* implicit */int) (short)10561)) : (((/* implicit */int) var_11)))) + (((/* implicit */int) var_6))))));
    var_15 = ((/* implicit */unsigned short) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) + (((/* implicit */int) var_9)))), (((/* implicit */int) var_8))));
    var_16 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)65024)))) + (((max((arr_3 [i_1]), (((/* implicit */int) arr_2 [i_0] [i_0])))) << (((((((/* implicit */_Bool) (unsigned short)16933)) ? (((/* implicit */int) (short)10561)) : (((/* implicit */int) (short)-128)))) - (10561))))))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) + (min((max((((/* implicit */int) (unsigned short)18002)), (var_1))), ((+(((/* implicit */int) (unsigned short)65535))))))));
            }
        } 
    } 
    var_19 = ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_3)) ? (15451405972044219464ULL) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_8)))))));
}
