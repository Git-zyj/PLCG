/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187695
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(18446744073709551607ULL)))) ? (min((min((1152214938221841016ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) var_4)) : (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))))), (min(((unsigned char)127), (arr_3 [i_0])))))))));
                arr_8 [i_0] [9LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 579781558U)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) var_12))))) ? (((((/* implicit */_Bool) (-(arr_0 [12ULL] [11])))) ? (((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_0]), (((/* implicit */long long int) (short)23464))))) : (min((var_3), (var_7))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (2904060270U))))));
                var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-64))))), (min((arr_5 [i_1] [i_0]), (arr_5 [i_0] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), (var_2)))), (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_6))))))) ? ((+((-(var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_17 = var_0;
    var_18 = ((/* implicit */unsigned short) var_13);
}
