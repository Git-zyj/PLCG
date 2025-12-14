/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102865
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (245760ULL)))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_8)))))) : (((/* implicit */int) var_3))));
                var_10 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)26436)) >= (((/* implicit */int) arr_2 [i_0]))))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0])))) - (27287))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) (+(((max((((/* implicit */int) (short)255)), (var_0))) & (((((/* implicit */int) var_9)) << (((((/* implicit */int) var_9)) - (59113)))))))));
}
