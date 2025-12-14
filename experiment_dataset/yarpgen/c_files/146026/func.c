/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146026
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) != (max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_3)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) | (11513796882372877533ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2]) > (var_6)))))));
                                arr_13 [i_0] [i_1 - 1] [(unsigned char)5] [i_3] [i_4] [i_4] [1ULL] = ((/* implicit */unsigned char) max((arr_4 [i_0 + 2] [i_1]), (((unsigned long long int) ((unsigned char) (unsigned char)199)))));
                                var_13 += ((/* implicit */unsigned char) arr_6 [i_4] [i_1 - 1] [i_0]);
                            }
                        } 
                    } 
                    var_14 *= arr_1 [11ULL];
                }
            } 
        } 
    } 
    var_15 = var_7;
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((9231527597574995710ULL), (((/* implicit */unsigned long long int) (unsigned char)141)))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)8))))))) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) : (12455406318152501524ULL))))))));
    var_18 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned char)171)))), (((/* implicit */int) min((var_4), (max((var_4), ((unsigned char)94))))))));
}
