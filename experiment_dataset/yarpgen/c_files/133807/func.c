/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133807
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
    var_16 = var_14;
    var_17 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (unsigned char)82)) ? (var_11) : (((((/* implicit */_Bool) (unsigned char)69)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)99))))) : (8150851697901773261LL)));
                    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)99)) ? (-2551615211574002597LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122)))))) ? (((((/* implicit */_Bool) (unsigned char)156)) ? (60113455) : (((/* implicit */int) (unsigned char)174)))) : (((/* implicit */int) (unsigned char)88))));
                    arr_6 [13U] [i_0] [i_0] [13U] = ((/* implicit */int) arr_4 [i_1 + 1]);
                    arr_7 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)166))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-59))) : (0LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)29))))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) (signed char)-123);
        var_21 += ((/* implicit */signed char) (unsigned char)151);
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */long long int) (unsigned char)89);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) 
        {
            arr_15 [(unsigned short)14] [i_4] = ((/* implicit */long long int) (unsigned char)189);
            var_22 = ((/* implicit */unsigned long long int) (unsigned char)166);
            arr_16 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (unsigned char)156);
            var_23 = ((/* implicit */int) (unsigned char)99);
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)122)) ? (1664916650U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) (signed char)1)) : (1267675102)))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [0] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [12U] [i_3] [12U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (196753422U)));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 2; i_6 < 15; i_6 += 2) 
            {
                arr_22 [i_3] [(unsigned char)7] [i_5] [i_3] = ((/* implicit */short) 7878405824159102982ULL);
                arr_23 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (2147483644) : (((/* implicit */int) (signed char)127))));
            }
            var_26 += arr_19 [2U] [i_5] [2U];
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        arr_29 [i_3] [i_5] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)162)) ? (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (arr_12 [i_5] [i_7] [(signed char)8]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199)))));
                        arr_30 [i_5] [i_3] = arr_1 [i_8];
                        arr_31 [i_3] [i_5] = ((/* implicit */signed char) 65535);
                        var_27 = ((/* implicit */signed char) 3764639433U);
                    }
                } 
            } 
            var_28 -= ((/* implicit */unsigned int) 65535);
        }
        for (unsigned int i_9 = 2; i_9 < 15; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 1; i_10 < 14; i_10 += 2) 
            {
                for (short i_11 = 1; i_11 < 12; i_11 += 1) 
                {
                    for (unsigned char i_12 = 1; i_12 < 13; i_12 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) -7811041817631004548LL);
                            var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) -1267675093)) ? (((((/* implicit */_Bool) 825297074735822107LL)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51917))) : (arr_9 [i_3] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (unsigned char)34)) : (-1156404959)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-24)))));
                            arr_43 [i_3] [i_3] [i_9] [(short)15] [i_3] = ((((/* implicit */_Bool) 15U)) ? (((((/* implicit */_Bool) (unsigned short)51938)) ? (((((/* implicit */_Bool) -1LL)) ? (-6203017240989383038LL) : (3968708610300542093LL))) : (((/* implicit */long long int) arr_14 [i_9])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_40 [i_3] [(_Bool)1]))));
                        }
                    } 
                } 
            } 
            arr_44 [i_3] [i_9] = ((/* implicit */int) (signed char)101);
            var_32 += ((/* implicit */short) arr_35 [i_3] [i_9 - 2]);
        }
        /* LoopNest 2 */
        for (unsigned int i_13 = 3; i_13 < 13; i_13 += 4) 
        {
            for (int i_14 = 1; i_14 < 14; i_14 += 1) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((arr_46 [i_14] [i_13]) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (unsigned char)255)))))));
                    arr_53 [i_3] [i_13] [i_14 + 1] = ((/* implicit */long long int) arr_12 [i_14] [i_14] [i_14]);
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13618)) ? (3103473507178135501LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */int) arr_24 [i_3] [i_3] [(signed char)6])) : (((/* implicit */int) arr_20 [(signed char)0] [i_13] [i_13]))))) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) arr_1 [i_3]))));
                }
            } 
        } 
    }
}
