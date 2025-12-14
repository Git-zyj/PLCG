/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151500
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
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((int) (+((+(((/* implicit */int) (signed char)-11)))))));
                var_11 += ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)54))))) == (arr_3 [i_1]))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((204444954), (((/* implicit */int) var_0))))) & (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (arr_3 [i_1 - 2])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_5) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))) : (10930289878182831456ULL))))) : (((((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (signed char)1)))) ? ((+(2163825363866419053ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-1697003785))))))));
                var_13 += ((/* implicit */long long int) min(((~(((/* implicit */int) arr_0 [i_1 - 1])))), (((((/* implicit */int) arr_0 [i_1 - 2])) >> (((arr_3 [i_1 - 1]) - (11291574897553702864ULL)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) -1697003794);
}
