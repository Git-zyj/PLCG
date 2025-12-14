/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182816
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (~(var_7))))) ? (((((/* implicit */_Bool) (-(var_4)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) / (-5063001985908166761LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))))) : ((((+(var_8))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 17060217732882781431ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25869))) : (((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (1377057832))))));
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-33)) ? (1971137464U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42011))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2])))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((long long int) -2694260097794324018LL));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        var_21 = ((/* implicit */long long int) ((int) (((-(((/* implicit */int) arr_6 [i_1])))) - (((((/* implicit */int) (unsigned short)65535)) - (-1733987749))))));
    }
}
