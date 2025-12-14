/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106780
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2 + 1] = ((unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)196)), (arr_0 [i_0] [i_0])));
                    arr_10 [i_2] [(short)15] [12ULL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-28318)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), (arr_3 [i_0]))))) : (arr_4 [i_2 - 2] [i_2 + 2] [i_2 - 2])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_18 [(unsigned short)0] [(unsigned short)0] [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */int) (short)28317)), (((((/* implicit */int) arr_5 [i_2 + 1])) / (((/* implicit */int) arr_0 [i_2 + 1] [i_2 - 1]))))));
                                arr_19 [i_0] [21ULL] [21ULL] [i_3] [i_4] = ((/* implicit */long long int) ((((unsigned int) min((arr_3 [0U]), (arr_12 [4ULL] [i_3] [i_0] [i_0])))) <= ((+((-(var_17)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned int) var_13)), (((var_17) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-28318))))))));
}
