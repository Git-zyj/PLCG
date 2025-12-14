/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110667
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
    var_14 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)32155)), ((+(((/* implicit */int) (unsigned char)0))))));
    var_15 = ((/* implicit */int) min((min((((/* implicit */long long int) ((unsigned int) var_6))), (((long long int) (signed char)-5)))), (((/* implicit */long long int) 0U))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (short)9952)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))))) : (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (_Bool)0)))))))))));
                    var_17 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)-5)), (6ULL)));
                    arr_12 [i_2] [i_0] [i_1 - 1] = ((/* implicit */signed char) ((((_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) (+(((var_13) ? (((/* implicit */long long int) var_2)) : (-8919466321449259303LL))))))));
                }
            } 
        } 
    } 
}
