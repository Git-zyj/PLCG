/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154353
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) min(((signed char)122), (var_7)))), (var_12)))) ? (var_14) : (((/* implicit */int) var_8))));
    var_16 = ((/* implicit */unsigned char) ((signed char) 9335166353656647747ULL));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (3963403307012128666ULL)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (!((((~(6176973691088869717ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_19 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 9111577720052903862ULL)) && (((/* implicit */_Bool) (unsigned char)81)))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned long long int) var_14);
            var_20 = ((/* implicit */signed char) min((var_20), (((signed char) arr_2 [i_0] [i_1]))));
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        var_21 = ((((/* implicit */_Bool) (signed char)53)) ? (18014398442373120ULL) : (18446744073709551599ULL));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_22 = ((/* implicit */int) ((signed char) arr_3 [i_2] [i_3] [i_3]));
            arr_9 [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)34);
        }
        arr_10 [i_2 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
    }
    for (unsigned char i_4 = 3; i_4 < 21; i_4 += 4) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */short) arr_11 [i_4 - 3]);
        arr_14 [i_4] [i_4 + 1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (9111577720052903854ULL)));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((max((((/* implicit */int) arr_16 [i_6])), (var_14))), (((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) (unsigned char)122)))) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (signed char)-67))))))))))));
                        arr_24 [i_4 - 3] [i_5] [i_6] [i_4] = ((/* implicit */short) (~(arr_20 [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 2])));
                        var_24 = ((/* implicit */unsigned char) min((max((arr_23 [i_4] [i_6] [i_4]), (arr_23 [i_4 - 2] [i_7] [i_4]))), (((((/* implicit */_Bool) arr_20 [i_4] [i_4 + 1] [i_4] [i_4 - 3])) && (((/* implicit */_Bool) arr_12 [i_4]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 2) 
                        {
                            arr_28 [i_4 - 3] [i_5] [i_4] [i_6] [i_7] [i_8 + 2] = ((/* implicit */unsigned int) ((arr_25 [i_8 + 2] [i_8] [i_8 + 1] [i_8] [i_4 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            arr_29 [i_4 + 1] [i_5] [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-111)) ^ (((/* implicit */int) ((signed char) var_8)))));
                        }
                        for (short i_9 = 3; i_9 < 20; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_4 - 3]))));
                            var_26 = ((/* implicit */short) max(((~(((/* implicit */int) arr_17 [i_4] [i_5] [i_6])))), (((/* implicit */int) (((~(((/* implicit */int) var_13)))) < (((((/* implicit */int) (short)-21618)) - (((/* implicit */int) var_3)))))))));
                            arr_32 [i_4] [i_5] [i_6] [i_7] [i_9 + 2] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1134566633) : (((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) max(((unsigned char)22), ((unsigned char)8)))) : (((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (signed char)-70)))))), (arr_22 [i_4] [i_7] [i_9] [i_9 + 2] [i_9])));
                            arr_33 [i_4 - 2] [i_4] [i_6] [i_7] [i_9] [i_4] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((((/* implicit */_Bool) (unsigned char)247)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112)))))))))));
                        }
                    }
                    for (short i_10 = 2; i_10 < 20; i_10 += 1) 
                    {
                        arr_37 [i_4] [i_4] = ((/* implicit */unsigned char) var_6);
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            arr_41 [i_10] [i_4] [i_4] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)133)) < (((/* implicit */int) var_7))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_38 [i_5] [i_4 - 2] [i_6] [i_10] [i_11] [i_10 - 2]))) ? (arr_15 [i_4]) : (((unsigned long long int) (signed char)-64))));
                        }
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_4 + 1] [i_4 + 1] [i_5] [i_4] [i_12] = ((((((/* implicit */_Bool) arr_30 [i_4 - 3] [i_5] [i_12])) && (((/* implicit */_Bool) arr_43 [i_4 - 2] [i_6] [i_4])))) ? (((/* implicit */int) arr_31 [i_4] [i_6] [i_4])) : (((/* implicit */int) arr_16 [i_12])));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)1)))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_4 - 1] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-6))));
                        arr_48 [i_5] [i_5] [i_6] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */short) max((max((((/* implicit */unsigned char) arr_17 [i_13] [i_5] [i_6])), (arr_46 [i_5] [i_4 - 1] [i_4]))), ((unsigned char)240)))), (max((max((((/* implicit */short) (signed char)-57)), ((short)-1))), (((/* implicit */short) (signed char)98))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((((/* implicit */int) var_0)) * (((/* implicit */int) ((((/* implicit */int) arr_17 [i_13] [i_5] [i_4 + 1])) == (((/* implicit */int) var_12))))))) <= ((~(((/* implicit */int) arr_43 [i_4 - 1] [i_4] [i_6])))))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            arr_55 [i_4] [i_14] [i_14] [i_14] [i_6] [i_5] [i_4] = ((signed char) ((short) (+(var_14))));
                            var_30 = ((/* implicit */unsigned long long int) ((_Bool) min(((signed char)125), ((signed char)-99))));
                            arr_56 [i_4] [i_4] = ((/* implicit */short) (~((+(((/* implicit */int) var_5))))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-31))))));
                        }
                        arr_57 [i_4 - 2] [i_4] [i_4 - 3] [i_4] [i_4] [i_4 - 3] = ((/* implicit */int) (unsigned char)3);
                    }
                    arr_58 [i_4] [i_4] = ((/* implicit */signed char) ((unsigned char) (+((~(((/* implicit */int) (signed char)52)))))));
                    arr_59 [i_4] [i_4] [i_6] = var_10;
                }
            } 
        } 
    }
    var_32 = ((/* implicit */signed char) var_8);
}
