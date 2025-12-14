/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181033
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 -= ((/* implicit */short) ((signed char) ((var_7) && (((/* implicit */_Bool) arr_2 [i_0])))));
        var_13 = (+(arr_1 [i_0]));
        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) var_2))))), (((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))) ? (min((var_3), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (var_1)))))));
                var_16 = ((/* implicit */unsigned long long int) (+(arr_1 [i_2])));
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_17 *= ((/* implicit */_Bool) var_3);
                    arr_12 [i_3] [i_2] [4ULL] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_2)) ? (5550042718714519460ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)18066), ((short)18063))))))), (((/* implicit */unsigned long long int) var_9))));
                }
                for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    arr_17 [i_1] [i_1] [i_4] = ((/* implicit */int) ((unsigned int) var_10));
                    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 3] [i_4 - 2] [i_4 + 1]))) * (var_2))));
                    var_19 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_4 - 2])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18063))) | (var_0)))))));
                    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_5 [i_4 - 1] [i_4 - 2]), (((/* implicit */short) var_8)))))));
                }
                for (signed char i_5 = 2; i_5 < 18; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) arr_22 [i_1] [14U] [i_5] [i_5 - 2] [i_6] [i_6] [i_7]))), ((~(var_6)))));
                                arr_25 [i_1] [i_2] [i_5 - 2] [i_5] [i_7] = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) arr_6 [i_7 + 2] [8U])))) : (arr_21 [i_5 + 1] [i_5 + 1] [i_6 - 3] [i_6 - 2]))), (((/* implicit */int) var_7))));
                                var_22 *= ((/* implicit */signed char) (short)-18064);
                            }
                        } 
                    } 
                    var_23 += ((((long long int) (unsigned short)26017)) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1]))));
                    var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)18051))))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) var_9)))) - (((((/* implicit */int) var_11)) + (var_6)))))) : (var_3)));
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-18041)), ((-(((/* implicit */int) var_5))))));
                        var_26 += ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (arr_21 [i_1] [i_2] [i_1] [i_8]))), (((/* implicit */int) (signed char)4))))));
                        arr_29 [17U] [i_5] [i_5] [i_8] = ((/* implicit */unsigned int) (+(min((((/* implicit */int) var_9)), (((((/* implicit */int) (unsigned char)67)) + (((/* implicit */int) var_4))))))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_5)))), ((~(((/* implicit */int) (unsigned char)31))))))) ? ((+(((/* implicit */int) (signed char)19)))) : (((((/* implicit */int) ((unsigned short) var_7))) * (((((/* implicit */int) (short)32767)) + (var_6))))))))));
                    }
                    for (int i_9 = 3; i_9 < 16; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_37 [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)5347)))) ? (((long long int) arr_35 [i_1] [12U] [i_1] [i_1] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */int) (short)5357)) >= (1847341602))), (var_8)))))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)23945)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))) ^ (var_0))))))))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((((short) var_4)), ((short)-128))))));
                            arr_38 [i_1] [i_2] [i_1] [i_9] [i_9] [i_1] |= ((/* implicit */short) (((-((~(((/* implicit */int) var_9)))))) % (max(((~(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)96))))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_14 [i_2] [i_5] [i_11]), (((/* implicit */int) (signed char)-2))))) ? (((arr_9 [i_5 - 1]) & (arr_9 [i_5 - 1]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_30 [i_5] [i_5] [i_2] [i_5])))))));
                            var_31 = ((/* implicit */unsigned short) arr_39 [i_1] [7U] [i_2] [i_5] [i_5] [i_11]);
                        }
                        var_32 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(var_1)))), (arr_10 [i_2])));
                        var_33 ^= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) 4294967295U)), (arr_34 [2ULL] [2ULL] [i_1] [i_1] [i_9 + 2] [i_9]))), (((/* implicit */unsigned long long int) ((arr_34 [3ULL] [i_5] [i_9] [3ULL] [i_9 + 2] [i_9]) <= (arr_34 [i_1] [i_5] [i_5] [i_5] [i_9 + 2] [i_9]))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        var_34 *= ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_2] [i_5 - 1] [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 17387583984233362926ULL)) && (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_2])), (arr_34 [i_1] [i_2] [15LL] [i_5] [i_12] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_1] [i_2] [i_5] [i_12])))))));
                        var_35 += ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (signed char)-1)))));
                        var_36 = ((/* implicit */int) max(((unsigned char)187), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (((1082418884U) / (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_11))));
                    }
                    for (long long int i_13 = 1; i_13 < 16; i_13 += 2) 
                    {
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (4294967295U)))) ? (max((((/* implicit */unsigned int) arr_13 [i_5 + 1] [i_13 + 3] [i_5])), (var_2))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_5 - 2] [i_13 + 3] [i_5])))))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_18 [i_5 + 1] [i_2])))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_5] [i_1])) ? (((/* implicit */unsigned long long int) arr_19 [i_13 + 3] [i_1] [i_5 + 1] [i_13 + 3])) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-31526)) % (((/* implicit */int) arr_13 [i_1] [i_5 - 2] [i_1]))))))))));
                        arr_47 [i_5] = ((/* implicit */_Bool) ((int) arr_45 [i_1] [i_2] [i_5] [i_5 + 1] [i_13] [i_13]));
                    }
                }
                var_40 = ((/* implicit */short) ((unsigned char) (((!(((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_1] [i_1] [(short)1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1]))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
            }
        } 
    } 
}
