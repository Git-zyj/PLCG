/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18859
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
    var_17 = ((/* implicit */int) ((signed char) (signed char)127));
    var_18 += ((/* implicit */signed char) ((4397509640192LL) & (((/* implicit */long long int) 4294967271U))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] [i_0] [i_3] [i_3] [i_0] = (-(((int) ((unsigned char) (short)10012))));
                            arr_11 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [11LL])))) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) (_Bool)0)))) : (((int) (unsigned char)61))))) && (((/* implicit */_Bool) (short)11))));
                            var_19 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)113)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) 1355183540U)))), (((/* implicit */unsigned long long int) min((arr_9 [i_1 - 2] [i_2 - 2] [i_2 + 3] [i_2 - 1]), (arr_9 [i_1 - 3] [i_2 - 2] [i_2 + 2] [i_2 - 2]))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [4ULL] [i_1 - 3] [i_2 - 1] [i_2 - 2]))) : (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                            arr_12 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((unsigned char) -8404809523362910244LL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    for (unsigned char i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (int i_6 = 4; i_6 < 12; i_6 += 2) /* same iter space */
                            {
                                arr_22 [i_0] [i_4] = ((/* implicit */int) ((unsigned char) (unsigned char)85));
                                arr_23 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(arr_3 [i_5])))))) & (((((/* implicit */_Bool) arr_17 [6] [i_1] [1U] [i_5 - 1] [i_6] [6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3803))) : (var_15)))));
                            }
                            for (int i_7 = 4; i_7 < 12; i_7 += 2) /* same iter space */
                            {
                                arr_27 [i_0] [i_1] [i_0] [i_1 - 2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((int) ((((/* implicit */int) (unsigned char)221)) | (((/* implicit */int) arr_7 [(signed char)4] [(signed char)4] [(signed char)4] [i_5]))))) : (((/* implicit */int) (_Bool)1))));
                                arr_28 [i_7] = ((/* implicit */unsigned char) var_11);
                                var_21 = ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((unsigned char) (signed char)46)))))) <= (((((/* implicit */_Bool) ((unsigned char) arr_9 [i_7] [i_4] [i_4] [i_7]))) ? (arr_19 [i_1 - 1] [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 31)) || (((/* implicit */_Bool) (signed char)62)))))))));
                            }
                            for (int i_8 = 4; i_8 < 12; i_8 += 2) /* same iter space */
                            {
                                arr_33 [i_0] [i_4 + 3] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((arr_16 [i_5 - 1] [i_1 - 1] [i_4] [i_8 - 2] [i_5 + 4]), (arr_16 [i_5 + 4] [i_1 - 1] [i_1 - 1] [i_8 - 3] [(signed char)4])))), (max((((2867576240U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned int) ((signed char) (short)32767)))))));
                                arr_34 [i_0] [i_0] [i_0] [i_0] [12ULL] [i_0] [(_Bool)1] = ((((4023041705193051213ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-70))) >= (-8425697706850104778LL))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                            {
                                arr_37 [i_5] [i_5] [i_5 + 4] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((var_10) ? (var_8) : (((/* implicit */int) var_9))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_3 [i_5 + 4]))));
                            }
                            arr_38 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_13 [i_5 - 2] [12U] [i_1 - 1] [i_1]))))) & (((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [i_5 - 1] [i_5 + 4] [i_1 - 1] [i_1])), ((unsigned char)31))))));
                            /* LoopSeq 2 */
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                            {
                                arr_43 [i_0] [i_0] [i_4] [(unsigned char)10] [12ULL] = var_5;
                                arr_44 [i_1 + 1] [i_1 + 1] [i_4 + 3] [i_5] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) | (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [1] [i_1] [i_1]))))) ? (3207145055046379824ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_5] [i_11] [i_1] [6U])) == (((/* implicit */int) (signed char)4))));
                                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_4 + 3] [i_5 + 2])) + (((/* implicit */int) arr_4 [i_1 - 1] [i_4 + 3] [i_5 + 1]))));
                            }
                            arr_47 [i_0] [i_0] = arr_20 [i_0] [i_0] [i_0] [(_Bool)1] [i_0];
                            var_25 = ((/* implicit */int) min((var_25), ((((_Bool)1) ? (((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_4 + 4] [i_5 - 1])) : (((/* implicit */int) ((_Bool) min((18446744073709551598ULL), (var_4)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
