/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173579
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
    var_18 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)5920))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 0ULL))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) (signed char)21))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-17362)), (arr_0 [i_0]))))) : (((((/* implicit */long long int) 285870512U)) / ((-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) max(((unsigned short)25124), (((/* implicit */unsigned short) (_Bool)0)))))));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2]))));
        arr_7 [i_1] [(signed char)0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)188))));
    }
}
