/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114497
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6297))) > (1810900766U)))) == (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)-6318)) / (((/* implicit */int) arr_1 [i_0])))) % (((((/* implicit */int) arr_0 [i_0] [i_0])) & (366177222))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((var_3) % (((/* implicit */long long int) ((/* implicit */int) (short)-6312))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))))));
    }
    var_14 *= ((/* implicit */_Bool) ((((((var_3) * (((/* implicit */long long int) ((/* implicit */int) var_8))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (var_9))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((var_9) << (((var_10) - (652538181U))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-6298)) || (((/* implicit */_Bool) (unsigned char)229))))))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-6319))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62909)) * (((/* implicit */int) (short)6318)))))))) + (((((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ^ (((((/* implicit */int) (unsigned char)0)) >> (((9223372036854775807LL) - (9223372036854775780LL)))))))));
}
