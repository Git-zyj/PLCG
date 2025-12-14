/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125449
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -337631238)) ? (((/* implicit */int) (short)-4195)) : (((/* implicit */int) (unsigned char)222))))), (((((/* implicit */_Bool) (unsigned short)6216)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (14727316288024628601ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-15)) ^ (((/* implicit */int) (signed char)-23)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -665220432)))))))) ? (((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) (signed char)74)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 32767U)) || (((/* implicit */_Bool) (unsigned char)5)))))) : (arr_2 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) -2147483643)));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) -1673551540215523215LL))));
                var_22 ^= ((/* implicit */unsigned short) (+((+((~(((/* implicit */int) var_15))))))));
            }
        } 
    } 
}
