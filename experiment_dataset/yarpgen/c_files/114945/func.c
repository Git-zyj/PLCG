/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114945
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((~(arr_1 [i_0 + 1])))));
        arr_3 [(short)3] [i_0] = ((/* implicit */unsigned int) min((((var_4) < (((((/* implicit */_Bool) 3013825854U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16)))))), ((_Bool)1)));
        arr_4 [i_0 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) var_13)) : (var_3))) != (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1]))))), (max((9136382893395769969ULL), (((/* implicit */unsigned long long int) (signed char)-8))))))));
        arr_5 [i_0] = ((min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [(short)11])), (255U)))), (-4455049816896068278LL))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))));
    }
    var_20 |= ((/* implicit */_Bool) var_6);
    var_21 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)30939))));
    var_22 = ((/* implicit */_Bool) var_2);
}
