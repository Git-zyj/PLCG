/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182321
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned char)216))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)42)) ? (4049153726U) : (2269102635U))), (127U)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(short)9] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (arr_1 [i_2] [i_4]))))))) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_4 - 2] [i_2] [i_3 + 2] [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
                                var_17 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_3 + 2])) ? (((/* implicit */int) arr_3 [i_1] [i_3 + 2])) : (((/* implicit */int) arr_3 [i_1] [i_3 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = var_6;
}
