/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171955
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) (~(6133549044207245305LL)));
                var_14 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [13ULL])) : (((/* implicit */int) ((unsigned char) (unsigned char)162))))));
                arr_6 [i_0] [(short)9] [i_1] = ((/* implicit */long long int) max((((/* implicit */short) (unsigned char)92)), ((short)24695)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9920816687176796369ULL)) ? (((/* implicit */int) max(((short)-24695), (((/* implicit */short) (unsigned char)93))))) : (((/* implicit */int) ((((/* implicit */_Bool) 4317464366572528561ULL)) && (((/* implicit */_Bool) ((unsigned int) 6964415535518199265ULL))))))));
}
