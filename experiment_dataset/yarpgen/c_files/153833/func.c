/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153833
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
    var_15 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) (short)-1);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_17 = ((((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_8 [i_0] [4U] [i_2 - 1] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) 5346053942959198300LL))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) (short)-13))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (short)16382)))))));
                        var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)22)) ? (((/* implicit */int) (unsigned short)65304)) : (((/* implicit */int) (short)-19329))));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((499463121) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)23722)) : (((((/* implicit */int) (short)27304)) % (((/* implicit */int) (unsigned short)6144))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)65))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_2)) : (arr_5 [(unsigned char)4]))) : (((/* implicit */int) (signed char)-35)))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) -1331561906)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3 + 1])) : (((/* implicit */int) (unsigned short)0))))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27304)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_5])) : (((/* implicit */int) (short)22523))))) ? (12215810176622695812ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) < (((((/* implicit */unsigned long long int) ((int) var_12))) * (12459844051365045031ULL))))))));
            var_21 = ((/* implicit */unsigned short) (signed char)38);
        }
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) (unsigned char)15)) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1)))))))));
            arr_19 [i_6] [(short)4] [7U] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_6]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_0] [i_0])) * (((/* implicit */int) ((((/* implicit */int) (short)11446)) == (((/* implicit */int) ((unsigned char) (signed char)-122))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) var_11)));
                            var_25 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (short)-18662)) - (((/* implicit */int) ((short) var_5))))));
                            var_26 = ((/* implicit */unsigned char) ((((arr_22 [i_0] [i_6] [i_7 + 2] [i_7 - 1] [i_7 + 2]) ? (((/* implicit */int) arr_22 [i_9] [i_6] [i_9] [i_7 + 2] [i_7 + 2])) : (((/* implicit */int) var_7)))) != (((/* implicit */int) arr_15 [i_6]))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            arr_28 [i_8] [(short)7] = ((/* implicit */short) (((+(-18990106))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_7 + 1] [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) (short)2040))))));
                            var_27 = ((/* implicit */short) ((((unsigned int) 258048U)) > (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) var_13)) / (arr_1 [i_0]))) > (((/* implicit */unsigned int) ((var_11) * (((/* implicit */int) var_10)))))))))));
                        }
                        var_28 = ((/* implicit */short) arr_20 [i_7 + 4]);
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-90)) ? (-1) : (((/* implicit */int) (signed char)95))));
        var_31 = ((/* implicit */signed char) (unsigned short)39048);
    }
    /* LoopNest 3 */
    for (short i_11 = 1; i_11 < 20; i_11 += 2) 
    {
        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            for (short i_13 = 1; i_13 < 21; i_13 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32862)) - (((/* implicit */int) ((_Bool) (short)32605))))))));
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (unsigned char)190))));
                        arr_38 [i_14] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((arr_33 [i_13]) / (6230933897086855815ULL))) : (((/* implicit */unsigned long long int) var_6)))));
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((unsigned int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_35 [i_11 + 1] [i_12] [i_13 - 1] [i_11 + 1])) : (((/* implicit */int) (signed char)-42)))) ^ (((/* implicit */int) ((_Bool) (unsigned char)246)))))))));
                    }
                    for (unsigned char i_15 = 3; i_15 < 21; i_15 += 3) 
                    {
                        var_35 |= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))) : (arr_33 [i_11])))) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (short)-1)))));
                        var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)14986)) ? (((2651368926U) >> (((arr_34 [(unsigned short)5] [i_13 - 1] [i_12]) - (1739556292U))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_13] [(signed char)15] [i_13] [i_11]))) - (arr_34 [(signed char)1] [i_12] [i_12])))));
                    }
                    var_37 = ((/* implicit */signed char) ((var_9) ? (arr_33 [i_13 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) && ((!(((/* implicit */_Bool) (unsigned char)255))))))))));
                    var_38 = ((/* implicit */int) (((!(((/* implicit */_Bool) -2147483629)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2085862163)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((signed char) var_7)))))) : (1464325564U)));
                    var_39 = ((/* implicit */unsigned int) ((short) (unsigned char)26));
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5346053942959198300LL)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)64444)) : (((((/* implicit */int) var_2)) | (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_3))));
    var_41 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_2))))))));
}
