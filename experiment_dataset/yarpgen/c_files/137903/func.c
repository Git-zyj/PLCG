/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137903
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [(unsigned short)6] = ((/* implicit */short) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)38092)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0]))) >> (((/* implicit */int) ((4193059517241228997ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23317))))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((int) (unsigned short)24955));
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_18 += ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_8 [(unsigned short)14])), ((unsigned short)29758)));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) max((((/* implicit */unsigned short) (short)21603)), ((unsigned short)39335)))))))))));
    }
    var_20 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (short)-1)))));
    var_21 = ((/* implicit */unsigned int) var_4);
}
