/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108663
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
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)127)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)255))) : ((-9223372036854775807LL - 1LL)))) : ((+(arr_7 [i_0] [i_1] [i_2] [i_1] [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 - 1] [i_3] [i_3] [(signed char)16]))) : (((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)247)) >> (((arr_1 [i_0]) - (11350200025381863997ULL)))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 2] [i_1 + 2] [i_3])) ? (arr_3 [i_3 - 1] [i_2]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_3] [i_3 - 2])))))))))));
                        var_15 += ((/* implicit */unsigned int) max((((/* implicit */int) ((var_9) <= (((((/* implicit */_Bool) arr_0 [(signed char)8])) ? (var_2) : (arr_3 [i_1] [i_3])))))), ((~(arr_0 [i_0 - 2])))));
                    }
                } 
            } 
        } 
        arr_8 [i_0] [i_0] = (~(((/* implicit */int) (!(arr_5 [i_0] [i_0 - 2] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 1) 
    {
        var_16 += ((/* implicit */unsigned short) (-(305800231)));
        var_17 = ((/* implicit */long long int) var_1);
    }
    /* vectorizable */
    for (unsigned char i_5 = 3; i_5 < 19; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)123)) ? (arr_16 [i_5 + 1]) : (((/* implicit */int) (unsigned char)110))));
            var_19 += ((/* implicit */unsigned int) 2083691572691272427ULL);
            arr_18 [(signed char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_12 [12ULL] [i_6])))) ? (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_12 [(unsigned char)18] [(_Bool)1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)119)))))));
        }
        var_20 = ((/* implicit */unsigned long long int) ((arr_12 [i_5 - 3] [i_5 + 4]) - (arr_12 [i_5 - 1] [i_5 - 1])));
        var_21 = ((/* implicit */unsigned char) arr_17 [i_5 + 3]);
        var_22 = ((/* implicit */unsigned char) arr_17 [i_5]);
    }
    var_23 = var_2;
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 11; i_7 += 2) 
    {
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            {
                arr_24 [i_7] [i_7] = ((/* implicit */unsigned int) (+(-305800248)));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_16 [i_7 + 2])) ? (arr_16 [i_7 + 2]) : (arr_16 [i_7 + 1]))))))));
                arr_25 [i_7] [12] [i_7] = ((/* implicit */unsigned long long int) max(((+(arr_11 [i_7] [i_7 + 3]))), (((((/* implicit */_Bool) arr_20 [i_7 + 1])) ? (arr_11 [(unsigned short)7] [i_7 + 3]) : (arr_20 [i_7])))));
                var_25 = ((/* implicit */unsigned long long int) (short)-256);
                /* LoopNest 2 */
                for (unsigned int i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_11 = 1; i_11 < 11; i_11 += 4) 
                            {
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_15 [(unsigned short)0])) ? (((/* implicit */int) (short)-2218)) : (((/* implicit */int) (signed char)124)))))) ? (min(((~(((/* implicit */int) arr_23 [(signed char)5])))), ((~(((/* implicit */int) (unsigned char)114)))))) : (((/* implicit */int) var_12))));
                                var_27 = ((/* implicit */unsigned int) var_6);
                            }
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) max((arr_17 [(_Bool)1]), (((/* implicit */unsigned short) (unsigned char)139)))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(-719182516)))))))));
                            var_30 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_7] [(unsigned char)5]))));
                            var_31 = ((/* implicit */long long int) arr_9 [i_10]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_4))));
}
