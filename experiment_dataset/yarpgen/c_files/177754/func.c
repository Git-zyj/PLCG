/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177754
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
    var_10 = ((/* implicit */int) var_2);
    var_11 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)-26049)), ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9041460425982038635LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        var_12 = max((((/* implicit */long long int) arr_0 [22LL] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)77), (var_2))))) + ((+((-9223372036854775807LL - 1LL)))))));
        var_13 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775786LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((unsigned int) var_0))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_14 *= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_7))))));
            var_15 *= ((/* implicit */unsigned int) ((arr_3 [i_0] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))));
            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551613ULL))));
        }
        for (short i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) var_4);
            var_18 &= ((/* implicit */long long int) ((short) (((_Bool)1) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_2])) >= (((/* implicit */int) arr_4 [i_2] [6LL] [i_0])))))))));
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned short) ((long long int) 4063081127U));
        }
    }
}
