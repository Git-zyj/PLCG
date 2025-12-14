/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121348
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
    var_17 = ((/* implicit */short) ((18446744073709551612ULL) >> (((6486798182691728112LL) - (6486798182691728058LL)))));
    var_18 |= ((/* implicit */unsigned short) (unsigned char)113);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_1] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17460))) * (11143386387983495794ULL))) : (((/* implicit */unsigned long long int) max((773550205445922288LL), (var_6)))))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) >> (((((6063263244708032474ULL) | (var_2))) - (6263820900212125646ULL))))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_10) : (6486798182691728116LL)))) ? ((~(var_13))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (var_6)))))))) : (6486798182691728084LL)));
                }
            } 
        } 
    } 
}
