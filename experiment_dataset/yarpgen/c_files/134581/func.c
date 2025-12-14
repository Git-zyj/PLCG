/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134581
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_4 [7LL] [7LL]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */short) ((max((((/* implicit */int) arr_17 [0U] [i_2] [i_4 + 4] [i_4 + 4] [i_4 + 4] [i_4 + 4])), (arr_11 [i_2] [i_2] [i_4 - 1] [i_4] [i_2]))) > (max((arr_11 [i_3] [i_3] [i_4 - 1] [(short)0] [i_2]), (((/* implicit */int) arr_17 [(_Bool)1] [i_2] [i_4 + 4] [i_4 - 2] [(short)6] [i_4]))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_14 [i_2] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 261120U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10759))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_17 [i_0 + 2] [i_0] [i_0 + 3] [i_0 + 1] [i_0] [1LL]))));
                }
            } 
        } 
    } 
    var_18 = min((((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))))), (var_11));
    /* LoopNest 3 */
    for (short i_5 = 2; i_5 < 11; i_5 += 2) 
    {
        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [2LL] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_6 - 2] [i_6] [i_7] [i_6]))) : (144115188075855871LL)));
                    arr_26 [4LL] [4LL] [(short)1] [i_7] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-34)) - (((/* implicit */int) (unsigned short)49133))))), (16U)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_1);
}
