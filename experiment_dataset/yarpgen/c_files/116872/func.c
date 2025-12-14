/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116872
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_9))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_15 = arr_1 [9];
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) (signed char)127);
                        arr_11 [i_2] [i_1] [i_2 + 1] [i_2 + 1] [i_3 + 2] = ((/* implicit */short) ((((((/* implicit */int) (signed char)-105)) + (2147483647))) << (((((/* implicit */int) var_7)) - (47495)))));
                        arr_12 [i_2] [i_1 - 2] [(unsigned char)1] [i_3 - 3] [i_3 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_0] [(signed char)0] [(unsigned char)0] [i_3])) : (((/* implicit */int) (short)32746))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_2] [i_0] [(unsigned char)6]))) : (var_5)));
                        arr_13 [i_2] [i_2 + 1] [i_1] [(unsigned short)13] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_1 - 2] [6ULL])) * (((/* implicit */int) arr_4 [i_1] [i_1 + 2] [i_4]))));
                        arr_16 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_7 [i_2] [i_1] [(unsigned char)8] [i_1]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_0] [i_2 + 1] [i_0])) : ((-(((/* implicit */int) (signed char)-72)))))))));
                                var_19 = ((/* implicit */unsigned char) arr_14 [i_2 + 1] [i_1 - 2] [i_2]);
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (((var_12) | (((/* implicit */unsigned int) arr_1 [7ULL]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_18 [i_2] [i_1] [i_0] [i_0]))));
                }
                var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_21 [i_0] [i_1 + 4] [i_1 + 2] [i_0]))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-13953)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)13952)))), ((((!(((/* implicit */_Bool) 17870283321406128128ULL)))) ? (((/* implicit */int) (unsigned char)162)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (signed char)117))))))));
}
