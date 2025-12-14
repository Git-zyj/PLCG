/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142398
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
    for (short i_0 = 2; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)1))));
        var_11 += (-((+(((/* implicit */int) var_9)))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)1))))) : (var_1)))) ? ((+(((((/* implicit */_Bool) 2108207115U)) ? (2186760181U) : (((/* implicit */unsigned int) -193070498)))))) : (((/* implicit */unsigned int) max(((~(-1716572969))), (((/* implicit */int) var_0)))))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))), (((/* implicit */long long int) var_7)))))));
        var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1431808783)))) : (max((((/* implicit */long long int) var_3)), (arr_1 [i_0])))))));
    }
    for (short i_1 = 2; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) 2108207093U);
        arr_4 [i_1 + 2] [i_1 + 4] = ((/* implicit */unsigned short) (+(arr_1 [i_1 + 4])));
    }
    var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)9)) ? (2485685105U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (max((((/* implicit */unsigned int) var_6)), (2186760178U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))))) : (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_3)) : (var_7)))) ? ((~(2186760181U))) : (((((/* implicit */_Bool) var_1)) ? (2108207093U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
    var_17 = ((/* implicit */unsigned char) var_8);
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)10))));
}
