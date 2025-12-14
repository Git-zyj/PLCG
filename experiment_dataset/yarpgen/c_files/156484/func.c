/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156484
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
    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_5 [i_0] [i_0])) | (((/* implicit */int) arr_5 [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6404692)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (4841324445350925594LL)))) ? (var_12) : (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)35292))))))));
                var_14 = ((/* implicit */unsigned char) ((unsigned int) (+(((((/* implicit */_Bool) (unsigned short)52960)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7))))));
                arr_7 [i_0] &= ((/* implicit */signed char) var_10);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((signed char) 2089089678U)))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_3 + 1] [i_3 - 1] [i_1] [i_3 + 1])))) & (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_11 [i_3 - 1] [(unsigned short)6] [i_4] [i_3]))))))));
                                arr_17 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)18073)) * (((((((/* implicit */int) var_2)) - (((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [i_3 - 1])))) * (((/* implicit */int) ((signed char) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
