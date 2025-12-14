/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15263
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (var_7) : (((unsigned int) var_5))))) ? (min((((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)1)))), (-2040515999))) : ((-(((/* implicit */int) max(((unsigned short)32767), (((/* implicit */unsigned short) (short)29788)))))))));
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32767)) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) (signed char)1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1 + 2] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 1]))) / (arr_1 [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) >= (arr_1 [i_0 - 1])))) : (((((/* implicit */int) arr_0 [i_0 + 1] [i_1 + 1])) << (((((/* implicit */int) var_5)) - (8027)))))));
                var_18 ^= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)32767))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)53)))))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (var_2) : (arr_1 [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1 + 1])) && (((/* implicit */_Bool) (short)16382)))))) : (((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_2 [i_1 + 1])))) ? (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)4635)))))))));
            }
        } 
    } 
}
