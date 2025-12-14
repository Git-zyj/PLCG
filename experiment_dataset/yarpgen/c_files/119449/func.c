/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119449
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
    var_16 -= ((/* implicit */unsigned char) ((unsigned short) (signed char)20));
    var_17 = ((/* implicit */unsigned short) ((((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (max((((/* implicit */unsigned long long int) var_2)), (var_1))))) == (max((min((var_4), (((/* implicit */unsigned long long int) -802595598)))), (((/* implicit */unsigned long long int) (unsigned short)57778))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 802595598)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))) : (1361102677320576194ULL)));
                var_18 -= ((/* implicit */unsigned char) (+(max((((/* implicit */int) ((signed char) (signed char)-114))), (var_7)))));
            }
        } 
    } 
}
