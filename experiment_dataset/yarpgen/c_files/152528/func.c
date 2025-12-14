/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152528
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
    var_10 ^= ((/* implicit */signed char) (~(max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (max((((/* implicit */long long int) var_9)), (var_3)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (arr_0 [i_0]))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((_Bool) (unsigned short)64276)))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_2 [i_0])))) + (((((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0])), (var_2)))) << (((((/* implicit */int) var_4)) + (9398))))))))));
    }
    var_14 = ((/* implicit */_Bool) var_4);
}
