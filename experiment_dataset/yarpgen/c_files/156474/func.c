/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156474
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
    var_10 &= ((/* implicit */_Bool) (+(4186495053U)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [2ULL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-37))))), (((arr_3 [i_2 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47940)))))))) ? (min((17U), (((/* implicit */unsigned int) (unsigned short)42060)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */_Bool) (short)22872)) || (((/* implicit */_Bool) (unsigned short)3)))), ((!(((/* implicit */_Bool) -12LL))))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (14170631411458381029ULL))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)29)))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) (_Bool)1);
}
