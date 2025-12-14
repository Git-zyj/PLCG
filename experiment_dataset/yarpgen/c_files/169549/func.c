/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169549
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)1))))) | (var_9)));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_11) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) == (max((((/* implicit */unsigned long long int) var_5)), (var_11)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) <= (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))))))));
                    var_16 -= ((/* implicit */signed char) var_13);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (((long long int) var_5)))))));
    var_18 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) var_6)) : (min((var_7), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) / (var_5)))))))));
}
