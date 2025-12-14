/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183832
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
    var_15 -= ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_2)) ? (10586768346640734351ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) * (((((/* implicit */unsigned long long int) var_12)) ^ (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (var_4)))))));
    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), ((unsigned short)65535)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) -1LL))));
        var_18 = ((/* implicit */short) var_2);
        var_19 = ((/* implicit */int) max((((_Bool) ((short) 0ULL))), (max((((17746957923732671724ULL) <= (((/* implicit */unsigned long long int) var_13)))), (arr_1 [i_0])))));
        var_20 &= ((/* implicit */_Bool) (((_Bool)1) ? (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) -1068549868)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (10586768346640734361ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (((long long int) var_9)))))));
        var_21 = ((/* implicit */int) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) 18446744073709551615ULL))));
        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) 2289192317U)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) * (10365110928016209480ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) var_0)))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_25 = ((unsigned int) arr_1 [i_2]);
        var_26 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) max(((short)5952), (((/* implicit */short) arr_0 [i_2])))))), (((8081633145693342136ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
    }
    var_27 *= ((/* implicit */unsigned int) var_7);
    var_28 = ((/* implicit */signed char) min((var_5), (var_5)));
}
