/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13560
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 3]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-((+((+(((/* implicit */int) var_1))))))));
            var_16 *= arr_0 [i_0];
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 2; i_3 < 10; i_3 += 4) 
            {
                arr_14 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0])))))) ? (((/* implicit */int) ((arr_9 [i_0 - 1] [i_0 - 3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10)))))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_13 [i_2] [i_0])) : (((/* implicit */int) (_Bool)1)))))), (((int) var_0))));
                var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) arr_12 [i_0] [i_0] [i_3 + 1]))), (((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3 + 1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_3 + 1])))))));
            }
            var_18 = ((/* implicit */int) var_11);
        }
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned char) (~((+(var_9)))));
        arr_18 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_5 + 3])) * (((/* implicit */int) arr_16 [6ULL]))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_21 |= ((/* implicit */long long int) ((((/* implicit */int) var_11)) | ((~(((/* implicit */int) arr_22 [i_6]))))));
            var_22 = ((/* implicit */unsigned char) (~((-(var_14)))));
        }
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_7])))))));
            /* LoopSeq 1 */
            for (short i_8 = 1; i_8 < 10; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 3) 
                {
                    arr_34 [i_8] = ((/* implicit */unsigned char) arr_33 [i_8] [i_8 + 3] [i_7] [i_8]);
                    arr_35 [i_5 + 2] [i_5] [i_8] [i_5] = ((/* implicit */long long int) (-(524287U)));
                }
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned int i_11 = 1; i_11 < 11; i_11 += 1) 
                    {
                        {
                            arr_42 [(signed char)5] [i_8] [(signed char)5] [i_8] [i_5] = ((/* implicit */signed char) arr_17 [i_5] [i_5]);
                            var_24 -= ((/* implicit */unsigned short) ((short) arr_38 [i_7] [i_7] [i_10] [i_8 - 1]));
                            arr_43 [i_7] [i_7] [i_8] [i_7] [i_11] [i_10] = ((((/* implicit */_Bool) arr_29 [i_8] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8 + 3]))) : (arr_29 [i_8] [i_11 + 1]));
                        }
                    } 
                } 
            }
        }
    }
    /* LoopSeq 2 */
    for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        arr_48 [i_12] = ((/* implicit */unsigned short) min((((((((/* implicit */int) var_1)) % (((/* implicit */int) arr_16 [i_12])))) & (((((/* implicit */_Bool) arr_16 [i_12])) ? (((/* implicit */int) arr_46 [i_12])) : (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) min((var_0), (var_0)))) ? (((((/* implicit */_Bool) var_13)) ? (681927764) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_46 [10U]))))));
        var_25 *= ((/* implicit */unsigned long long int) var_0);
        arr_49 [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_12])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_46 [i_12])))))));
    }
    for (long long int i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        arr_52 [i_13] = ((/* implicit */int) var_10);
        arr_53 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_44 [i_13]), (((/* implicit */unsigned short) max(((signed char)67), (((/* implicit */signed char) arr_50 [i_13] [i_13])))))))) ? (max((((((/* implicit */_Bool) 3015642819250654050LL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_13]))))), (var_9))) : (max((((arr_50 [i_13] [i_13]) ? (var_9) : (var_5))), (((/* implicit */unsigned long long int) ((long long int) arr_46 [(signed char)12])))))));
    }
    /* LoopSeq 2 */
    for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
    {
        arr_57 [i_14] = ((/* implicit */unsigned int) min((var_1), (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_55 [i_14])))) == (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_55 [i_14])))))))));
        var_26 = ((/* implicit */unsigned long long int) var_4);
        arr_58 [11U] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_54 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) : (((((/* implicit */_Bool) arr_54 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))) : (5305030096295687935ULL))))) != (((/* implicit */unsigned long long int) var_14))));
    }
    for (int i_15 = 1; i_15 < 20; i_15 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_15])) ? (((/* implicit */int) arr_59 [i_15])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_59 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_15]))) : (2605971290399660468ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_15])) ? (((/* implicit */int) arr_59 [i_15])) : (((/* implicit */int) arr_59 [i_15])))))));
        arr_61 [i_15] = ((/* implicit */_Bool) arr_60 [i_15]);
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) ((unsigned short) arr_60 [i_15]))) : ((-(((/* implicit */int) arr_60 [i_15]))))));
    }
    var_29 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) var_6)) - (30665)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_10)))) : (((/* implicit */int) var_12)))))));
}
