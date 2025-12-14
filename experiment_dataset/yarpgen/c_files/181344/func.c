/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181344
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
    var_15 = ((/* implicit */long long int) ((var_4) < (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-116)))) : (((/* implicit */int) var_5))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(var_4))))));
    var_17 = ((/* implicit */unsigned int) (~(var_11)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = min(((-(0ULL))), (((/* implicit */unsigned long long int) (signed char)-32)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2 + 1] [i_1] [i_2] [i_3] = ((((unsigned int) (signed char)6)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2181843386368ULL)) ? (((/* implicit */int) (unsigned char)8)) : (773158723)))));
                            var_19 = ((/* implicit */short) min((max((((/* implicit */unsigned int) (unsigned char)126)), (var_3))), (((/* implicit */unsigned int) var_4))));
                            var_20 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) var_2)), (var_11)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2551584717U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56))) : (0U))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((var_22), (var_10)));
}
