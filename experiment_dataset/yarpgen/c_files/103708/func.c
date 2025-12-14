/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103708
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
    var_14 = ((/* implicit */int) var_6);
    var_15 = ((/* implicit */unsigned char) var_8);
    var_16 = ((/* implicit */short) max(((~(2031357389U))), (((min((var_10), (((/* implicit */unsigned int) var_3)))) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) var_1);
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_0] [(short)7] [i_2] [i_3] [i_4])))) ? (arr_8 [3LL] [i_0 + 2] [i_1 - 2] [i_3 - 1]) : (((/* implicit */long long int) max((2112855923U), (((/* implicit */unsigned int) var_1)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [(unsigned char)11])) ? (((/* implicit */int) arr_9 [5ULL])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_4]))))))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_4]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                    var_19 -= ((((4294967295U) < (4294967286U))) ? (min((((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_1 + 1])), (4294967292U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_6 [i_0] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [2LL]))))) != (((/* implicit */long long int) var_11)))))));
                    arr_16 [i_0] [2ULL] [i_0 - 1] [i_0] = ((int) ((arr_5 [i_0 - 1] [2LL]) / (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [8]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_2] [i_5]), (((/* implicit */unsigned long long int) arr_12 [i_5] [(unsigned char)5] [i_0]))))) ? (arr_11 [i_0] [i_0 + 2] [i_1 - 2] [i_1] [i_6 + 1]) : (((((/* implicit */_Bool) arr_19 [i_2] [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [(signed char)13] [i_2] [i_5] [i_6])) : (var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_0 + 2] [i_0 + 1] [i_1 - 1])))) : (((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((arr_10 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]) + (6192888982041510961LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6 + 1]))) : (max((((/* implicit */long long int) var_12)), (arr_1 [i_0] [i_1 + 1])))))));
                                var_21 -= min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [10] [i_1 + 1] [i_5])))))) : (max((((/* implicit */unsigned long long int) arr_2 [(unsigned char)5] [i_1 + 1])), (arr_5 [i_0] [i_1 - 1]))))), (((/* implicit */unsigned long long int) min((var_3), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8160))) > (arr_20 [i_0 + 2])))))));
                                var_22 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_4 [i_1 - 1] [(short)13] [i_5])) ? (arr_18 [i_0]) : (((/* implicit */unsigned long long int) arr_14 [i_1 - 1] [(signed char)5] [9])))), (((/* implicit */unsigned long long int) ((short) var_10))))), (((/* implicit */unsigned long long int) ((max((arr_5 [i_5] [i_0 + 2]), (((/* implicit */unsigned long long int) var_0)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_10 [i_5] [(unsigned char)3] [i_5] [i_5] [i_6 + 1])))))))))));
                                var_23 = ((/* implicit */unsigned int) arr_18 [i_0]);
                                var_24 = ((short) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
