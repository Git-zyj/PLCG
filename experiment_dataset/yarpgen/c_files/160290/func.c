/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160290
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) max((var_1), (((/* implicit */short) (signed char)-1)))))));
                arr_6 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) 512141356392477088LL))))))) << (((arr_4 [i_0] [i_0] [i_0]) - (14367761923773606132ULL)))))) : (((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) 512141356392477088LL))))))) << (((((arr_4 [i_0] [i_0] [i_0]) - (14367761923773606132ULL))) - (15169054935205214496ULL))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)32122)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned long long int) var_9)), (min((var_14), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            }
        } 
    } 
    var_17 ^= (unsigned short)14;
}
