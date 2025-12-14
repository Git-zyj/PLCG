/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168627
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 2])) + (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((arr_0 [i_0] [(unsigned short)18]) << (((var_11) - (2911506673U))))) : (arr_3 [i_0 - 2])))));
                arr_7 [i_0] [i_1] [(unsigned char)11] = ((/* implicit */long long int) (signed char)-87);
                arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)86)) ? (arr_3 [i_0 - 3]) : (var_0))) == (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (arr_0 [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 - 3] [i_0 - 2])))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) (+(((var_0) << (((((var_2) + (7940619991123839355LL))) - (46LL)))))));
}
