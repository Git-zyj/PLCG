/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155223
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
    var_14 = ((/* implicit */int) (~((+((~(var_5)))))));
    var_15 -= ((/* implicit */long long int) (~(((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 12471514080349804714ULL)) && (((/* implicit */_Bool) (signed char)23)))))))) && (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_11))))))));
        var_17 = ((/* implicit */unsigned short) var_11);
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) 12471514080349804725ULL))));
        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (short i_1 = 2; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)152))))), (2222072948U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1]))))))));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 3]))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((var_12) >= (((/* implicit */unsigned long long int) -9223372036854775800LL)))))));
    }
    for (short i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) var_8);
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 23; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    arr_17 [i_2] [6] [i_4] [i_4] = ((/* implicit */int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_4]))) : (((5975229993359746897ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))))))), (((/* implicit */unsigned long long int) var_6))));
                    arr_18 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) -4929985160737846935LL);
                }
            } 
        } 
        arr_19 [i_2] = ((/* implicit */short) (~((~(2072894347U)))));
    }
    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            arr_26 [i_5] [i_6 - 1] = ((/* implicit */signed char) max((max((var_2), (((/* implicit */unsigned long long int) arr_12 [i_5])))), (var_8)));
            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(2112949549))))));
            var_24 = ((/* implicit */short) (unsigned char)121);
        }
        var_25 = ((/* implicit */short) var_12);
        var_26 = ((/* implicit */short) min((var_26), ((short)511)));
        var_27 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) ^ (arr_9 [i_5]))))) == (max((((/* implicit */unsigned long long int) 0U)), (var_8)))));
        /* LoopSeq 4 */
        for (signed char i_7 = 1; i_7 < 13; i_7 += 1) 
        {
            arr_31 [i_5] [i_5] = ((/* implicit */int) (~(max((3029825548U), (((/* implicit */unsigned int) 2147483647))))));
            arr_32 [3U] [i_5] [i_5] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-19552)) : (((/* implicit */int) (signed char)-106)));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            var_28 = ((/* implicit */int) ((signed char) arr_10 [i_5] [i_8]));
            var_29 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_5] [i_8])) | (((/* implicit */int) arr_24 [(short)12]))));
        }
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_14 [i_5] [i_5] [i_9])), (arr_5 [i_9] [i_9]))))) == ((+(arr_3 [i_5] [i_9])))))), (((max((((/* implicit */unsigned int) 16773120)), (2113929216U))) << (((var_4) - (189810035)))))));
            /* LoopSeq 1 */
            for (short i_10 = 2; i_10 < 10; i_10 += 1) 
            {
                var_31 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))));
                arr_40 [i_10] [i_5] [i_10] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)17523))));
            }
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) ((arr_28 [(unsigned short)8] [i_11]) << (((2147483647) - (2147483647)))));
            var_33 = ((/* implicit */unsigned int) (+(var_7)));
        }
    }
    var_34 = ((/* implicit */signed char) var_12);
}
