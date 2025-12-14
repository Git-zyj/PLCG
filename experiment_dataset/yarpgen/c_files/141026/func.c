/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141026
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
    var_14 = ((/* implicit */int) ((unsigned char) ((((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned char)2)))) * (((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (unsigned short)32874)), (4709046348000057380LL)))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_5 [i_2 - 2] [i_2]) ^ (((/* implicit */unsigned long long int) var_2)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_16 -= ((/* implicit */long long int) (unsigned short)23703);
                        var_17 = ((((/* implicit */_Bool) arr_0 [i_3] [i_2])) ? (((/* implicit */int) arr_12 [9LL] [i_0] [i_0] [i_0] [i_3] [i_3])) : (((/* implicit */int) var_5)));
                    }
                    arr_13 [i_0] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_10 [6ULL] [i_1])), (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_6))))) : (min((-4709046348000057380LL), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1])))))), (((/* implicit */long long int) ((unsigned int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) >> (((var_11) - (13536868106860383864ULL)))))))));
                    var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 17800557013447163981ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (3662201889242871142LL)))) && (((/* implicit */_Bool) arr_12 [i_1] [i_2 + 3] [i_2] [i_2 + 3] [(short)1] [i_2 + 3])))), (((((((/* implicit */_Bool) (unsigned short)16383)) ? (3662201889242871135LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32857))))) >= (((/* implicit */long long int) min((((/* implicit */int) var_0)), (arr_1 [(_Bool)1]))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    var_19 = ((/* implicit */long long int) var_2);
                    var_20 = ((/* implicit */unsigned short) (~(-3662201889242871119LL)));
                }
                for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    arr_18 [i_5] = ((/* implicit */_Bool) 4294967278U);
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) arr_11 [(unsigned char)7])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((-9223372036854775807LL - 1LL))))))) ? ((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)6))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) * (((min((var_0), (var_0))) ? (((/* implicit */int) arr_26 [i_6])) : (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)202)) && (((/* implicit */_Bool) (unsigned short)65530))));
                    arr_29 [i_0] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (~(0U))))) ? (min((var_12), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) 3662201889242871129LL))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5127570425536190371ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215)))));
                    arr_30 [(unsigned short)3] [i_6] = ((/* implicit */unsigned long long int) arr_6 [i_6] [i_1] [i_6]);
                }
                var_25 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)156))))))))) * (((min((((/* implicit */unsigned int) var_3)), (0U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1])) && (var_5)))))))));
            }
        } 
    } 
    var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)54238)) ? (var_11) : (((/* implicit */unsigned long long int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) -1709789240)))) : (var_2)));
}
