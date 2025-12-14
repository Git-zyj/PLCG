/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162318
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
    var_10 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) -4312553193952057584LL)) ? (var_5) : (var_6))) : (var_5)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_1])), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (-1LL)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : ((-(arr_0 [i_2] [i_1])))));
                    var_12 = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_5 [i_0] [i_1] [i_0]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (unsigned char)200)))))));
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_7))));
                }
            } 
        } 
    } 
}
