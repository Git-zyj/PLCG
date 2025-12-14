/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11171
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) % ((-(((/* implicit */int) (short)-22)))))))));
                    arr_9 [i_0] [(unsigned char)13] [i_0] = ((/* implicit */unsigned int) (short)-21757);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_2))));
    var_15 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) -641012986)) && (((/* implicit */_Bool) ((((/* implicit */int) (short)1)) + (((/* implicit */int) (short)83)))))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (~(var_7)))) : (var_9)))));
}
