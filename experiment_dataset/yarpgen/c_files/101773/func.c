/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101773
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104)))))) ? (var_6) : (var_7)));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9044873241158810063LL)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)32))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (signed char)111);
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_6) : (1989872594U)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) (short)7553))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-111)), (var_10)))) : (var_0)))));
                    arr_11 [i_0] = ((/* implicit */long long int) (short)-12392);
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((-115905560), (((/* implicit */int) (short)12395))))), (min((-3354795690931133803LL), (((/* implicit */long long int) var_8))))))) ? (max((((/* implicit */unsigned long long int) (signed char)-90)), (var_2))) : (var_2))))));
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -4975146660146224190LL)) ? (var_6) : (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))), (var_3)));
                }
            } 
        } 
    } 
}
