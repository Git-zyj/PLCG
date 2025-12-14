/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181711
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
    var_11 &= ((/* implicit */unsigned long long int) var_9);
    var_12 = ((/* implicit */short) ((long long int) (+(var_0))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 1767752949268571496ULL);
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_1 [(short)13]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) < (((/* implicit */int) max((var_9), (((/* implicit */short) (unsigned char)206))))))))));
        arr_9 [21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) arr_6 [i_1])) : (((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_1]))))));
    }
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((var_6) >> (((((long long int) max((var_0), (((/* implicit */int) (unsigned char)52))))) - (491089990LL)))))));
}
