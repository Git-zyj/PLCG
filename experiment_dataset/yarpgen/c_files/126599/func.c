/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126599
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2075403837U)))) ? ((((((~(((/* implicit */int) (unsigned char)187)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)8] [i_0 - 2]))) <= (arr_1 [i_0])))) - (1))))) : ((-(((/* implicit */int) arr_2 [i_1] [i_0 - 1]))))));
                arr_5 [11ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 2075403837U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0] [(short)12])))))) ? (((((/* implicit */_Bool) 15138554465489158783ULL)) ? ((~(((/* implicit */int) (signed char)-22)))) : (((/* implicit */int) (unsigned char)158)))) : (((((/* implicit */_Bool) 15138554465489158782ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((short)-4811), (((/* implicit */short) (unsigned char)92)))))))));
                var_15 ^= ((/* implicit */unsigned char) var_9);
                arr_6 [i_0] [i_1] = ((/* implicit */short) var_1);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 15138554465489158783ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2075403837U))))) : (2000986946))));
}
