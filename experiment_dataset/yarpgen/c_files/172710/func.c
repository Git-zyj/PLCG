/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172710
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
    var_17 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 9622605175392988211ULL)))) & (((9622605175392988211ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) ((signed char) ((17325201687530978499ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
    var_18 |= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) min((-6791531842538531483LL), (((/* implicit */long long int) (unsigned short)14485)))))) + (((/* implicit */int) (unsigned short)32768))));
    var_19 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (min((arr_4 [i_1]), (((/* implicit */long long int) (short)11518)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 7639728153301999883ULL))))))) ? (max((5766984587253858948ULL), (17508991272834841090ULL))) : (max((((((/* implicit */_Bool) 5766984587253858950ULL)) ? (12679759486455692679ULL) : (8824138898316563420ULL))), (((/* implicit */unsigned long long int) var_10))))));
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (191332674902302003LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))), (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == ((-9223372036854775807LL - 1LL))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (-652665529465747413LL)))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) / (((9622605175392988196ULL) % (((/* implicit */unsigned long long int) -652665529465747427LL))))))));
}
