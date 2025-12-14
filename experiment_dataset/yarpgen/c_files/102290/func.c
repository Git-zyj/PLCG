/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102290
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((int) arr_6 [i_0 - 3]))) : ((-(var_10)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58065))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (9223372036854775807LL)))));
                                arr_13 [(unsigned char)6] [i_0 - 1] [(short)4] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [(unsigned short)2] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((-4642521372438254689LL) > (((/* implicit */long long int) ((/* implicit */int) var_1))))) || (((/* implicit */_Bool) (+(var_7)))))))) : ((-9223372036854775807LL - 1LL))));
                                arr_14 [i_2] [i_3] [i_1] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_2);
                                arr_15 [i_2] [i_1] [i_2] [i_3] [8] = ((/* implicit */short) (-(((/* implicit */int) max((arr_7 [i_1] [i_2] [5U]), (var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) 1258971411))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) var_17)) / (36028797018898432LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))) : (var_6)))));
    var_21 &= ((/* implicit */unsigned short) max((((((/* implicit */int) ((unsigned short) (_Bool)1))) & (var_2))), ((-(((/* implicit */int) var_8))))));
    var_22 += ((/* implicit */unsigned short) var_13);
}
