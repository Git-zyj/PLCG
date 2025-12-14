/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176426
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
    var_11 = var_6;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [(short)6])) ? (((/* implicit */int) (unsigned char)101)) : (((int) var_0)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [(signed char)5] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)4095))));
                            var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((-(max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (9640317856271400100ULL)))))));
                            var_13 = ((/* implicit */signed char) (~(((unsigned long long int) min((((/* implicit */short) (signed char)-120)), ((short)-27576))))));
                            var_14 = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [1LL] [i_1] [i_0] [i_0])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    var_16 += ((/* implicit */short) arr_2 [i_1] [i_4]);
                    var_17 ^= arr_1 [i_0] [i_0];
                }
                for (short i_5 = 4; i_5 < 9; i_5 += 1) 
                {
                    var_18 = ((/* implicit */short) min((((/* implicit */int) (unsigned short)36354)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (arr_0 [i_5 - 4])))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) ((((16769024) & (((/* implicit */int) (signed char)-40)))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27576)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)65))))) ? (60700935) : (((/* implicit */int) (!(((/* implicit */_Bool) 8806426217438151515ULL)))))))));
                                var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_1])) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) arr_13 [i_0]))))) ? (((int) (short)-27576)) : (((/* implicit */int) arr_22 [i_0] [i_5] [i_5 - 2] [(unsigned char)1] [i_7] [i_7 + 1]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (signed char)-32))))), (((((/* implicit */_Bool) 201326592)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 + 1] [i_1] [i_1]))) : (130023424U)))));
                }
                for (int i_8 = 4; i_8 < 10; i_8 += 3) 
                {
                    var_22 = min((((((/* implicit */_Bool) arr_0 [i_8 - 3])) ? (arr_0 [i_8 + 1]) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned char) 4226604593258928901ULL))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 1) 
                    {
                        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_10 [i_0] [i_8 - 1]))))) ? (max((arr_4 [(signed char)10] [i_9]), (((/* implicit */int) arr_21 [i_8 - 2] [i_8 + 1] [i_9 - 1] [i_9 - 2])))) : (((/* implicit */int) ((((/* implicit */int) (short)-26464)) != (max((((/* implicit */int) (unsigned char)5)), (1307331877))))))));
                        arr_31 [i_9] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_15 [i_8])), (var_9)))), (((unsigned long long int) arr_24 [i_9] [i_8] [i_1] [i_0] [i_9])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (_Bool)0)))))));
                        arr_32 [i_0] [i_1] [i_1] [i_0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((unsigned long long int) arr_7 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_0] [i_0]) : (((/* implicit */long long int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (unsigned short)42706))))))))));
                        arr_33 [i_9] [i_9] = ((/* implicit */short) (unsigned short)42708);
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_8] [(_Bool)0])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_0])) : ((+(((/* implicit */int) var_6))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 1; i_10 < 8; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) arr_10 [10LL] [10LL]);
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (signed char)90))));
                        var_27 ^= ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]);
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_11 = 2; i_11 < 9; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 4; i_12 < 7; i_12 += 4) 
                    {
                        {
                            arr_41 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0] [i_12 + 3] [i_12 + 3] [10]))) : (((((/* implicit */_Bool) (short)7814)) ? (4226604593258928901ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                            /* LoopSeq 1 */
                            for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
                            {
                                arr_45 [i_0] [5U] [i_11 - 1] [i_1] [i_0] [i_13] [i_13] = ((/* implicit */int) arr_19 [i_13] [i_12 + 1] [i_11] [i_1]);
                                var_28 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_22 [i_0] [i_13] [i_12 + 4] [i_12 - 3] [i_11 + 1] [2U]))))) : (max((14220139480450622715ULL), (((/* implicit */unsigned long long int) -9153125363906430435LL))))));
                                arr_46 [i_0] [i_1] [i_1] [i_11] [i_11] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_12 - 4])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_12 - 1]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_4)))));
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_1)))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_1)) != (((/* implicit */int) (unsigned short)42687))))), (var_4))))) : (((((/* implicit */_Bool) (short)-5403)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) : (1516360288566199666LL)))));
}
