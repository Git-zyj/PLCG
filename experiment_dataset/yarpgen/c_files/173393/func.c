/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173393
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
    var_16 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)127)), (((unsigned long long int) ((var_9) ^ (arr_0 [i_0]))))));
                arr_7 [8LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((short)17444), (((/* implicit */short) (signed char)-126)))))));
                arr_8 [i_0] = ((/* implicit */signed char) min((((max((var_3), (((/* implicit */unsigned long long int) arr_0 [i_0])))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_1 [(unsigned char)11]))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [(unsigned char)18])) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)10])) : (arr_0 [i_0]))), (min((arr_0 [17LL]), (((/* implicit */int) var_1)))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) max((((int) ((arr_9 [(_Bool)1] [(_Bool)1] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((/* implicit */int) arr_5 [i_0]))));
                                arr_16 [(short)13] [i_1] [14] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((((/* implicit */int) (short)17468)) - (1696436721))), (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_13 [i_4] [i_3] [i_1] [10ULL]))))))) + (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [2ULL])) + (((/* implicit */int) arr_5 [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))) - (arr_9 [i_0] [i_0] [i_3])))))));
                                arr_17 [9ULL] [i_1] [i_2] [(short)13] [(short)13] [i_2] [(unsigned short)8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)17] [i_0]))) <= (499750829U)))))))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_3] = ((/* implicit */unsigned int) (signed char)-126);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-121)), (var_1)))) ? (((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((int) var_13))))), (((/* implicit */unsigned long long int) (unsigned char)14))));
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_10)) + (104)))));
}
