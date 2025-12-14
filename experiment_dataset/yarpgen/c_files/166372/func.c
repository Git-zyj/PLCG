/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166372
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
    var_14 |= ((/* implicit */unsigned char) var_12);
    var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((short) 2788693267439972429ULL)), (min((var_3), (((/* implicit */short) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) min((2788693267439972429ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_13)), (((unsigned int) 10255727153800760511ULL)))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_2 [i_0] [i_0] [19ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), ((unsigned short)3725))))) : (((((/* implicit */_Bool) (short)23886)) ? (((/* implicit */unsigned long long int) var_7)) : (var_4))))));
                arr_6 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) 0LL);
            }
        } 
    } 
}
