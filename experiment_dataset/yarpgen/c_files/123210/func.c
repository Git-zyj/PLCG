/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123210
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
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) ((_Bool) arr_0 [i_0])));
                arr_7 [(signed char)0] = ((/* implicit */signed char) ((unsigned char) ((((_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1 + 2]))) : (min((1372523778U), (((/* implicit */unsigned int) arr_2 [10U])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) (short)24308))))));
    var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)-8405))) ? ((+(1372523778U))) : (((/* implicit */unsigned int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_2)))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))), (var_4)))) < (((/* implicit */int) var_3))));
}
