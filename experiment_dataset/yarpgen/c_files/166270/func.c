/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166270
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
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) var_3)))))) * (((/* implicit */int) ((unsigned char) var_4)))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))) : (((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) (!((_Bool)0))))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (unsigned short)0);
        var_17 = ((/* implicit */signed char) (((_Bool)1) ? (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (5115455484478435296ULL))) : (((/* implicit */unsigned long long int) 503316480U))));
    }
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)65518)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((var_13), (((/* implicit */unsigned int) (_Bool)0))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)35072))))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_0)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_2)) / (var_11)))));
    var_20 = var_6;
}
