/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18137
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
    var_12 = ((/* implicit */unsigned char) (-(var_1)));
    var_13 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (min((var_3), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3124771961163504644LL) : (6195602174730092308LL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((8636015159099793557ULL), (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned long long int) 6195602174730092308LL)) : (18446744073709551615ULL)))));
                var_14 += min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL));
            }
        } 
    } 
}
