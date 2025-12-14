/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127599
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((14469912262062125996ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)104)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_1] [(signed char)0])), (2018589647U)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-12306)))) : (((((/* implicit */_Bool) 1566201084U)) ? (((/* implicit */int) var_2)) : (var_1))))) : ((+((~(1499604399)))))));
                var_12 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_0]) : (arr_3 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1])) - (((/* implicit */int) (unsigned short)65524)))))));
            }
        } 
    } 
    var_13 = (+((+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_7)))))));
}
