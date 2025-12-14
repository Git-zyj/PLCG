/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119134
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54701)))))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_0]))))) : ((+((-9223372036854775807LL - 1LL))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_17 = (+(((/* implicit */int) arr_5 [12LL] [i_1] [i_1])));
            arr_7 [12LL] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])), (((var_2) / (min((2147483647), (((/* implicit */int) arr_4 [i_0] [i_1]))))))));
            arr_8 [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_1] [(_Bool)1] [(_Bool)1]));
        }
    }
    var_18 = ((/* implicit */int) ((long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1302402309U))))));
}
