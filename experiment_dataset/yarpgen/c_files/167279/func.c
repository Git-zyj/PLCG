/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167279
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16398)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11151))) : (var_9)))));
    var_11 = ((/* implicit */unsigned int) ((_Bool) (-((+(((/* implicit */int) (unsigned short)65535)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)898)) & (((/* implicit */int) var_7))))) && (((_Bool) (unsigned short)63609))))), ((unsigned short)65535)));
        var_13 |= ((/* implicit */unsigned long long int) (-((~(((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) (signed char)127))))))));
        var_14 -= ((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned long long int) (short)16389)), (((var_8) >> (((((/* implicit */int) var_7)) - (2225))))))));
    }
    for (short i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        var_15 -= ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) ((unsigned short) arr_3 [(_Bool)1] [(_Bool)1]))), (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))));
        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-29035))));
        var_17 -= ((/* implicit */unsigned short) (((-(arr_3 [i_1] [i_1 - 1]))) + (max((arr_4 [i_1]), (((/* implicit */unsigned int) arr_2 [i_1]))))));
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_3 [i_1] [(unsigned short)16]))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) max(((signed char)-1), (arr_7 [i_2]))))))));
        var_20 *= ((/* implicit */short) (signed char)0);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_21 -= ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))) % (arr_3 [i_3] [i_3 - 1])))));
        var_22 -= ((/* implicit */unsigned char) arr_9 [i_3]);
    }
    var_23 = ((/* implicit */unsigned long long int) var_5);
}
