/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134262
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
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1 + 1] [(unsigned short)4] = ((/* implicit */unsigned char) var_5);
                arr_7 [10ULL] [i_1 - 1] [i_0 + 2] &= ((/* implicit */signed char) var_0);
                var_11 *= (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_6)), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_3)))))))));
                var_12 += ((/* implicit */short) (~((+(((((/* implicit */unsigned long long int) 0U)) + (var_4)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (((~((~(((/* implicit */int) var_9)))))) ^ (((/* implicit */int) var_2))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) - (((/* implicit */int) (((-(((/* implicit */int) (short)-2905)))) < ((~(((/* implicit */int) var_0)))))))));
}
