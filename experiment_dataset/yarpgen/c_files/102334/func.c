/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102334
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
    var_12 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15951))) : (var_8)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned short)19354)) & (((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 &= ((/* implicit */unsigned int) max((min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) (signed char)64)))), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (signed char)109)))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 0ULL)))))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((short) (signed char)(-127 - 1))))));
                }
            } 
        } 
    } 
}
