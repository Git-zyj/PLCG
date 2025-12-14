/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162936
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_3 [i_0 - 1] [13]))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))) : (2850861166928897155LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_4 [i_0] [i_1] [3] = ((/* implicit */unsigned short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [5LL])) ? (((/* implicit */int) (short)-606)) : (((/* implicit */int) (short)-23819)))) <= (((/* implicit */int) var_4)))))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (((_Bool)0) ? (((/* implicit */long long int) 1699683437)) : (9223372036854775807LL))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((min((3415223965U), (((/* implicit */unsigned int) arr_2 [8ULL] [(unsigned char)2] [9LL])))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [13U]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) (short)3966)) || (((/* implicit */_Bool) (short)-2088)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) || (((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 2350506898U))))))) : (((/* implicit */int) (_Bool)1))));
                arr_13 [i_2] [i_2] = ((/* implicit */long long int) -1699683438);
                var_17 = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_4);
}
