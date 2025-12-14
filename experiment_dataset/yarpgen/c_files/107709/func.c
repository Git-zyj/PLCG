/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107709
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)48213)), (6850342951889693981ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48223))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (6850342951889693982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))) / (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (16755579998013644956ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))));
                var_15 += ((/* implicit */unsigned char) (_Bool)1);
                arr_5 [9ULL] [9ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31117)) ? (((/* implicit */int) (unsigned short)17312)) : (((/* implicit */int) (unsigned short)48223))))) ? (((/* implicit */int) (unsigned short)17480)) : ((((+(((/* implicit */int) (unsigned char)15)))) ^ (((/* implicit */int) (unsigned short)0))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (unsigned short)17322);
    var_17 = ((/* implicit */unsigned char) (unsigned short)17328);
}
