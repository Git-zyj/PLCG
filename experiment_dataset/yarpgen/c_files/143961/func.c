/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143961
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)4] [i_3] [i_4])) ? (((/* implicit */int) ((unsigned short) min((((/* implicit */int) (_Bool)0)), (-1011018662))))) : (-1011018678)));
                                var_12 -= (+(((/* implicit */int) (_Bool)1)));
                                var_13 *= (-(arr_9 [i_4] [i_3] [i_2] [7ULL] [8] [i_0]));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(arr_3 [i_2])))), (arr_2 [i_0] [(short)8] [i_3]))))));
                                var_15 += ((/* implicit */unsigned long long int) min((arr_6 [i_1] [i_3] [i_4]), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_3] [i_1] [i_0])) || (((/* implicit */_Bool) 1105198221U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16382)) | (((((/* implicit */_Bool) 986437058U)) ? (((/* implicit */int) arr_14 [i_6 - 2] [i_6] [i_6] [i_6 - 2] [i_6 + 4] [i_6 - 1])) : (((/* implicit */int) (signed char)38))))));
                                var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                                arr_17 [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6 + 4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 14185310563526280933ULL))))))))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [12ULL] [i_1])) ? (-2550685328907619870LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)4096)) ? (((/* implicit */int) (unsigned short)16382)) : (((/* implicit */int) (short)1984)))))));
                    var_19 = min((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [(unsigned short)2])), (-1));
                    var_20 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4088))) >= (arr_15 [i_2] [i_2] [i_1] [(_Bool)1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)61)) ? (-8982778270269812563LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))));
}
