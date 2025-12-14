/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151647
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_1 - 4] [i_1])) & (((/* implicit */int) arr_5 [i_1 - 1] [i_1])))) << (((arr_4 [i_1 - 4]) - (449215340U)))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((var_16) >= (var_19))))) ? ((+(var_7))) : (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((((/* implicit */_Bool) 10797666069695644974ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12))) : (max((((/* implicit */unsigned long long int) 930773694U)), (var_13)))))));
                }
            } 
        } 
    } 
    var_22 = (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1425450283)), (var_2)))) ? (((/* implicit */unsigned long long int) ((-6529126940546501180LL) / (((/* implicit */long long int) (-2147483647 - 1)))))) : (var_7))));
}
