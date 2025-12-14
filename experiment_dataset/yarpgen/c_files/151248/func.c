/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151248
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_1 + 3])), (arr_3 [i_1 + 3]))))));
            var_17 = ((/* implicit */unsigned int) var_6);
        }
        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) max(((-(var_13))), (var_9)))) : (max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) (unsigned short)65532)), (18336801098186984274ULL)))))));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-31218)) + (((/* implicit */int) var_6))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */signed char) var_10))))))))) + (min((((/* implicit */unsigned long long int) var_0)), (((var_2) ? (((/* implicit */unsigned long long int) var_13)) : (var_1)))))));
}
