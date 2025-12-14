/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176773
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
    var_15 = ((/* implicit */unsigned short) ((signed char) (!((!(((/* implicit */_Bool) var_5)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    var_17 = ((unsigned short) (unsigned char)135);
                    var_18 = ((/* implicit */signed char) (-(3958504280U)));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_6 [i_2 + 1] [i_2 + 1])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_2 + 2]))));
                }
            } 
        } 
    }
    var_20 = var_3;
}
