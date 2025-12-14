/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123483
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (short)14280);
        arr_2 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)20682)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (unsigned char)232))))), (var_5)));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) 1684726598U);
        arr_6 [(_Bool)1] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7783)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_15)))) ? (((/* implicit */int) min((arr_5 [12LL] [12LL]), (((/* implicit */unsigned short) var_6))))) : (-1755181900)))));
        var_22 = ((/* implicit */short) (-(12668865786699812746ULL)));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 67108862)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_5))))))))));
    }
    var_24 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_14)))) << (((((/* implicit */int) var_1)) - (115)))));
}
