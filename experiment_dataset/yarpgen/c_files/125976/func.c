/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125976
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_15 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((176471063U) / (176471063U)))) ? (((/* implicit */int) arr_1 [(signed char)5])) : (((((/* implicit */_Bool) 4118496248U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))))) == (((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) var_1))))));
        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32005)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (176471063U))) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */int) min((var_12), ((short)32005)))) : (((/* implicit */int) (signed char)29))));
        arr_3 [(signed char)4] [i_0] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_17 = ((/* implicit */short) arr_0 [i_1] [i_1]);
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_0 [i_1] [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [(_Bool)1] [i_1]))));
        arr_7 [i_1] [i_1] &= 4118496233U;
    }
}
