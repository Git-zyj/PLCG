/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109575
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_9);
        var_17 ^= ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_0 [(signed char)12])))), (((((/* implicit */_Bool) arr_1 [(short)0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))));
        arr_3 [i_0] = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) var_4)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((18446744073709551596ULL) * (6962301400556912832ULL)))) ? ((+(19ULL))) : (((arr_4 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_16)), (var_12)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_1])))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
    {
        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8)) & ((+(((/* implicit */int) (signed char)35))))))) ? (var_1) : (((/* implicit */int) (((-(((/* implicit */int) (signed char)0)))) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((((/* implicit */unsigned long long int) arr_8 [i_2])), (var_5)))));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(var_12)))) < (((max((var_5), (((/* implicit */unsigned long long int) var_15)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_9))))))))))));
    var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
}
