/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112927
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 -= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (_Bool)1))));
                var_12 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((long long int) 255U)) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2])) ? (((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_1])) : (arr_3 [i_1 + 1] [i_1]))))));
                var_13 = ((/* implicit */int) (+(((((/* implicit */_Bool) -631094250)) ? (16436324316792025885ULL) : (((/* implicit */unsigned long long int) 4095))))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)59)) ^ (2097151)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((((/* implicit */int) (short)-22021)) | (((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : ((-(min((283927664132060298LL), (((/* implicit */long long int) (unsigned short)16382))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 14785245074764349116ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))) : (10739323677490016607ULL))) : (((/* implicit */unsigned long long int) min((6760193326433562256LL), (((/* implicit */long long int) -2057668336)))))));
}
