/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130482
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(max((((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))))))));
                var_20 = ((/* implicit */signed char) ((((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33422))))) >> (((/* implicit */int) var_6)))) ^ (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_14))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) && (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) var_14))))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_2)))))))));
    var_22 = ((/* implicit */unsigned short) (-(min((((/* implicit */int) var_11)), (((((/* implicit */int) var_4)) + (((/* implicit */int) var_5))))))));
    var_23 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (max((var_12), (((/* implicit */unsigned long long int) var_8)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
}
