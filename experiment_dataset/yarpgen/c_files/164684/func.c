/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164684
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_19 = ((((unsigned long long int) (unsigned short)46080)) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_3 - 1] [i_2 - 2] [i_2] [i_1] [i_1 + 4]), (arr_9 [i_3 - 1] [i_2 - 2] [i_2 - 1] [i_1 + 4] [i_1 + 4]))))));
                                var_20 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)48)))) > (((((_Bool) (unsigned char)188)) ? (((/* implicit */int) arr_6 [i_0] [(short)10])) : (((/* implicit */int) (short)3442))))));
                            }
                        } 
                    } 
                    var_21 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 + 3]))))) + (((/* implicit */int) min((var_18), (((/* implicit */short) arr_9 [i_2 - 2] [i_2 - 2] [i_2] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */int) min((var_8), (((/* implicit */short) (_Bool)1))));
    var_23 += ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */_Bool) (signed char)127)) ? (1006632960) : (((/* implicit */int) (unsigned short)24482)))))));
    var_24 = ((/* implicit */_Bool) max((var_1), (var_9)));
}
