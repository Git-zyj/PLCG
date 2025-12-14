/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179971
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
    var_10 = var_2;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [0LL] [i_2] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-2)) - (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_4 [i_0])) : (((((/* implicit */int) var_1)) + (((/* implicit */int) var_7)))))) + (42)))));
                    arr_9 [(unsigned short)9] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((_Bool) arr_3 [i_1]))) : (((/* implicit */int) arr_3 [i_2]))))));
                }
            } 
        } 
    } 
    var_11 &= (_Bool)1;
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((var_5), (((/* implicit */long long int) var_1)))))));
}
