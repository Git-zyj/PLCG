/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170477
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
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 378568520)) ? (((((/* implicit */_Bool) var_10)) ? (-378568522) : (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_15))))))) : ((+(9223372036854775807LL)))));
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) -9223372036854775791LL))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (~(1700220232)));
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */long long int) -378568520)) : ((-9223372036854775807LL - 1LL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) (+(arr_8 [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 2])));
                                var_21 |= ((/* implicit */unsigned long long int) ((max((-9223372036854775807LL), (((/* implicit */long long int) -1030538901)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) -1))) ? (-1) : (((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])) / (((/* implicit */int) (short)3130)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
