/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169720
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
    var_20 -= ((/* implicit */unsigned long long int) var_1);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19948)) ? (1341747464533043932LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)68)))) & (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_18)), (arr_1 [i_0])))) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (var_1)))), (((var_12) / (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2233785415175766016ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) | (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((var_12) / (max((arr_1 [i_0]), (((/* implicit */int) (unsigned char)245)))))))));
        var_23 += ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)128)) : (min((((var_8) ? (((/* implicit */int) (unsigned short)55029)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_24 *= ((/* implicit */unsigned long long int) min((min((max(((unsigned char)255), ((unsigned char)3))), (max((arr_0 [i_0] [(unsigned char)0]), (arr_0 [i_0] [i_0]))))), (arr_0 [i_0] [i_0])));
    }
    var_25 = ((/* implicit */unsigned int) ((short) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (8796076244992ULL)))));
}
