/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160992
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) : ((~(((((/* implicit */_Bool) var_3)) ? (-6576308564800099266LL) : (-6576308564800099266LL)))))));
    var_15 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_0))));
                var_17 = (+((~(-6576308564800099246LL))));
                var_18 *= ((/* implicit */_Bool) 18446744073709551613ULL);
                arr_6 [(short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1]))))) ? ((+(((/* implicit */int) min(((unsigned char)101), (((/* implicit */unsigned char) (_Bool)1))))))) : (((int) (+(((/* implicit */int) (_Bool)1)))))));
                var_19 = ((/* implicit */unsigned int) 9223372036854775807LL);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-2147483644) + (var_10)))) ? (max((arr_0 [i_2 - 2] [i_2]), (((/* implicit */unsigned int) max((((/* implicit */signed char) arr_8 [i_2])), (arr_2 [i_2] [i_2])))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)32767), (arr_3 [i_2 + 3])))))));
        var_21 = (~((+(2085565140))));
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)1023)), (1491057723)))) != (var_9)));
}
