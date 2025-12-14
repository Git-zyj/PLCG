/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182486
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) (-((+(7153341361246033520LL))))))));
    var_11 = ((/* implicit */int) (~((-(var_6)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) min((max((arr_5 [i_1] [i_0]), (((/* implicit */long long int) -1)))), (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : ((-(((((/* implicit */_Bool) var_6)) ? (4147152453U) : (((/* implicit */unsigned int) var_9)))))));
                    var_13 = ((((/* implicit */_Bool) min((arr_0 [i_2]), (arr_0 [i_0])))) ? (min((arr_0 [4]), (arr_0 [i_0]))) : (arr_0 [i_0]));
                }
            } 
        } 
    } 
}
