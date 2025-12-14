/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147938
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
    var_16 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (+(var_7))))) ? (((((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (unsigned char)18)))) ^ (((/* implicit */int) max((var_11), (var_9)))))) : (((/* implicit */int) ((_Bool) ((unsigned short) var_13)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_0] [(signed char)11] [i_0])), (max((((((/* implicit */_Bool) arr_2 [(unsigned short)4])) ? (((/* implicit */int) arr_1 [(short)12])) : (((/* implicit */int) arr_5 [(short)6] [i_1] [(short)7])))), (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (((unsigned int) (unsigned char)0)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139)))));
            }
        } 
    } 
}
