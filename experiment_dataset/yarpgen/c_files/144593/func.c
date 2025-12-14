/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144593
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((max((8162659406902330545ULL), (8162659406902330545ULL))) ^ (((/* implicit */unsigned long long int) ((long long int) (~(8162659406902330545ULL))))))))));
                var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((10284084666807221070ULL), (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (var_1)))) : (max((((/* implicit */unsigned long long int) var_1)), (8162659406902330537ULL)))))) || (((/* implicit */_Bool) min(((unsigned char)254), (((/* implicit */unsigned char) arr_1 [i_1 - 1] [i_0]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) (short)0);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) % (((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)248)), ((short)-20740))))))));
}
