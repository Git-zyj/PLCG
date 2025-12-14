/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178812
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) (signed char)-8))))));
                    var_15 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_2 [i_0] [i_2])), (arr_3 [i_0 - 1]))), ((-((~(131071U)))))));
                    arr_10 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1 + 3])) & (arr_1 [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(_Bool)1] [i_2])) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (arr_3 [i_2])))) : (((((/* implicit */unsigned long long int) arr_1 [i_2])) * (arr_8 [i_0] [i_1] [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_5 [7ULL] [i_1] [16ULL] [i_2])) : (arr_1 [i_0]))))))));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) min((var_7), (var_0)))) ? (((/* implicit */int) ((_Bool) var_11))) : ((+(((/* implicit */int) (_Bool)1)))))) : (((((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_10)) << (((((/* implicit */int) var_5)) - (8650))))) : (((/* implicit */int) var_1)))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) >= (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((_Bool) var_8)))))));
}
