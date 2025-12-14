/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100509
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
    var_12 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) 462417375)) : (252220404U)))))) ? (((/* implicit */int) (signed char)52)) : (462417375)));
                var_14 |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)10797), (((/* implicit */short) (unsigned char)3)))))) % (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) 1846817474U)) : (var_0))))) * (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (10791116515920341769ULL)))));
                var_15 &= ((/* implicit */unsigned char) 1688258160U);
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-4375)) ? (933749561U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))), (max((var_11), (((/* implicit */unsigned int) arr_2 [i_0]))))))), (max((((((/* implicit */_Bool) arr_3 [(unsigned char)6] [(unsigned char)6])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) arr_3 [i_0] [i_0 - 1])))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) var_11);
            }
        } 
    } 
}
