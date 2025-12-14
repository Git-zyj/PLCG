/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151104
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */int) max((arr_8 [i_0 - 1] [i_1] [i_1 + 1] [4LL]), (((/* implicit */unsigned short) arr_6 [i_1 + 2] [i_1] [i_1 + 2]))))) != (((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 1]))));
                    var_16 -= ((/* implicit */unsigned long long int) var_14);
                    arr_9 [6LL] [i_1] [i_1] [i_2] = max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6105))) ^ ((((_Bool)1) ? (3615940943U) : (((/* implicit */unsigned int) -851706301)))))), (((/* implicit */unsigned int) (short)-1070)));
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */_Bool) ((unsigned long long int) max((var_5), (((/* implicit */unsigned int) var_6)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_12)))));
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)47)) ? (((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-47))))) ? (max((679026353U), (((/* implicit */unsigned int) (unsigned char)140)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))))));
    var_19 = ((/* implicit */signed char) var_4);
}
