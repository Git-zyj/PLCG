/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108550
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [19LL])) : (((/* implicit */int) var_0))))) <= (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((unsigned long long int) (short)22782))))));
        var_15 -= ((/* implicit */unsigned long long int) var_5);
        var_16 = ((/* implicit */_Bool) (unsigned char)8);
        var_17 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) ((signed char) arr_0 [i_1]))) == (((/* implicit */int) ((_Bool) var_11))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)4);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((arr_1 [4LL]) > (arr_1 [(signed char)20]))) ? (max((arr_1 [12LL]), (((/* implicit */long long int) (unsigned char)246)))) : (arr_1 [(_Bool)1]))))));
    }
    var_20 = ((/* implicit */long long int) var_6);
    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((var_13) == (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (var_7)));
}
