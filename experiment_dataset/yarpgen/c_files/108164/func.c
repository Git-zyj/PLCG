/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108164
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))));
                    var_13 *= ((/* implicit */unsigned int) 14963973933781668839ULL);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)127))) ? (max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned short) var_1))))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) -1045428118)) : (3482770139927882776ULL))))) : ((+(((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))))))));
}
