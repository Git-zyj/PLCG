/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120514
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) & (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)51266))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [(signed char)6] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))));
                    arr_11 [i_2] [i_0] [i_2] [8LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)123))));
                    var_11 = 5808398778652373565ULL;
                    var_12 *= ((/* implicit */signed char) (+(min((var_7), (((/* implicit */unsigned int) var_3))))));
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_2 - 1])))) ? (((/* implicit */unsigned long long int) max((arr_2 [i_2 + 3]), (arr_2 [i_2 - 1])))) : (min((((/* implicit */unsigned long long int) arr_2 [i_2 + 4])), (arr_1 [i_2 - 1])))));
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((5808398778652373565ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
        var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [12ULL] [i_0] [i_0])) : (((/* implicit */int) arr_7 [(unsigned short)0] [(unsigned short)0] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (((unsigned long long int) (signed char)-127)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((arr_0 [(signed char)10]), (var_2)))) : (((/* implicit */int) min((arr_7 [6ULL] [6ULL] [6ULL]), (arr_7 [6ULL] [i_0] [i_0])))))))));
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) var_6))))), (min((5808398778652373565ULL), (((/* implicit */unsigned long long int) arr_14 [(signed char)1]))))));
        var_16 = ((/* implicit */unsigned short) ((max((5808398778652373574ULL), (12638345295057178051ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3])))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_13 [i_3]) < (((/* implicit */int) ((_Bool) var_2))))))));
    }
    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((signed char) max((arr_17 [i_4 + 1]), (((/* implicit */unsigned int) var_1)))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) arr_14 [i_4])) - (((((/* implicit */int) arr_21 [i_4 + 1] [i_4 - 1])) | (((/* implicit */int) min((arr_16 [(signed char)4]), (arr_18 [(unsigned char)8] [(unsigned char)8]))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_7 = 2; i_7 < 13; i_7 += 2) 
                {
                    var_19 = ((/* implicit */long long int) (-(arr_17 [i_4])));
                    arr_29 [i_7 + 1] [i_4] [i_4] [i_7 + 1] = ((/* implicit */unsigned char) arr_28 [i_4] [i_4]);
                    arr_30 [i_4] [i_4] [(signed char)3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) | (4455685509670362144ULL)));
                }
                for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 1) 
                {
                    arr_33 [i_4] [i_4] [i_4] [i_8] = ((/* implicit */unsigned int) ((signed char) arr_25 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6]));
                    arr_34 [i_4] = ((((((/* implicit */int) var_2)) == (((/* implicit */int) arr_26 [i_6] [i_4])))) ? (12638345295057178024ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [i_4]))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_8 - 2] [i_8] [i_8 + 2])) + (arr_25 [i_4] [i_6 + 1] [6ULL] [i_6 + 1])));
                }
                for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (arr_28 [i_4 - 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_9] [i_4])))));
                    var_22 = ((/* implicit */_Bool) ((5808398778652373592ULL) * (12638345295057178042ULL)));
                }
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    var_23 = ((/* implicit */int) arr_21 [i_5] [i_6]);
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_10] [i_5] [i_10] [i_4])) ? (5808398778652373574ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6 - 1] [i_4 - 1])))));
                    arr_42 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_4]))) : (arr_17 [i_4 - 1])));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        arr_45 [i_4] [i_4] [i_4] [i_4] [i_4] = (~(((((/* implicit */_Bool) var_7)) ? (12638345295057178042ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))))));
                        arr_46 [i_11] [i_11] [i_11] [i_4] [i_11] [i_11] [i_11] = ((/* implicit */short) var_4);
                        var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_6] [i_5] [i_6] [i_10] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))) : (((((/* implicit */_Bool) arr_36 [i_4] [i_5] [i_5] [i_6])) ? (arr_17 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_4] [i_4 - 1] [i_4 + 1] [i_4] [i_4] [i_4])))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_24 [i_4 + 1])));
                    }
                }
                for (signed char i_12 = 1; i_12 < 16; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((arr_50 [i_12 - 1] [i_12 - 1] [i_6 - 1] [i_12] [i_6]) % (((/* implicit */int) (unsigned short)9235)))))));
                        arr_52 [i_4] [i_5] [i_4] [i_5] [i_13] = ((/* implicit */long long int) ((arr_28 [i_4 - 1] [i_4]) != (arr_28 [i_4 - 1] [i_4])));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_4] [i_6 - 2] [i_6 - 2] [i_12] [i_12] [i_12 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */int) arr_21 [i_4] [i_5])) - (((/* implicit */int) var_1))))));
                        var_29 = arr_47 [i_4];
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4 + 1] [i_6 + 1] [i_12 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (arr_37 [i_13] [i_12] [i_6] [i_6 - 2] [i_4] [i_4])))));
                    }
                    arr_53 [i_4] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */int) arr_27 [i_4] [i_4] [i_6 + 1] [i_12])) != (((/* implicit */int) arr_26 [i_12 + 1] [i_4]))));
                    arr_54 [i_4] [i_5] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_5])) && (((/* implicit */_Bool) ((var_6) + (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_12]))))))));
                }
                for (short i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    var_31 = ((((/* implicit */int) (_Bool)1)) * (2147483627));
                    arr_59 [i_4 - 1] [i_4] [i_4] [i_4] [i_4 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
                }
                arr_60 [i_4] [i_6] [i_5] [i_4] &= ((/* implicit */unsigned char) arr_37 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4]);
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_4] [i_5] [i_5] [i_5] [i_6 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_35 [i_4 + 1])) : (arr_13 [i_5])));
            }
            for (unsigned char i_15 = 2; i_15 < 15; i_15 += 1) 
            {
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8327)) * (((/* implicit */int) (short)-5128))))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_15] [i_5] [i_4])) / (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_57 [i_15 - 2] [i_5] [i_5] [i_4])) ? (((/* implicit */int) arr_14 [i_15])) : (((/* implicit */int) arr_31 [i_4] [i_4] [i_4] [i_5] [i_15 - 2])))) : ((~(((/* implicit */int) var_4)))))))));
                var_34 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) -983672346)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) arr_23 [(signed char)16] [i_4] [i_5] [i_15 - 1])))) == ((-(((/* implicit */int) max((arr_20 [i_4] [i_4]), (((/* implicit */short) (unsigned char)82)))))))));
                arr_64 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-1)))))));
            }
        }
    }
    var_35 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)11837))))) ? (((((/* implicit */_Bool) (unsigned short)8327)) ? (((/* implicit */int) (short)-5132)) : ((-2147483647 - 1)))) : (((/* implicit */int) var_4)))));
    var_36 = ((/* implicit */unsigned int) max((min((((/* implicit */int) ((unsigned char) var_4))), ((-(var_8))))), (((/* implicit */int) max((var_1), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) > (11835654661832707324ULL)))))))));
}
