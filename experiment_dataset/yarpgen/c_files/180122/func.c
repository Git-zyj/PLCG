/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180122
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
    var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(2LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-15975))))) : (max((3350773020U), (234881024U))))) ^ (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */short) ((unsigned int) 3458856555U));
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((11U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((unsigned long long int) 0U)) : (((/* implicit */unsigned long long int) 3790434908U)))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1 + 3]))))))))));
                var_12 = ((/* implicit */unsigned char) (~((+(3350773024U)))));
            }
        } 
    } 
}
