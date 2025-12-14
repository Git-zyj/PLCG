/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117764
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
    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) var_16))));
    var_18 = max((var_15), (((/* implicit */long long int) (_Bool)1)));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_1 [i_0 - 1]) || (arr_1 [i_0 + 2])))) >= (((((/* implicit */int) arr_1 [i_0 - 1])) - (((/* implicit */int) arr_1 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [(unsigned short)3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
                                arr_12 [i_4] [i_4] [i_2] [i_4] [i_0] = (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4] [i_1] [i_2] [i_1])) << (((((/* implicit */int) var_16)) - (75)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_3] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (var_14) : (((/* implicit */long long int) arr_10 [i_0 - 3] [i_4] [i_2] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 3]))) <= (arr_0 [i_0 + 1] [i_0 - 1])))) << ((((+(arr_0 [i_0 + 1] [i_0 + 2]))) - (2741885597U)))));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((signed char) (_Bool)1))), (var_1)));
}
