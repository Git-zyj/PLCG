/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11805
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_2))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17325419556315870776ULL)) ? (2600956918U) : (1694010378U)))) ? (((((/* implicit */_Bool) max((2600956916U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((((/* implicit */_Bool) 2600956945U)) ? (var_3) : (((/* implicit */long long int) 1694010378U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-124))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 562949953421311LL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) (+((~(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (5113086370172957075ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42)))))))));
                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 2] [(short)4] [i_1]))))))));
                var_15 |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) ((1694010375U) <= (2600956916U)))) : (687340968))));
            }
        } 
    } 
    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) (short)8)), (0ULL))) : (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) | (((var_0) * (13402627786763669705ULL))))) : (((18446744073709551612ULL) + (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) (short)24238)))))))));
    var_17 = ((/* implicit */short) var_3);
}
