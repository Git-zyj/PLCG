/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126135
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
    var_10 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1946716846485917484LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (-1946716846485917480LL))))), ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (1946716846485917489LL) : (((/* implicit */long long int) -1070684401))))))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) -1946716846485917496LL)))) - (((((((/* implicit */_Bool) -1946716846485917484LL)) ? (var_6) : (arr_0 [i_0]))) / (min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)21190))))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) (short)21190))))) ? (var_4) : (((/* implicit */unsigned long long int) 1070684401))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) /* same iter space */
        {
            var_11 = ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)21191))) % (288230376151711743LL))));
            arr_9 [i_1] [i_1 - 2] |= ((/* implicit */_Bool) ((signed char) max((((((/* implicit */_Bool) (unsigned short)62680)) ? (var_3) : (var_2))), ((+(arr_0 [i_0]))))));
            arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 3531023187543132469ULL))) ? (-1946716846485917479LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_1 [i_1] [i_0 + 2])) : (1070684401))))))) + ((-(max((5251922270001865907ULL), (((/* implicit */unsigned long long int) (signed char)-95))))))));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */long long int) (~(arr_6 [i_0] [i_0 - 2])))) : (288230376151711740LL))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) min((arr_17 [i_0]), (((/* implicit */int) var_0))))), (min((var_4), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_1])))))) % (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_16 [i_1 + 1] [i_4] [i_4] [i_3] [i_2] [i_0 - 2])) == (1070684396))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-27649))) / (9223372036854775799LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 288230376151711743LL)))))))));
                            arr_18 [i_0] [i_0 - 3] [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1070684401)) ? (((/* implicit */int) var_8)) : (1070684389)))))) - ((-(((var_7) | (arr_7 [i_0] [18ULL] [18ULL])))))));
                        }
                    } 
                } 
            }
            for (short i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                arr_22 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (short)25560)))) ^ (((min((arr_5 [i_1 + 3] [i_0]), (((/* implicit */int) (signed char)3)))) % (((/* implicit */int) var_8))))));
                arr_23 [i_0 - 3] [i_5] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-105))))) ? (((/* implicit */int) ((-1070684386) == (((/* implicit */int) (signed char)32))))) : ((+(((/* implicit */int) arr_14 [i_0 - 3] [i_0 - 3])))))) << (((13194821803707685709ULL) - (13194821803707685695ULL)))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                var_14 ^= max((((/* implicit */long long int) (unsigned char)232)), (-1946716846485917482LL));
                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_1] [i_1 + 2] [i_6] [i_1 + 2])) || ((!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_1 + 3]))))));
                var_16 = ((/* implicit */unsigned long long int) ((3332176412U) << (((((/* implicit */int) (short)21190)) - (21184)))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((5251922270001865892ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_6]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(signed char)15]))))))) & (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)57408))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)58))) != (1946716846485917492LL))))) : (var_2)))));
            }
        }
        for (unsigned short i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) 1946716846485917470LL))), ((-(-1946716846485917484LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28455)) | (var_9)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4027653297U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 + 2] [i_7 + 2] [i_7] [i_0 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7]))))) : ((+(arr_13 [18] [18] [i_0 - 1])))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                var_19 = ((/* implicit */signed char) (-((~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0])) > (((/* implicit */int) (short)32766)))))))));
                arr_33 [i_7] [i_7] [i_7 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((72057594037927935ULL) - (6975548257804020983ULL)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1635227369)) | (((((/* implicit */_Bool) 4682435115905465463ULL)) ? (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0 + 2])) : (7959286050854948664ULL))))))));
                arr_34 [i_0 - 1] [i_7] [i_8] [i_8] = ((((/* implicit */_Bool) var_1)) && ((!(((/* implicit */_Bool) (signed char)-1)))));
            }
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (unsigned short i_10 = 2; i_10 < 17; i_10 += 4) 
                {
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(arr_7 [i_0] [i_7] [i_10]))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_40 [(unsigned short)16] [i_0] [i_9] [i_10] [i_0])) ? (((/* implicit */int) arr_39 [i_10] [i_10])) : (((/* implicit */int) (_Bool)1))))))) ? (13764308957804086153ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_9] [i_10]))) - (141146271864027538ULL)))) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (((/* implicit */int) (unsigned short)44082)))))));
                    }
                } 
            } 
        }
        for (unsigned short i_11 = 2; i_11 < 17; i_11 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_24 [i_0] [14] [i_0]))));
            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
        }
    }
    var_24 = ((/* implicit */unsigned long long int) var_9);
}
