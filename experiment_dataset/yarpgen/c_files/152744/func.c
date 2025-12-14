/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152744
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
    var_20 = ((/* implicit */unsigned short) ((short) var_1));
    var_21 = ((/* implicit */_Bool) min((4), (((((/* implicit */_Bool) 4294967291U)) ? ((((_Bool)0) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (345928023U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [(_Bool)1])) ? (arr_2 [i_0] [i_1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (short)31)))))));
                var_23 = ((/* implicit */unsigned char) min((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [18ULL] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_0])))))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((arr_1 [i_0 + 1]), ((((_Bool)1) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-52)))))))));
                arr_4 [(unsigned short)16] = 5U;
            }
        } 
    } 
}
