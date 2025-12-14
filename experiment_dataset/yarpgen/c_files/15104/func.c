/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15104
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
    var_18 = ((/* implicit */short) var_2);
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) var_16))));
    var_20 |= ((/* implicit */unsigned short) var_10);
    var_21 = ((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */long long int) -1)) % (9223372036854775807LL)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */signed char) -9223372036854775807LL);
                    arr_10 [i_2] [(unsigned short)2] [i_2] = ((/* implicit */signed char) var_15);
                    var_22 = ((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) (short)-32753))));
                    var_23 = ((/* implicit */unsigned long long int) 9223372036854775806LL);
                }
            } 
        } 
    } 
}
