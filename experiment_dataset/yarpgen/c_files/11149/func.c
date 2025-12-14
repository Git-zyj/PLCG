/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11149
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_16 = ((/* implicit */short) (-(((/* implicit */int) ((arr_0 [i_0]) >= (0ULL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2244571893U)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0]))));
            var_18 += ((/* implicit */unsigned char) (short)3830);
        }
        for (unsigned char i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_0 [i_2 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (10ULL))))));
        }
        var_21 = (~(18446744073709551615ULL));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)26611)))))));
    }
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)26611))));
}
