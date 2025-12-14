/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161739
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(max((2570382998U), (((/* implicit */unsigned int) (short)-25733))))))), (((((/* implicit */_Bool) -1291453961)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (2570382998U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (((16383LL) % (((/* implicit */long long int) ((/* implicit */int) (short)13352)))))))));
                var_10 = ((((((/* implicit */_Bool) 872948090385393686LL)) || (((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0])))) ? (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)119))))) : (((/* implicit */int) ((arr_2 [i_0 + 2] [i_0]) == (16383LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    arr_17 [i_2] [i_4] [i_3] [i_2] = (+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) arr_4 [i_2] [i_2])) : (-7501764825617150052LL))));
                    arr_18 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-1)) ? (arr_12 [i_3 + 1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                }
                for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_11 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)23591))))) ? ((-(((((/* implicit */_Bool) arr_13 [6LL] [i_6] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))))) : (arr_11 [i_6])));
                        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(3LL))), (((/* implicit */long long int) arr_13 [i_6] [i_2] [i_5]))))) ? ((((_Bool)0) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-27804)) : (((/* implicit */int) arr_0 [i_5])))) : (((/* implicit */int) ((arr_1 [i_2]) || (((/* implicit */_Bool) arr_23 [i_2]))))))) : (((/* implicit */int) arr_3 [i_2] [i_3 - 1] [i_3 + 1]))));
                    }
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 1) 
                    {
                        arr_26 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_2] [i_7 + 1])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)215)) + (((/* implicit */int) (unsigned char)215))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) ((arr_12 [i_2] [i_2]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40)))))))) : (((/* implicit */int) arr_0 [6]))));
                        arr_27 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) arr_11 [i_2]);
                        /* LoopSeq 4 */
                        for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_13 = (unsigned char)119;
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_3 - 1] [i_3 + 1] [i_7 - 1]), (arr_3 [i_3 - 1] [i_3 - 1] [i_7 + 2])))) ? ((-(var_6))) : (((long long int) ((((/* implicit */int) (short)-27804)) - (((/* implicit */int) arr_29 [i_8] [i_3] [i_5] [(short)3] [10LL] [i_7] [i_7])))))));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) 1297143951))));
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_16 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_9] [i_9]))))), (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((/* implicit */int) (signed char)(-127 - 1))) + (140))) - (12))))))))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_14 [i_2] [i_2] [i_5] [i_7]))));
                        }
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            arr_36 [i_2] [i_2] [i_5] [i_2] [(unsigned short)10] = ((/* implicit */signed char) (-(min((((/* implicit */int) arr_14 [i_3 + 1] [i_7 - 2] [i_7 - 1] [i_7 + 1])), (((((/* implicit */int) var_4)) / (((/* implicit */int) var_9))))))));
                            var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 3703274978495681088LL)))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_24 [i_7 - 1] [(_Bool)1] [i_2] [i_2])) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                            var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((-16383LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) arr_35 [i_3] [i_7 - 2] [i_3] [i_3] [i_2])) ? (1724584297U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))))) : (((/* implicit */unsigned int) ((arr_1 [i_2]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-125)))))))));
                            var_20 = ((/* implicit */long long int) (short)(-32767 - 1));
                        }
                        for (signed char i_11 = 1; i_11 < 9; i_11 += 2) 
                        {
                            var_21 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (unsigned char)183)) <= (((/* implicit */int) (short)-26887)))));
                            arr_40 [i_2] = ((/* implicit */signed char) (~(-1380488308)));
                        }
                    }
                    arr_41 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */int) (short)32767)) == (((/* implicit */int) arr_21 [i_2] [i_2] [i_3 + 1])))), (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_21 [i_2] [i_2] [i_3 - 1]))))));
                    var_22 += ((/* implicit */long long int) (short)-11786);
                    arr_42 [i_2] [i_3] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_11 [i_2]))) ? (((((/* implicit */_Bool) max(((unsigned short)28092), (((/* implicit */unsigned short) arr_39 [i_2] [i_5]))))) ? (((/* implicit */unsigned int) max((arr_4 [i_2] [(short)15]), (((/* implicit */int) (signed char)125))))) : (4294967295U))) : (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned short)52176)))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_29 [i_3] [i_3 - 1] [i_5] [(unsigned short)1] [i_5] [i_2] [i_5])) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_5] [i_2])))))))));
                }
                /* LoopSeq 1 */
                for (short i_12 = 2; i_12 < 11; i_12 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_13 = 3; i_13 < 10; i_13 += 1) 
                    {
                        var_23 ^= ((/* implicit */signed char) (~(((3425755083U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_2] [i_3] [i_3 + 1] [i_12 + 1] [i_3] [i_13 + 2] [i_12 + 1])))))));
                        var_24 *= ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)119)), (((((/* implicit */_Bool) 1141099013)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (_Bool)0))))));
                        arr_49 [i_13] [i_2] [i_2] [(short)1] = (signed char)(-127 - 1);
                    }
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_53 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 67645734912LL)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned short)37443))));
                        var_25 = ((/* implicit */_Bool) arr_21 [(unsigned char)2] [i_2] [(unsigned char)2]);
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51544)) ? (((/* implicit */int) (unsigned short)8184)) : (((/* implicit */int) (unsigned short)28092))));
                    }
                    for (int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) ((((int) arr_0 [(short)3])) + ((+(((/* implicit */int) (unsigned short)37443))))));
                            var_28 = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((var_6) << (((((/* implicit */int) arr_56 [i_12 - 2] [10LL] [i_2] [i_15] [6] [(_Bool)0])) - (112)))))) : (((/* implicit */signed char) ((var_6) << (((((((/* implicit */int) arr_56 [i_12 - 2] [10LL] [i_2] [i_15] [6] [(_Bool)0])) - (112))) - (15))))));
                            var_29 = ((/* implicit */int) arr_16 [i_2]);
                        }
                        arr_58 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : ((-9223372036854775807LL - 1LL)))))));
                    }
                    arr_59 [i_3] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */int) arr_21 [i_2] [i_2] [i_12])) / (((/* implicit */int) var_7)))) << (((/* implicit */int) ((0LL) == (((/* implicit */long long int) (-2147483647 - 1))))))))), (((long long int) var_6))));
                    arr_60 [(unsigned short)3] [i_3] [i_3 - 1] [i_2] = ((/* implicit */_Bool) (short)-23150);
                }
                var_30 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_3] [i_3 - 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [10])), ((unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 + 1])) <= (arr_55 [i_2] [i_2] [i_2] [i_2])))))), (((/* implicit */int) ((unsigned short) arr_30 [11U] [i_3] [i_2] [i_2] [i_2])))));
            }
        } 
    } 
    var_31 = ((/* implicit */int) min((var_31), (max((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (signed char)-79))))) ? (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) -1LL))))) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((unsigned char) var_9)))))));
    var_32 = (_Bool)0;
}
