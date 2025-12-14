/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100242
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
    var_10 = ((/* implicit */int) var_6);
    var_11 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_8 [(short)9] [i_0] = ((/* implicit */unsigned int) ((var_0) ? (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_0] [i_0 - 1]) : (arr_5 [i_0] [i_0 + 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5755449918070456324LL)) ? (3621273617U) : (((/* implicit */unsigned int) 80553427))))) ? (((/* implicit */int) (unsigned char)43)) : (-1901779404))))));
                var_12 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (short)-67)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (unsigned short)19725)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1])))));
            }
        } 
    } 
}
