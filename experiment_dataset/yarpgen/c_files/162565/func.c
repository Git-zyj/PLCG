/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162565
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_8))))))) ? ((+(max((((/* implicit */unsigned long long int) var_7)), (511ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [(short)7] [i_1] [i_0] = ((((/* implicit */unsigned long long int) max((((var_8) - (((/* implicit */int) (unsigned short)65012)))), (((/* implicit */int) (unsigned char)124))))) % (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [5ULL] [i_4])) % (((/* implicit */int) (unsigned char)141))))) ? (((((/* implicit */_Bool) (unsigned char)110)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))))) : (((/* implicit */unsigned long long int) arr_1 [i_4] [i_2])))));
                                var_20 = ((/* implicit */int) arr_3 [i_3] [i_3]);
                            }
                        } 
                    } 
                    var_21 = ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_15), (((/* implicit */short) var_4)))))))) ? (min((arr_6 [i_0] [(unsigned short)8] [i_1] [i_2]), (arr_6 [i_0] [i_1] [i_0] [i_2]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)64288)) % (((/* implicit */int) var_12)))), (208598630)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (((!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) < (var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) var_13)) + ((-(var_1)))))));
}
