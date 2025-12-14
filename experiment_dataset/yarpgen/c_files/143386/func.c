/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143386
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
    var_15 = ((/* implicit */long long int) ((signed char) var_13));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) 6949275042853066204ULL))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)130))) : (((arr_6 [(unsigned short)18]) ? (arr_5 [i_0] [(short)5] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (((_Bool)1) ? (12760905413884686903ULL) : (((/* implicit */unsigned long long int) -5196707025472983770LL)))))))));
                    var_17 = ((/* implicit */unsigned int) ((signed char) arr_3 [i_0 - 1]));
                    var_18 = ((/* implicit */unsigned int) ((int) ((long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))));
                    var_19 &= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_1 [i_0 - 3])) ^ (((/* implicit */int) var_14)))), (((/* implicit */int) arr_6 [i_0 - 1]))));
                }
            } 
        } 
    } 
}
