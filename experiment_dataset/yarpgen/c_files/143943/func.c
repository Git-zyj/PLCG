/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143943
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned int) (short)-15133))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((((((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15110))) : (arr_4 [i_3] [i_1]))) << (min((((/* implicit */unsigned int) arr_1 [i_3] [i_4])), (arr_2 [i_1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1])))))));
                                var_19 = ((/* implicit */long long int) arr_7 [i_4] [i_4] [i_4] [i_4]);
                                var_20 = ((/* implicit */unsigned short) min((var_20), ((unsigned short)26723)));
                                var_21 = ((/* implicit */signed char) var_15);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_22 += ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-15133)) : (((/* implicit */int) var_13))))))) || ((!(((/* implicit */_Bool) (unsigned short)51017)))));
                                var_23 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) arr_6 [i_0 + 1])))));
                            }
                            for (int i_6 = 3; i_6 < 12; i_6 += 3) 
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (short)15126)), (arr_4 [i_3 - 1] [i_1]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [(short)6])))));
                                var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (short)15126))) | (-2010650123040501271LL))), (((/* implicit */long long int) ((unsigned int) var_3)))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (2659983939U)))), (((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0])) & (var_7)))))));
                            }
                            arr_18 [(_Bool)1] [(_Bool)1] [i_2] [6ULL] |= ((/* implicit */unsigned long long int) arr_2 [i_0]);
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 4095U))) ? (((/* implicit */int) ((arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]) || (arr_3 [i_0 + 1] [i_0 + 2] [i_0 + 2])))) : (min((((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2] [i_0 - 1])), (arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1] [7ULL] = ((/* implicit */long long int) var_16);
                            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2]))));
                            arr_26 [i_8] [i_7] [i_8] [i_8] [i_8] [i_8] |= max((((/* implicit */short) var_6)), ((short)15133));
                            var_27 &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((unsigned long long int) (short)8191)))))) <= (((/* implicit */int) max((arr_14 [i_7] [i_8] [i_0] [i_1] [i_7]), (((/* implicit */unsigned short) (_Bool)1)))))));
                        }
                    } 
                } 
                var_28 = (+(min((((/* implicit */unsigned long long int) max((arr_6 [i_1]), (((/* implicit */short) arr_1 [i_1] [i_0]))))), (arr_24 [i_1] [i_1] [i_0 - 1] [i_0] [11]))));
                arr_27 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_1] [i_0 + 2] [i_0] [i_0 + 2] [i_1])), (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)65371)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) -6811480874834557551LL)) : (204857201857598535ULL)))));
            }
        } 
    } 
}
