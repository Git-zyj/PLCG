/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133817
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
    var_15 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)16])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [(_Bool)1] [i_1]))))) / (max((((/* implicit */long long int) arr_3 [4ULL] [i_0] [17LL])), (arr_0 [12LL]))))) << (((((/* implicit */int) ((short) ((unsigned char) arr_0 [14])))) - (197)))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (signed char)-59)), (arr_3 [i_0] [i_0] [i_1]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((_Bool)1)))))))) ? (((((/* implicit */int) ((unsigned char) var_0))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [17LL] [i_1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [14LL] [i_0])))))))));
            }
        } 
    } 
}
