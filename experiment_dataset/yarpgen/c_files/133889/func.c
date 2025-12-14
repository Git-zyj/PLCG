/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133889
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1440360389766142122LL))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((unsigned int) min((arr_3 [i_1]), (((/* implicit */short) arr_0 [i_0] [i_1])))))));
                var_16 = ((/* implicit */unsigned char) arr_5 [4LL] [i_1] [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((int) var_1));
}
