/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107241
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
    var_16 = var_3;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_17 *= ((/* implicit */short) var_0);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 + 3] [i_0 - 1]))) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((var_14) ^ (var_14)))) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0])))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_3 + 1] = arr_5 [i_0];
                        arr_13 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                    }
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_18 [i_4] &= ((/* implicit */signed char) var_4);
        var_19 *= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_16 [(unsigned char)3]))))) : (((/* implicit */int) var_1))))) - (((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) var_8)) : ((-(arr_15 [i_4]))))));
    }
    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_8))));
}
