/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129753
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_1] [i_0]) : (arr_0 [(signed char)1] [(short)20])))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_4 [16] [i_1] [i_1]))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)103)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-16)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_4 [i_1] [i_1] [(_Bool)1])))))))));
                var_15 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [21ULL] [i_1])) % (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */int) var_11))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) & (((/* implicit */int) ((_Bool) (signed char)-1))))));
    var_17 &= var_8;
    var_18 = ((/* implicit */_Bool) ((((_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) var_0))))))));
}
