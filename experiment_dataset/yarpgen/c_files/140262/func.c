/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140262
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
    var_20 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) arr_2 [(unsigned short)8] [(unsigned short)23]))))))) ? ((-(min((((/* implicit */int) (_Bool)1)), (469762048))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                var_22 = ((/* implicit */long long int) arr_0 [i_0] [19U]);
            }
        } 
    } 
    var_23 = var_19;
}
