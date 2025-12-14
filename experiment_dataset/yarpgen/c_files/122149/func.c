/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122149
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) -3514928470133320564LL))), ((unsigned short)59014))))) / (((var_16) >> (((((/* implicit */int) var_3)) - (4196)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)6525)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)6522)))), (((((/* implicit */int) var_3)) | (arr_5 [i_0] [i_0 + 2] [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_12 [9ULL] [i_0] [i_0] [i_3] [i_4] [i_3] [4U] = ((_Bool) (~(((((/* implicit */_Bool) (unsigned short)59027)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                                var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)59014))))) ? ((+(max((((/* implicit */long long int) arr_0 [i_0] [i_3])), (arr_4 [i_0]))))) : (((/* implicit */long long int) ((((var_0) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2)))) + ((-(((/* implicit */int) arr_2 [i_0] [i_0] [(signed char)7]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 3643444308080527484LL)))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)58999))));
                        var_21 = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) 2398740575U)) : (arr_9 [i_5] [i_2] [i_2] [i_1 - 3] [i_0]));
                        arr_18 [i_0] [i_1 - 3] [i_1 + 1] [i_1 - 2] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_13)))));
                    }
                }
            } 
        } 
    } 
}
