/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149535
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21877))) : (2669008121U)));
    var_21 = ((/* implicit */short) ((unsigned int) var_0));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) (+(((((((/* implicit */int) (signed char)0)) + (((/* implicit */int) (signed char)-3)))) / (((/* implicit */int) var_16))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((36028247263150080ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))))))));
                arr_4 [i_1] = ((/* implicit */unsigned long long int) (short)14848);
            }
        } 
    } 
    var_24 = ((max((((/* implicit */unsigned int) ((_Bool) var_3))), ((-(var_9))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_17))));
}
