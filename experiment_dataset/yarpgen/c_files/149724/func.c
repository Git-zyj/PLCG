/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149724
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */short) ((unsigned char) max(((short)0), (((/* implicit */short) var_7)))));
                arr_6 [i_0] = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) > (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0] [i_0])), (var_1)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18)) ? (((((/* implicit */_Bool) var_11)) ? ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((_Bool) max((var_11), (((/* implicit */short) var_3))))))));
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)7)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0)))))));
}
