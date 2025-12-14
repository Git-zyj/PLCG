/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134836
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [(signed char)11] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (((~(arr_1 [i_0] [i_0]))) >> (((var_12) - (1102324712U))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) min(((_Bool)0), (arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))) != (705055130U)));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min(((short)-22000), (((/* implicit */short) (_Bool)1))))) ? (3577050205776377097LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22010))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64416)))));
        arr_6 [i_0] = ((/* implicit */unsigned short) ((var_10) >= (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-22006))))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(((/* implicit */int) arr_9 [i_1])))) == (((((/* implicit */int) (signed char)37)) * (((/* implicit */int) arr_9 [i_1]))))))) << ((((~(((/* implicit */int) (_Bool)1)))) + (13)))));
        arr_11 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) max((arr_9 [(signed char)16]), (arr_9 [i_1])))) ^ (((/* implicit */int) arr_2 [i_1])))) >> (((((((/* implicit */_Bool) arr_0 [16U] [16U])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (16589446111822000982ULL)))));
    }
    var_20 = ((/* implicit */unsigned short) var_5);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)37))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)42458)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_1))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (short)21999))) / (-3577050205776377080LL))), (((((/* implicit */_Bool) 16197716238741317686ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3577050205776377088LL))))))));
}
