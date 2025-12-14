/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127548
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1 - 2]))) : (0ULL)))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_10)))) : ((~(((/* implicit */int) (unsigned char)0)))))) < (((/* implicit */int) arr_0 [i_0])))))));
                var_19 = ((/* implicit */short) ((unsigned short) (+(arr_4 [i_0] [i_0] [i_0]))));
                arr_5 [i_0] [(unsigned char)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)247)))) | (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) arr_3 [i_0] [(short)2])))))))) ? (var_4) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_10))))) >= (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [21]))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_6);
}
