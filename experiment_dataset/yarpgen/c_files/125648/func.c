/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125648
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (var_19)))) ? (((unsigned long long int) -396019392)) : (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-32765)) + (((/* implicit */int) (short)-5788))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) + (396019392)))) : (((unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)81), (((/* implicit */unsigned char) var_5))))))));
    var_21 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) ^ ((-(((/* implicit */int) (short)32761))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) -396019378)), (min((arr_1 [i_0 - 2]), (((/* implicit */long long int) (_Bool)0))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_4 [i_0 - 1] [i_0 - 2] [i_0 + 1])), (max((((/* implicit */unsigned short) var_5)), (var_1)))))), ((~(65535U)))));
            }
        } 
    } 
}
