/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164775
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
    var_16 = ((/* implicit */long long int) (short)8431);
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_6)), (var_1)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_13 [i_0 + 2] [i_1] [i_0 + 2] [i_0 + 2] [i_0 + 1])) < (((/* implicit */int) arr_6 [(short)0]))))))));
                                arr_15 [i_0 - 1] [i_2] [i_1] [i_0] [i_0 + 1] [i_3] [i_2] = ((_Bool) ((((/* implicit */int) (unsigned short)13761)) / (((/* implicit */int) (unsigned short)13761))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [2])) || (((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)8] [(unsigned char)8] [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23164)) ? (1302039344) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) != (var_2)));
    var_21 = ((/* implicit */short) var_5);
}
