/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162075
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
    var_11 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) var_4)))))), (((((/* implicit */_Bool) var_4)) ? (((8589934591ULL) >> (((((/* implicit */int) var_4)) - (199))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [17] = min((var_5), (arr_3 [i_1]));
                arr_5 [i_0] &= var_8;
                var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((max((8589934591ULL), (((/* implicit */unsigned long long int) 2499340220U)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))), (8589934591ULL)));
            }
        } 
    } 
    var_13 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) > (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) var_2))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)183)), (max((((/* implicit */unsigned short) var_8)), (var_6))))))));
}
