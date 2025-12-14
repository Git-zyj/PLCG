/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133643
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_12))));
    var_14 = ((/* implicit */int) ((854183975U) < (4294967295U)));
    var_15 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) ? (((((((/* implicit */_Bool) 1U)) ? (10207174591225750403ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3440783299U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) var_8))))) : (min((var_9), (((/* implicit */unsigned long long int) (signed char)-4))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) (+(3440783291U)));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 854184005U)) && (((/* implicit */_Bool) var_7))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 289160765U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16650))) : (4005806531U)))) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_1] [17U] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_2] [i_3])) : (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [3ULL])))))));
                            var_17 = ((/* implicit */unsigned int) arr_2 [i_3] [i_2]);
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((long long int) 854183997U)))));
                            var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) ^ (((/* implicit */int) (unsigned char)73)))) >= ((+(((/* implicit */int) arr_1 [i_0]))))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */signed char) 4005806542U);
            }
        } 
    } 
}
