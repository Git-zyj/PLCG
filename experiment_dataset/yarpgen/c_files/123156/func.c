/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123156
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_10 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5790812770840901862LL)) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) : (arr_2 [i_0])))) ? (arr_2 [i_0 + 2]) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))));
        var_11 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((0LL) << (((((/* implicit */int) var_0)) - (149))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)128))))));
    }
    var_12 = min(((-(((((/* implicit */_Bool) -5790812770840901862LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) ((signed char) var_4))));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2553918365293831530LL)) ? ((~(3U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0)))))))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((min(((short)-1), (((/* implicit */short) max((((/* implicit */signed char) arr_3 [i_1])), (arr_4 [i_1] [i_1])))))), (((/* implicit */short) arr_1 [i_1] [i_1]))));
    }
    var_14 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) ((signed char) var_0))))));
}
