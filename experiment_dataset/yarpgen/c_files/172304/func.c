/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172304
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) var_7))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_2))))))) : (max((((unsigned long long int) 4294967285U)), (((((/* implicit */_Bool) 524224ULL)) ? (((/* implicit */unsigned long long int) var_17)) : (var_10)))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (5U))) << (((((unsigned long long int) 9223372036854775793LL)) - (9223372036854775778ULL)))))) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_19) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20910))) : (var_10)))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [13LL] [(unsigned short)0] [18] [18] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) || (arr_5 [i_0 - 1] [(unsigned char)4]))) ? (((/* implicit */int) ((signed char) (short)18))) : (((/* implicit */int) ((unsigned char) (signed char)36)))));
                    var_22 = ((/* implicit */signed char) max((((int) max(((short)-7980), ((short)7980)))), (((((/* implicit */int) (!(((/* implicit */_Bool) 3U))))) + (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (short)7963)))))))));
                }
            } 
        } 
    } 
    var_23 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1247840105U)) ? (9223372036854775793LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 884350594U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (11U))))))), (((max((var_10), (((/* implicit */unsigned long long int) var_15)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_17) : (var_17)))))));
}
