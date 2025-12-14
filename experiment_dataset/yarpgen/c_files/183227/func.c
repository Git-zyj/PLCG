/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183227
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
    var_16 = ((/* implicit */unsigned char) (((~((-(4558803425371208646ULL))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_3)))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((0ULL) < (14493508399808686481ULL))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9ULL)) && (((/* implicit */_Bool) (unsigned short)25)))))) : (var_10))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) ((max((arr_1 [i_0 + 1]), (((/* implicit */int) arr_3 [i_0] [i_1] [i_0 - 2])))) >= ((~(((/* implicit */int) (unsigned short)65510))))));
                arr_4 [i_0 - 3] = ((/* implicit */long long int) var_9);
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 9071295059643348377ULL)) ? (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) & (min((((/* implicit */unsigned long long int) (signed char)-98)), (var_10))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65510))) / (1410966743U)))))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned short) (unsigned char)245);
}
