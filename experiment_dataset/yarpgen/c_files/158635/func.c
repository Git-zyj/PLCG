/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158635
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
    var_19 = ((/* implicit */signed char) ((var_18) ? ((-(((/* implicit */int) (unsigned char)88)))) : (((((/* implicit */int) var_17)) - (((/* implicit */int) var_14))))));
    var_20 = 3249910307U;
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) (+(var_0)));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) * ((-(((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] = (~(486259262739599296LL));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        var_23 = ((/* implicit */long long int) var_15);
        var_24 = ((/* implicit */unsigned char) (unsigned short)0);
        arr_5 [i_1] = ((/* implicit */signed char) ((var_10) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2])))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16746837353039856719ULL)))) ? (((/* implicit */int) (unsigned short)26386)) : (((((/* implicit */int) var_16)) << (((((/* implicit */int) arr_3 [(unsigned char)8])) - (204)))))))) ? ((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))))) : (((/* implicit */int) var_4))));
    }
}
