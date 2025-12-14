/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172321
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)53969)) ? (((var_6) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_3 [i_0] [i_1 - 1] [i_0])))) : (((/* implicit */long long int) (-(3815088884U))))))));
                var_14 = ((/* implicit */_Bool) 1533965133332174150LL);
                var_15 = ((/* implicit */int) min((((/* implicit */long long int) (-((+(((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1 + 1]))))))), (((((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65524)) + (((/* implicit */int) arr_4 [i_1] [i_0] [i_1])))))))));
                var_16 = ((/* implicit */unsigned char) ((long long int) (+(var_8))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))));
    var_18 += ((/* implicit */unsigned long long int) (-(var_2)));
    var_19 = ((/* implicit */unsigned short) -9011407273123621173LL);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-9890))))) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) ((signed char) var_4)))));
}
