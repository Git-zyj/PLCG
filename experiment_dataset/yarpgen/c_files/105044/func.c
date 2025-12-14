/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105044
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_11 = (((+(arr_5 [i_0]))) & (arr_5 [i_1]));
                    var_12 = ((/* implicit */unsigned char) ((((long long int) arr_3 [i_1])) ^ (max((((/* implicit */long long int) ((short) var_3))), (min((((/* implicit */long long int) arr_2 [(unsigned char)11] [i_1])), (var_9)))))));
                    var_13 = ((/* implicit */unsigned long long int) (~(((long long int) arr_3 [i_0]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_7)))));
    var_15 = ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned int) var_4)), (((unsigned int) (unsigned short)22997)))));
}
