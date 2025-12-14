/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123440
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
    var_20 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_12 [(unsigned short)16] [i_1] [i_1] [(unsigned short)16] [i_2] = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_15))))) * (((unsigned int) 3565944374U)))));
                                var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_2] [i_4])) : (((((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned short)53958)))) / (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)11577))))))));
                                var_22 -= ((/* implicit */unsigned int) arr_5 [18U] [i_2] [i_2] [i_4]);
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((0U), (((/* implicit */unsigned int) arr_9 [i_4] [i_4] [11U] [i_4] [13ULL] [i_3])))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 1] [(signed char)18] [i_1])) & (((/* implicit */int) (signed char)(-127 - 1)))))) ? ((~(((/* implicit */int) (unsigned short)53958)))) : (((/* implicit */int) min((arr_4 [i_0 + 2] [(short)6] [(signed char)0]), (arr_4 [i_0 + 2] [10] [10]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)44)))) && ((!(((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4088)) ? (((/* implicit */unsigned int) arr_14 [i_7])) : (arr_19 [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [(unsigned char)13] [i_7])) || (((/* implicit */_Bool) (unsigned char)100))))));
                    var_26 = ((/* implicit */short) ((unsigned char) min((((((/* implicit */int) (unsigned short)11577)) | (((/* implicit */int) (unsigned short)53958)))), (((/* implicit */int) max(((unsigned short)53958), (((/* implicit */unsigned short) var_12))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 729022921U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)26135))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_24 [i_5] [17] [12] [i_8] [i_9])));
                            arr_26 [i_9] [i_9] [i_6] = ((/* implicit */int) ((arr_19 [i_8 - 1] [i_6] [(short)8] [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                        }
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            arr_30 [i_5] [i_6] [i_7] [i_8 - 1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1])) ? (arr_14 [i_8 - 1]) : (arr_14 [i_8 - 1])));
                            arr_31 [i_5] [i_6] [(unsigned char)20] [i_6] = ((/* implicit */short) (-(arr_19 [i_7] [i_8 + 1] [i_8] [i_8 + 1])));
                            arr_32 [i_6] [i_6] [i_5] = ((((/* implicit */int) arr_29 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_10] [(signed char)23])) | (arr_27 [i_5] [i_6] [i_7] [i_8 - 1] [i_7]));
                        }
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            var_28 &= ((/* implicit */unsigned short) arr_16 [i_8 - 1] [i_8 - 1] [(unsigned char)22]);
                            var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (arr_24 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1]) : (arr_24 [i_8 - 1] [i_8 + 1] [i_8 + 1] [18] [i_8 - 1])));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)100)) : (var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 729022921U)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (unsigned char)255))))) : (((unsigned int) arr_29 [i_5] [i_5] [16ULL] [i_8] [i_11]))));
                            arr_35 [23ULL] [i_6] [i_7] [i_6] [i_8] [i_7] [i_7] = ((/* implicit */int) (unsigned short)26135);
                            arr_36 [i_6] [i_6] = ((/* implicit */int) (~(arr_24 [i_5] [i_7] [i_5] [i_8] [i_8 - 1])));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            arr_40 [i_5] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1403019053)) ? (((/* implicit */int) (short)-19762)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19762))) : (((var_18) * (((/* implicit */unsigned long long int) 729022921U)))))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)155)) : (var_1)))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (var_2)))));
                            var_33 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_9)) : (arr_20 [i_13] [(unsigned char)18] [i_7] [i_6])))));
                        }
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2557524652U)) ? (((/* implicit */int) ((short) arr_16 [i_5] [i_6] [i_6]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-19762)) : (((/* implicit */int) (unsigned char)156))))));
                    }
                    for (int i_14 = 3; i_14 < 22; i_14 += 1) 
                    {
                        arr_46 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)127))));
                        var_35 = ((/* implicit */unsigned long long int) var_9);
                    }
                    var_36 = ((/* implicit */short) ((min(((-(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (unsigned char)1))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
                    var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_5] [i_5] [i_5] [i_6] [i_7] [i_6]))));
                }
            } 
        } 
    } 
}
