/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17004
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_9))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (4294967292U)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)4646)) : (((/* implicit */int) (_Bool)1))))) : (var_2)))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) (short)-4646))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [12LL])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4649)))))) ? (var_3) : (((/* implicit */long long int) 67108863U))))));
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)4646))))), (min((((/* implicit */int) (short)4646)), (var_9)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-4646)), (4227858432U)))) ? (min((((/* implicit */unsigned int) var_4)), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -8869801547045468943LL))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((3592383654U), (4227858433U)))) ? (33554431) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60117)) || (((/* implicit */_Bool) arr_1 [i_1])))))))), (4227858416U)));
        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -3436353517594890824LL)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-4647))))) : (((((var_8) + (2147483647))) >> (((1354208048) - (1354208029))))))), ((~(((/* implicit */int) var_1))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16752)) ? (((/* implicit */int) (_Bool)1)) : (33554431)));
    }
    var_20 = ((/* implicit */long long int) (_Bool)0);
}
