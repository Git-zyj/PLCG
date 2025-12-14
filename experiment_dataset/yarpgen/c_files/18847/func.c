/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18847
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
    var_19 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_1 + 1] [i_1 + 1] &= ((/* implicit */unsigned short) min((((unsigned char) -3630370571425984897LL)), ((unsigned char)249)));
                arr_8 [i_1] = ((/* implicit */short) (((-(((/* implicit */int) min(((short)-10032), (((/* implicit */short) (signed char)-48))))))) == (((((/* implicit */_Bool) (unsigned short)9050)) ? ((+(((/* implicit */int) (_Bool)1)))) : (min((-302512360), (((/* implicit */int) (short)31884))))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (min((-8507173257986938010LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)7))))))) ? (max((min((-6579325466623627185LL), (((/* implicit */long long int) (unsigned short)24764)))), (((/* implicit */long long int) (~(-830667545)))))) : (((/* implicit */long long int) min((((((/* implicit */int) (short)21308)) | (((/* implicit */int) (unsigned char)41)))), ((+(((/* implicit */int) (unsigned char)73)))))))));
}
