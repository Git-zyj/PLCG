/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114434
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
    var_13 = ((/* implicit */_Bool) (((-(max((2164869071U), (((/* implicit */unsigned int) (_Bool)0)))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) 2130098224U);
                    var_15 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) 2164869059U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 7891108781018353967LL)))) | (max((17454115232260066165ULL), (((/* implicit */unsigned long long int) var_0))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)32767)) ? (4360311867995117669LL) : (4360311867995117669LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4127900317U)))))) ? (((/* implicit */long long int) var_6)) : ((+(((((/* implicit */_Bool) 3)) ? (7891108781018353967LL) : (((/* implicit */long long int) 2064187032))))))));
}
