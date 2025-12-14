/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145380
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3922320524U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2])) : ((-(9223372036854775807LL)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 1576226437)) : (min((arr_1 [i_0] [i_2]), (((/* implicit */long long int) 2147418112)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_9)))))));
                    arr_11 [i_0] = var_4;
                    arr_12 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */signed char) ((((9223372036854775807LL) >= (2199014866944LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (9223372036854775807LL)));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */unsigned long long int) ((_Bool) (!(((_Bool) var_2)))));
}
