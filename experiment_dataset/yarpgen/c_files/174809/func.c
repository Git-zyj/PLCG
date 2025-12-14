/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174809
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_2 [i_0])))) ? (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) ((max((var_1), (((/* implicit */long long int) arr_6 [i_1] [i_1])))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45644)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (+(((unsigned long long int) var_9))));
    }
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((((/* implicit */int) var_7)) != ((-(((/* implicit */int) (unsigned short)27044)))))) && (((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) var_0)), (204867091U))))))))));
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
}
