/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110264
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
    var_20 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (-1LL)))));
                var_22 = ((/* implicit */int) arr_1 [i_0] [i_1]);
                var_23 = ((/* implicit */long long int) (((+(arr_0 [i_0] [i_1]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (2LL))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) (_Bool)1);
    var_25 += min((var_5), (max((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) var_1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-2LL))))));
}
