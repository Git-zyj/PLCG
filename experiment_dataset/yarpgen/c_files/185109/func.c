/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185109
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
    var_11 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_12 &= ((/* implicit */long long int) min((var_7), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 14220726543109805118ULL)) ? (3572155838784706087ULL) : (4226017530599746498ULL)));
        var_14 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) min((((short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_4 [i_1] [i_1]))))), (((/* implicit */short) (((~(((/* implicit */int) arr_5 [i_1])))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (short)0))))))))));
    }
    var_15 = ((/* implicit */unsigned short) (short)0);
    var_16 = ((/* implicit */_Bool) (unsigned char)96);
}
