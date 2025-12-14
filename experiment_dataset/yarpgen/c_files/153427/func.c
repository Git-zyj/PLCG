/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153427
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18)))))))));
        var_21 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        var_22 = ((/* implicit */unsigned short) (-(arr_0 [i_0])));
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned short) var_17)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-10879)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28565)) * ((-(((/* implicit */int) (short)-10887))))))) : (var_0))))));
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) (-(max((arr_3 [i_1]), (((/* implicit */long long int) var_16))))));
        arr_4 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) min((((/* implicit */signed char) var_3)), ((signed char)-106)))), (arr_2 [i_1])))), (var_16)));
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (!(((/* implicit */_Bool) (short)-10879))))) | (((/* implicit */int) (signed char)125))))));
        var_25 = ((/* implicit */unsigned char) (-((-(min((arr_5 [i_2]), (((/* implicit */unsigned long long int) (short)10859))))))));
        var_26 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [6])) ? (arr_3 [16LL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29496))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))));
    }
    var_27 = ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_3))));
    var_28 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) % (min((((/* implicit */int) var_13)), (((((/* implicit */int) (unsigned short)63)) - (((/* implicit */int) var_14))))))));
}
