/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172725
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
    var_18 &= ((/* implicit */short) (+(18446744073709551610ULL)));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) || (((/* implicit */_Bool) 3637627807U))))), (((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))))), (((((/* implicit */_Bool) ((short) (unsigned short)29344))) ? (arr_5 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) (+(var_14))))))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_5 [i_0] [i_0] [i_0])))), ((~(18446744073709551610ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2]))))))));
                    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((min((2ULL), (((/* implicit */unsigned long long int) (short)-12162)))) <= (16ULL)))), (min((((/* implicit */unsigned long long int) ((int) arr_5 [i_0] [i_1] [i_2]))), (18446744073709551610ULL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((short) var_4));
}
