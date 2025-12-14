/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102895
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
    var_18 -= ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned char)179))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)76)), (-1706542271)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (0))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)37304)) : (((/* implicit */int) (unsigned short)42740)))))) : (((((/* implicit */int) (short)24924)) * (((/* implicit */int) (unsigned char)81))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29305)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)165))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) 602838713U);
}
