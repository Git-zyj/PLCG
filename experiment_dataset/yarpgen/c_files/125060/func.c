/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125060
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned short)20), (((/* implicit */unsigned short) var_10))))) ? (min((918285582325257134ULL), (((/* implicit */unsigned long long int) (unsigned char)250)))) : (((((/* implicit */unsigned long long int) var_16)) * (1643415353585112813ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) min(((signed char)124), ((signed char)-1))))))))));
                arr_5 [i_0] [(signed char)14] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))));
                var_18 = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_14)))), (min(((-2147483647 - 1)), (((/* implicit */int) var_4))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min(((((~(((/* implicit */int) var_15)))) != (((/* implicit */int) ((-774445809) < (((/* implicit */int) var_4))))))), (((max((((/* implicit */int) var_4)), (var_16))) < (((/* implicit */int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
}
