/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127393
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_6))));
    var_14 |= ((((/* implicit */int) var_12)) / (((/* implicit */int) var_0)));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (+(2195875606946588617LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2404554215U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? (((-2195875606946588614LL) / (34359734272LL))) : (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) var_9)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) var_6)) % (3893108993U)))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-(((((/* implicit */_Bool) 2195875606946588617LL)) ? (9223372036854775806LL) : (-2195875606946588614LL))))) : (min((var_3), (((/* implicit */long long int) arr_0 [i_0 + 2]))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_18 = (-(2195875606946588617LL));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) -5505391191112486080LL)) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 2])) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1]))));
        arr_5 [(unsigned short)14] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)5))))) ? (((((/* implicit */_Bool) var_6)) ? (779914740976937957LL) : (arr_4 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [2LL] [i_1 - 1])))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2195875606946588601LL)) ? (-779914740976937957LL) : (arr_4 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (-4550956223381863195LL)));
    }
    for (long long int i_2 = 2; i_2 < 14; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9223372036854775806LL)) ? (1646134913160106282LL) : (9121982861905137211LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_6)) >= (-2195875606946588615LL)))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            var_21 = ((/* implicit */short) -5076965422773145955LL);
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_11 [12U]))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((max((arr_3 [6LL] [i_3 + 1]), (arr_3 [0U] [i_3 - 1]))) ? (max((-8085601084035384147LL), (((/* implicit */long long int) (short)28966)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2195875606946588595LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [6ULL] [i_3 - 1]))) : (var_9)))))))));
        }
    }
    var_24 = ((/* implicit */unsigned int) min((var_3), (((/* implicit */long long int) var_2))));
}
