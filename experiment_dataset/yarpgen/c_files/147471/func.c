/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147471
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
    var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) max((var_1), ((signed char)-13))))))) : (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) < (((((/* implicit */long long int) ((/* implicit */int) (short)32749))) / ((-9223372036854775807LL - 1LL)))))) ? (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1])) : (max((min((((/* implicit */long long int) (short)-30534)), (arr_0 [i_1]))), (((/* implicit */long long int) max((((/* implicit */int) var_14)), (arr_3 [i_0] [i_0] [i_2]))))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((int) -3386968305358988824LL)))) >> (((unsigned long long int) (signed char)30))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((long long int) var_5)))));
                                arr_15 [i_4] = ((/* implicit */signed char) (((-(arr_12 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 - 2]))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4 - 3] [i_4 - 3] [i_4 - 3] [(short)1] [i_4 + 2])) && (((/* implicit */_Bool) arr_12 [i_4 - 3] [i_4 - 3] [i_4] [i_4] [i_4 + 1])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_7 [i_2]))));
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_0))))))));
}
