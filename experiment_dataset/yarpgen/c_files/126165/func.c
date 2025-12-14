/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126165
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_1 - 1]);
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)43)), ((~(((/* implicit */int) (_Bool)0)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_11 [i_2] [15U] = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60095))) <= (1381138497U)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_17 [i_6] [i_2] [14U] [i_5] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) (+((+(((2911761889549873005ULL) >> (((arr_13 [i_2] [i_3] [i_3] [i_5] [i_6 - 1] [i_5]) - (492114665U)))))))));
                                var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [1U] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_3] [(short)5] [i_5])) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) arr_16 [i_2] [i_3] [0LL] [i_5] [i_6])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 3719463829U)) : (arr_12 [i_2] [i_2] [i_2])));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) 3127372272U))));
                    arr_18 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_4])) > (((/* implicit */int) (unsigned short)5448)))))) > (arr_14 [i_2])));
                    var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) arr_6 [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 - 1]))))), ((~(2196488126U)))));
                }
            } 
        } 
    } 
}
