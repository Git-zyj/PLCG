/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119731
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_1] [i_2] [i_1] [i_0]))));
                    var_18 = arr_1 [i_0] [0ULL];
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */unsigned long long int) (+((+(min((var_8), (((/* implicit */int) var_4))))))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((unsigned long long int) ((((/* implicit */int) var_2)) + (var_8)))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_10)) : (((int) 1030792151040ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17944029765304320LL)) ? (((/* implicit */int) (unsigned short)3529)) : (-433497517)))) ? (((/* implicit */long long int) (-(-433497530)))) : ((((_Bool)1) ? (-1107033594634033246LL) : (((/* implicit */long long int) -1873293762))))))));
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
}
