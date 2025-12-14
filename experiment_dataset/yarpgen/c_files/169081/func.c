/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169081
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (~(((unsigned long long int) arr_0 [i_0 - 2]))));
                arr_5 [i_0] = ((/* implicit */unsigned int) (-((+((+(var_8)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) -55950428832391118LL)))))))));
                            var_20 &= ((/* implicit */int) (-(min((arr_6 [i_0 + 3] [i_0 + 2] [i_0]), (((/* implicit */long long int) (unsigned short)40554))))));
                            var_21 *= ((/* implicit */signed char) (unsigned short)24591);
                            arr_10 [i_3] [i_1] [(short)14] [6U] [i_2] [i_1] &= ((/* implicit */signed char) min((arr_9 [i_2 - 2] [i_1] [0LL] [i_3] [i_0 + 1]), (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned int) (short)-21250)), (1216752598U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
    {
        var_22 &= arr_13 [i_4] [i_4 + 2];
        arr_15 [i_4 + 2] [i_4 + 2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_16)))) - (((/* implicit */int) arr_14 [i_4 + 4]))))), (((unsigned long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) var_14)))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_7)) * (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)40549)), (arr_0 [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)103)) * (((/* implicit */int) (unsigned short)24591))))) : (min((arr_0 [(unsigned char)11]), (((/* implicit */unsigned long long int) (_Bool)0))))))));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
}
