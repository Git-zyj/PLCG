/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179144
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
    var_17 = ((/* implicit */_Bool) ((var_3) >> (((/* implicit */int) ((((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned int) (+(arr_8 [i_4 + 1] [i_4 + 2] [i_3] [i_3])))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((9223372036854775807LL), (9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_2] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)4]))))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 2] [5LL] [(_Bool)1] [5LL] [(_Bool)1] [i_4]))) : (var_3)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
                {
                    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_11))))) > (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) ((signed char) arr_6 [i_1] [i_1] [i_1]))))))));
                }
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((9223372036854775802LL), (9223372036854775807LL)));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((((_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_15)))) : (min((var_0), (((/* implicit */long long int) var_4)))))) + (((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 9223372036854775802LL)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
    var_23 = ((/* implicit */unsigned int) ((((((((min((((/* implicit */long long int) var_4)), ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_14)) - (48823))))) << (((((((/* implicit */unsigned long long int) ((long long int) 9223372036854775782LL))) * (((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) - (3104652366996116259ULL)))));
}
