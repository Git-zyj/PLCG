/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162105
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
    var_13 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) var_1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)10335)) - (((/* implicit */int) (short)-27828))));
                        arr_13 [i_3] = ((/* implicit */short) -4264016518349573006LL);
                        arr_14 [i_3 + 1] [i_2] [i_2] [i_3] &= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_3 - 1] [i_2] [i_3]);
                    }
                } 
            } 
        } 
        arr_15 [7U] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) + (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_6 [i_0] [i_0] [i_0])))));
    }
    var_15 = ((/* implicit */_Bool) ((unsigned long long int) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))))));
    var_16 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-13)))))));
    var_17 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((2123614843U) << (((322604630) - (322604600)))))), (max((((/* implicit */unsigned long long int) (signed char)-13)), (var_10))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7))))));
}
