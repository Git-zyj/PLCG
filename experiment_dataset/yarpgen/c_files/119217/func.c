/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119217
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
    var_17 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) var_2)), (var_14))))) < (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_14))))) >> (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_14))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 = min(((unsigned short)32767), (((/* implicit */unsigned short) (_Bool)0)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) var_7);
                                arr_13 [i_0] [i_1] [i_2] [i_4] = (i_4 % 2 == 0) ? (((/* implicit */short) min((max((arr_12 [i_4] [i_2] [i_2] [i_2] [i_4 - 2]), (arr_11 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4]))), (((arr_12 [i_4] [i_1] [i_1] [i_1] [i_4 + 1]) + (arr_11 [i_1] [i_2] [i_2] [i_4 - 3] [i_4])))))) : (((/* implicit */short) min((max((arr_12 [i_4] [i_2] [i_2] [i_2] [i_4 - 2]), (arr_11 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4]))), (((arr_12 [i_4] [i_1] [i_1] [i_1] [i_4 + 1]) - (arr_11 [i_1] [i_2] [i_2] [i_4 - 3] [i_4]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) min((arr_5 [i_0]), (max((arr_5 [i_0]), (arr_5 [i_2])))));
                    var_20 = ((/* implicit */long long int) ((min((var_11), (((/* implicit */unsigned long long int) arr_8 [i_0] [(signed char)3] [i_0] [(unsigned short)7] [i_0])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) var_0)), (arr_6 [i_0] [i_1] [i_2] [(short)8]))), (((/* implicit */unsigned short) arr_5 [i_2]))))))));
                }
            } 
        } 
    } 
}
