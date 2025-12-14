/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154565
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
    var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((unsigned char) var_11)))) ? (max((((/* implicit */unsigned long long int) 4214987788U)), (((((/* implicit */_Bool) var_12)) ? (4599809265221528278ULL) : (((/* implicit */unsigned long long int) 9187343239835811840LL)))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)124)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_2 [1U] [i_1])), (((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_19)))))), ((~(((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                arr_5 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) max((arr_3 [i_0] [i_1]), (((/* implicit */short) var_16))))) : (((/* implicit */int) (unsigned char)139)))), ((+(((/* implicit */int) arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
}
