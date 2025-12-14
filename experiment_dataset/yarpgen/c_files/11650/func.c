/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11650
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (3271549632U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)28672)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) && (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)8)))) == (max((((/* implicit */int) (unsigned char)77)), (var_2))))))))));
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0 + 3])), (var_9))))) : (((var_1) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 3]))))))))));
                }
            } 
        } 
    } 
    var_13 = var_0;
}
