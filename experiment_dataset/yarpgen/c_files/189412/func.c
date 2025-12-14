/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189412
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max(((unsigned short)31350), (((/* implicit */unsigned short) (unsigned char)234))))) : (((/* implicit */int) var_7))))), (min(((~(81881421U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_2)), (var_4)))))))))));
    var_15 -= ((/* implicit */unsigned int) ((long long int) (unsigned char)22));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (-(max((max((983040), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_4 [i_0]))))));
                var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((max((arr_2 [i_0] [(unsigned short)15] [i_1]), (((/* implicit */unsigned int) arr_3 [i_0])))) + (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)145), (((/* implicit */unsigned char) arr_3 [i_0]))))))))) > (max((((/* implicit */unsigned long long int) arr_0 [i_0 + 2])), (((unsigned long long int) (unsigned char)21))))));
            }
        } 
    } 
}
