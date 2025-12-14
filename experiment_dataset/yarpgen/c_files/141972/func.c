/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141972
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
    for (short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (arr_3 [i_0 + 3] [i_0] [i_0])))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [13U]))) + (var_4)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517))) - (var_3)))) ? (((/* implicit */int) max(((unsigned short)18), (((/* implicit */unsigned short) (short)-32760))))) : (((/* implicit */int) (unsigned short)19)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_6))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)65497))))));
                arr_5 [i_0 - 4] &= (~(((/* implicit */int) var_6)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)15515), (((/* implicit */unsigned short) (_Bool)1))))) || (((/* implicit */_Bool) min((4260354650U), (((/* implicit */unsigned int) var_9)))))))) : (((/* implicit */int) var_8)))))));
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))));
}
