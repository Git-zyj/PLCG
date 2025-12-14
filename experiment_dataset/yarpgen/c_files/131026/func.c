/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131026
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) max(((unsigned short)45586), ((unsigned short)45587))))))))))));
    var_15 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((long long int) var_9))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)88)) ? (((((((/* implicit */_Bool) -1374728138)) && ((_Bool)1))) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))))))));
                    arr_6 [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (arr_4 [i_1] [i_1] [(signed char)4]))))) : ((-(var_1)))));
                    arr_7 [i_0] = ((/* implicit */long long int) max((8589934591ULL), (((/* implicit */unsigned long long int) (unsigned char)127))));
                    var_17 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 1]))))));
                }
            } 
        } 
    } 
}
