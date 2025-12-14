/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183238
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
    var_18 = ((/* implicit */unsigned short) min(((((-(((/* implicit */int) var_11)))) / (max((var_8), (((/* implicit */int) (short)12371)))))), (((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) arr_10 [i_0])))));
                                arr_15 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+((+(arr_9 [i_4] [i_4] [i_4] [i_4])))))), (((((/* implicit */_Bool) (short)-19900)) ? (229864350U) : (229864350U)))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_0])), ((-(((/* implicit */int) (unsigned short)3935))))))) ? ((~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < (max((((/* implicit */int) var_4)), (arr_8 [i_0] [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_5] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_17 [i_6] [i_0] [i_5] [i_2] [i_6]), (arr_17 [i_0] [i_0] [i_0] [i_2] [(_Bool)1])))) ? (max((((/* implicit */unsigned int) (unsigned char)108)), (229864350U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 229864350U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */int) min((arr_13 [i_0] [i_1] [i_1] [i_6] [i_6]), (arr_13 [i_6] [i_5] [i_2] [i_1] [i_0])))) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (229864350U)))) == (((/* implicit */int) arr_18 [5] [5] [i_0] [(short)12] [i_0] [i_0])))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)122)))))) <= (arr_16 [i_0] [i_0] [i_0] [i_2]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_5] [i_6])) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_6])), (var_7)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) arr_0 [i_2]))))))) : (229864350U)));
                                var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) ((arr_21 [9U] [(_Bool)1] [(_Bool)1] [i_5] [i_5] [(_Bool)1] [i_5]) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0))))))), (((((/* implicit */_Bool) 416845207492029290ULL)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
