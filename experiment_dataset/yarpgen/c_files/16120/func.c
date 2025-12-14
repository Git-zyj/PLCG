/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16120
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
    var_15 = ((/* implicit */unsigned int) ((long long int) max((var_10), (((/* implicit */unsigned long long int) var_3)))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((signed char) ((arr_0 [i_0]) >= (((((/* implicit */long long int) arr_1 [i_0])) / (var_12)))))))));
        var_17 = ((/* implicit */long long int) max((var_17), (arr_0 [i_0])));
    }
    for (unsigned short i_1 = 3; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17804581113386532194ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((unsigned long long int) (signed char)103)) : (((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1]))) : (arr_3 [i_1 + 1])))) : (17355536708779126548ULL)))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_13 [i_1] [i_2] [i_3] [i_4] [i_4] [10LL] = ((/* implicit */long long int) (_Bool)1);
                        arr_14 [i_1] [i_1] = ((/* implicit */int) (unsigned short)27672);
                    }
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2] [i_1 - 3]))));
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_2 [i_1 - 2]);
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        arr_18 [i_1] [(signed char)7] [i_2] [(signed char)13] [i_5] = min((3926316980487004758LL), (((/* implicit */long long int) arr_16 [i_2])));
                        arr_19 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) arr_12 [i_1 - 3] [i_1] [i_1] [i_1 - 3]);
                        arr_20 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */int) ((unsigned short) (~(-4635998742406583051LL))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 3; i_6 < 24; i_6 += 4) 
                    {
                        var_20 = (+(((/* implicit */int) arr_6 [i_1 - 2] [i_6 - 2] [i_1])));
                        arr_23 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_1 - 3])) : (arr_8 [i_1])));
                    }
                    arr_24 [21LL] [i_2] [i_2] [i_1] = ((/* implicit */long long int) (!(arr_21 [i_1 - 3] [i_2] [i_2] [i_3] [i_1])));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) arr_3 [i_1]);
        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)-104), (((/* implicit */signed char) (_Bool)1))))) ? ((+(((/* implicit */int) arr_4 [i_1 - 3] [i_1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_1] [i_1 - 1] [i_1])), (arr_16 [i_1]))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (_Bool)1))));
    }
    for (unsigned short i_7 = 3; i_7 < 23; i_7 += 3) /* same iter space */
    {
        arr_27 [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7] [i_7 + 2] [6LL]))) : (arr_3 [i_7])))) ? (((((/* implicit */_Bool) arr_12 [i_7] [8U] [(unsigned short)24] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16312))) : ((+(444274883U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_26 [i_7])))));
        /* LoopSeq 3 */
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
        {
            arr_30 [i_7 - 2] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_7 [i_8] [i_7 - 1] [i_8]))))));
            var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (unsigned short)37862)) ? (((/* implicit */int) (short)-16313)) : (((/* implicit */int) var_4)))))), (((unsigned long long int) (~(((/* implicit */int) arr_2 [(unsigned short)11])))))));
        }
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
        {
            var_25 *= ((/* implicit */signed char) (unsigned short)20854);
            var_26 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) arr_25 [i_7 + 1])))));
            arr_33 [i_7] [i_9] [i_7 - 1] = ((/* implicit */long long int) (_Bool)1);
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            arr_37 [i_7] = ((/* implicit */_Bool) 6473529419137084051LL);
            arr_38 [i_10] [i_7] [i_7] = ((((/* implicit */_Bool) (short)5407)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27653))) : (-2015084642982431078LL))), (((/* implicit */long long int) (unsigned short)37846)))));
        }
        var_27 = ((/* implicit */long long int) ((int) (unsigned short)58996));
        arr_39 [i_7 - 1] = ((/* implicit */_Bool) var_8);
        var_28 = ((((/* implicit */_Bool) max((((arr_21 [i_7 + 1] [18LL] [i_7] [i_7] [6ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6))), (((/* implicit */unsigned long long int) ((unsigned int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_32 [i_7] [i_7])))) : (max((arr_32 [i_7 - 3] [i_7 - 3]), (arr_32 [i_7 - 1] [i_7 - 3]))));
    }
    for (unsigned short i_11 = 3; i_11 < 23; i_11 += 3) /* same iter space */
    {
        arr_43 [i_11] = ((/* implicit */unsigned int) max((((unsigned long long int) (-9223372036854775807LL - 1LL))), (((/* implicit */unsigned long long int) ((signed char) arr_10 [8LL] [(signed char)6] [i_11 + 2])))));
        arr_44 [i_11] = (+(((/* implicit */int) ((unsigned short) arr_12 [i_11 - 2] [i_11 + 2] [(_Bool)1] [i_11]))));
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_49 [i_12] = ((/* implicit */unsigned long long int) arr_35 [i_11] [i_11]);
            arr_50 [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_35 [i_11 - 1] [i_11 - 2]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 1] [i_12]))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12])))));
            arr_51 [(unsigned short)2] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(723634396))), (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (signed char)-123)) + (138)))))))) ? (((((/* implicit */_Bool) arr_11 [i_11 - 3] [i_11 + 1] [i_11 + 2])) ? (((/* implicit */int) arr_46 [i_11 - 2] [i_11 - 2] [i_11 - 3])) : (((/* implicit */int) arr_46 [i_11 + 1] [i_11 + 2] [i_11 - 2])))) : (((/* implicit */int) ((signed char) (unsigned short)65535)))));
        }
        for (unsigned int i_13 = 1; i_13 < 22; i_13 += 4) 
        {
            arr_55 [i_11 - 2] [i_13] [i_11 - 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
            arr_56 [i_13] = ((/* implicit */unsigned char) (+(max((arr_12 [i_11] [(_Bool)1] [i_13] [i_13]), (((/* implicit */long long int) (_Bool)1))))));
            arr_57 [i_11 + 2] [i_13] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_13] [i_11] [i_13]))) || (((/* implicit */_Bool) arr_35 [i_11 - 1] [i_13 - 1])))))));
            arr_58 [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) arr_34 [i_11]);
            var_29 = ((/* implicit */unsigned short) (((-(arr_41 [i_11 - 3]))) != (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11 + 2] [i_13])))));
        }
        arr_59 [i_11] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [10LL])), (arr_36 [5U])))) ? (((/* implicit */int) arr_40 [i_11 - 3])) : (((/* implicit */int) arr_26 [(unsigned short)1]))))));
    }
    var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_10)))));
}
