/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176378
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
    var_12 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) (_Bool)1);
                                arr_14 [i_4 - 3] [i_4 - 3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2147483635)))) > (((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_0 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_5 [i_4 - 4] [i_0 - 1] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((unsigned char) var_1));
                                arr_20 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_6] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((max((arr_1 [i_0 - 1]), (((/* implicit */long long int) var_6)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (arr_1 [i_0 - 1])))))));
                            }
                        } 
                    } 
                }
                var_15 = ((long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1 - 2] [i_1 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_12 [i_0 + 2] [i_0 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned int) var_0))))) : (2478603272U)));
            }
        } 
    } 
}
