/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125209
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
    var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)124)), ((short)-1)));
    var_12 |= ((/* implicit */_Bool) (~((+(((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-124)), (var_4)))) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)25873)) || (((/* implicit */_Bool) -4700675573544247966LL)))))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (short)-6))))))))));
                    arr_9 [i_1] = (!(((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_2 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned int) (short)6);
}
