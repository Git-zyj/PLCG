/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144708
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)14] [(short)14] [i_2]))) + ((+(var_2))));
                    arr_9 [i_0] [10U] [10U] [i_0] |= ((/* implicit */long long int) ((((arr_6 [8LL] [i_1 - 1] [i_2 - 1]) / (arr_6 [18LL] [i_1 + 1] [i_2 - 1]))) + (((arr_6 [2U] [i_1 + 2] [i_2 + 1]) - (arr_6 [(signed char)12] [i_1 - 1] [i_2 + 1])))));
                    arr_10 [i_2] [12U] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) min((max((((/* implicit */unsigned int) (_Bool)0)), (1957312316U))), (((/* implicit */unsigned int) (unsigned char)202)))))));
                    arr_11 [(signed char)10] [2U] [16LL] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_9)), (arr_7 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_16 [i_3] [i_3] [i_3] |= ((/* implicit */unsigned long long int) (unsigned char)202);
                                arr_17 [i_0] [i_2] [i_0] [i_2] [i_0] [i_0] [20LL] = ((/* implicit */unsigned long long int) var_8);
                                arr_18 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((short) var_6));
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_6)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((var_0) | (((/* implicit */long long int) 4294967295U)))));
    var_16 = var_7;
}
