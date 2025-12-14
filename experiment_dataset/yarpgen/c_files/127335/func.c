/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127335
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
    var_19 = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))))) ^ (min((var_15), (((/* implicit */unsigned int) (unsigned short)40809))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)60)), ((unsigned short)24729))))) + (((((/* implicit */unsigned long long int) var_13)) + (var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [(unsigned char)12] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1038132386U)), (max((((var_17) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16530))))), (((/* implicit */unsigned long long int) ((17380907603474193852ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))))))))));
                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)157))))) ? (arr_3 [i_0] [6LL]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3256834909U)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (unsigned short)40809))))))))));
            }
        } 
    } 
}
