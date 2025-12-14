/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132220
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((var_5) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((/* implicit */int) var_3))))) ? (((long long int) (unsigned short)43947)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21588))))))));
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)13)), ((short)13938)))) ? (((/* implicit */long long int) ((arr_3 [i_0]) << (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)13938))) : (arr_2 [0]))))) >> (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)21588))))))));
        var_17 *= var_2;
        var_18 = ((((/* implicit */int) (signed char)-21)) / (((/* implicit */int) (unsigned short)43821)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) 8160U)) && (((/* implicit */_Bool) (short)-13923)))))));
                    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)94)) && (((/* implicit */_Bool) (short)-3355)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_14))));
}
