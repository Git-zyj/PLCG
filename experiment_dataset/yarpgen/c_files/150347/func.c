/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150347
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
    var_14 = ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (unsigned short)60382)) ? (-2147483631) : (((/* implicit */int) (short)-5747))))))));
    var_15 = ((/* implicit */short) var_13);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) % (((((/* implicit */_Bool) -7360889533371251228LL)) ? (-2147483642) : (((/* implicit */int) (unsigned short)5164))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483642)) && (((/* implicit */_Bool) (unsigned short)5156)))))));
                    var_18 = ((/* implicit */short) var_3);
                    arr_10 [i_0] [(unsigned short)11] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (4294967295U))))), (((var_11) / (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */long long int) arr_6 [3ULL] [i_3 + 1] [i_2])) | (min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)34158)))))), ((+(arr_14 [i_0] [i_1] [i_2] [i_3] [i_4])))));
                                var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) arr_5 [i_4] [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_4] [i_1] [i_0]))))) : (min((((/* implicit */long long int) var_6)), (-9223372036854775800LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1])) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (arr_9 [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            {
                arr_22 [i_6] = ((/* implicit */signed char) arr_0 [i_5 - 1]);
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((var_8), (((/* implicit */long long int) (signed char)70))))))) ? (((/* implicit */int) min((var_9), (((/* implicit */short) arr_2 [i_6] [i_6]))))) : (arr_17 [i_5 - 1] [i_6 + 1])));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        {
                            arr_29 [i_6] [(short)6] [i_7] [i_8] = ((/* implicit */long long int) min((max((arr_20 [i_5 - 1] [i_5 - 1] [i_6 - 1]), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_6)), (var_12)))))), (((/* implicit */unsigned int) arr_25 [i_8] [i_8] [i_7] [i_8] [i_8]))));
                            var_21 = ((/* implicit */unsigned int) (~(((int) arr_19 [i_5 - 1]))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((1027583528U) % (1431536232U))))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-9223372036854775800LL)))) ? (((/* implicit */unsigned long long int) ((arr_27 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5]) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_6] [i_6] [i_7] [i_7])) : (((/* implicit */int) arr_27 [i_6] [i_6 + 2] [i_6 - 1] [i_6] [i_6] [(unsigned short)13]))))) : (((arr_27 [i_5] [i_6] [i_6] [i_6] [i_6] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551613ULL)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1U) : (15U)));
            }
        } 
    } 
}
