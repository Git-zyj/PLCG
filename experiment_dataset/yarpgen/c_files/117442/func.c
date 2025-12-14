/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117442
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((((((((/* implicit */_Bool) -4156129130018219195LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)2591)))) <= (((/* implicit */int) (unsigned char)45)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_1]), (((/* implicit */unsigned short) (unsigned char)211)))))))) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((((-1484417405426144586LL) + (9223372036854775807LL))) << (((4294967295U) - (4294967295U)))))) & (((unsigned long long int) var_1))))))));
            }
        } 
    } 
    var_19 = var_10;
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((max((2521676952270182466ULL), (((/* implicit */unsigned long long int) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))), (((/* implicit */unsigned long long int) var_6)))))));
}
