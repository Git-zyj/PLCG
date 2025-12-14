/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161589
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */short) (unsigned char)129)))))))) >> (max((((/* implicit */unsigned long long int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13809)))))), (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1147)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)64388)))))) ? (((long long int) (unsigned short)64411)) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                var_20 *= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 1466647040)) ? (max((204522652635831035LL), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned short)64389))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1147)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((int) (unsigned short)64397)) : (((/* implicit */int) ((_Bool) var_2)))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1147))) ^ (2133390120U)))))));
            }
        } 
    } 
}
