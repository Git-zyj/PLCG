/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100402
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_15)))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (2248615987U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
    var_18 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)117)) ? (((((/* implicit */_Bool) 14ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((unsigned int) arr_3 [i_1]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (arr_0 [i_0]) : (arr_0 [i_0]))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))))));
                var_19 = ((((2046351300U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551601ULL)))))));
                var_20 = ((/* implicit */unsigned int) (unsigned char)4);
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (short)19668);
}
