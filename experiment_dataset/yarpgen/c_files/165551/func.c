/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165551
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
    var_11 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) max((var_1), (var_10)))))), (((/* implicit */unsigned int) ((min((var_6), (((/* implicit */int) var_4)))) <= (((/* implicit */int) var_8)))))));
    var_12 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 |= ((/* implicit */signed char) ((max((max((var_6), (var_10))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_8))))))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_7)))) - (61135)))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((max((var_5), (((/* implicit */long long int) var_9)))) ^ (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))))))));
                arr_5 [i_1 + 1] = var_4;
            }
        } 
    } 
}
