/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141424
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) -564146717)), (min((((/* implicit */unsigned int) var_9)), (221800926U))))))));
                var_13 -= ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_9))))))), (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0]) : (arr_4 [i_1])))));
            }
        } 
    } 
    var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16368)) ? (((/* implicit */int) (short)(-32767 - 1))) : ((-(((/* implicit */int) (short)16368))))));
}
