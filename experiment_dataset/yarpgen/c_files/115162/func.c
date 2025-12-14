/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115162
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_8 [i_2 + 1] [i_0 + 1] [i_2 - 2])))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (max((10756078521548960631ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))))) : (((/* implicit */unsigned long long int) var_2))));
                    var_14 = ((/* implicit */signed char) min((var_11), (((/* implicit */long long int) ((arr_6 [i_0] [i_0 + 1]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-3189)) : (((/* implicit */int) arr_0 [i_0]))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (-123282490869776441LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4173)))));
    var_16 = ((/* implicit */unsigned char) var_12);
}
