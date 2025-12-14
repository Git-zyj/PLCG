/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113213
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
    var_13 = ((/* implicit */unsigned short) var_2);
    var_14 = ((/* implicit */unsigned short) (~(var_4)));
    var_15 = ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), (var_3)))), (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) / (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2))) & (((/* implicit */unsigned long long int) var_11)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) max(((_Bool)1), ((_Bool)1))))) ? (min((min((((/* implicit */unsigned long long int) var_7)), (var_12))), (((/* implicit */unsigned long long int) max((arr_4 [(unsigned short)21] [(signed char)23]), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) arr_0 [0] [i_1])) : (-1LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (var_4)))) : (max((((/* implicit */unsigned int) arr_1 [6ULL] [i_1])), (var_11)))))))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1))))));
            }
        } 
    } 
}
