/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153328
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1550335880626328698ULL), (((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_1 + 1] [i_1 + 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2] [i_1 + 3])) : (((/* implicit */int) (signed char)-125))))) : (((((/* implicit */_Bool) 715636896627055881LL)) ? (2150219231326646396LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [(short)8] [(short)8] [i_4] [i_4] &= var_6;
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (arr_8 [i_3] [i_2 - 2] [i_3 + 2]))))) * (min((arr_8 [i_0] [i_2 - 2] [i_3 + 1]), (arr_8 [i_0] [i_2 - 2] [i_3 + 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned int) var_1);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))) <= (var_3)));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3))))), (var_6)))), ((-(((/* implicit */int) (signed char)127))))));
}
