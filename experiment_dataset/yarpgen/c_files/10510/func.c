/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10510
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (arr_4 [i_0] [i_1])))) ? (max((min((arr_4 [i_1] [i_0]), (1819009301U))), (((/* implicit */unsigned int) ((unsigned short) var_3))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (1819009301U) : (2176425856U))), (((/* implicit */unsigned int) arr_0 [i_0] [i_1]))))));
                var_15 = (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */long long int) 1819009301U)) : (-2478875938354943044LL))) : ((~(var_8))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_7), ((-(2475957994U)))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), ((+(((((/* implicit */_Bool) ((unsigned short) 1819009298U))) ? (-7845883875185146908LL) : (max((((/* implicit */long long int) 2475958008U)), (1010425644706465798LL)))))))));
    var_18 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((2475957987U), (((/* implicit */unsigned int) var_6)))))))));
}
