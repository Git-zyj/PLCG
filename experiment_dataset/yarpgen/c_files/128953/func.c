/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128953
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
    var_19 |= ((/* implicit */long long int) ((((((unsigned long long int) (_Bool)1)) & (((((/* implicit */_Bool) 11)) ? (var_0) : (var_0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 += ((/* implicit */int) (-(arr_1 [18ULL])));
        var_21 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
        var_22 &= ((/* implicit */unsigned int) ((unsigned char) ((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
        var_23 = ((/* implicit */_Bool) 15LL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(1082010969U)));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) var_7))) % (var_9)));
        arr_7 [i_1] = ((/* implicit */unsigned char) min((((unsigned long long int) ((unsigned long long int) var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((((/* implicit */int) arr_2 [i_1] [i_1])) >= (((/* implicit */int) arr_2 [i_1] [i_1])))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_18)) >> (((var_4) - (507772201))))))))));
        var_26 *= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((2311606675U) - (2311606664U)))));
        arr_11 [14U] [i_2] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_11)))))));
    }
}
