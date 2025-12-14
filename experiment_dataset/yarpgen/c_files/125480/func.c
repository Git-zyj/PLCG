/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125480
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (var_18) : (((/* implicit */long long int) var_3))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(arr_0 [i_2] [(_Bool)1])))))) ? (((((/* implicit */_Bool) var_1)) ? ((~(arr_6 [i_2] [i_1]))) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (var_7))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_2]) : (((long long int) var_17)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_2])) : (var_1))))))))));
                    var_23 = ((unsigned int) (((_Bool)0) ? (664321664389220282ULL) : (((/* implicit */unsigned long long int) 3230116185695498639LL))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max(((-(var_3))), (var_13))))));
    var_25 *= ((/* implicit */long long int) var_16);
}
