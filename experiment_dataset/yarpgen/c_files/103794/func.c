/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103794
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
    var_10 = ((/* implicit */signed char) ((var_8) / (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (var_2))))))));
    var_11 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned char)253)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (14612597569563586168ULL))))))), (var_2)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_9);
        arr_4 [i_0] = var_6;
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) (unsigned char)192);
        var_14 = arr_5 [i_1];
        var_15 -= ((/* implicit */unsigned short) arr_5 [i_1]);
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned char)3)))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) & (2358154288U)))))) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_7)))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) arr_1 [i_1] [i_1])))))));
    }
    var_17 = ((/* implicit */signed char) var_2);
}
