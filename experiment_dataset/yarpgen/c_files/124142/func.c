/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124142
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_5) ? (((((/* implicit */_Bool) var_4)) ? (-1413593093) : (((/* implicit */int) var_0)))) : (var_1)))) % (13941779668709830518ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) var_4);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (~(var_2))))));
            var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */int) var_10))));
        }
        /* LoopSeq 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_12 [i_2 - 1] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                arr_15 [4] [i_2] [4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5272667017301921955LL)) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (13941779668709830518ULL)))) || (((/* implicit */_Bool) var_3))));
            }
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((unsigned long long int) 140737488289792LL)) : (((/* implicit */unsigned long long int) (+(8362105882296344907LL))))));
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((+(-8362105882296344908LL))) : (((arr_11 [i_4] [i_4] [i_4] [1U]) - (((/* implicit */long long int) ((/* implicit */int) (short)-14722)))))));
            }
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((13941779668709830538ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) & (((/* implicit */unsigned long long int) -1101777960389373464LL)))))));
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) var_0)) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-2388))) >= (var_7)))))))));
            arr_21 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) (signed char)9);
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 1) 
            {
                var_20 = arr_9 [i_0];
                arr_24 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */short) var_11);
            }
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                var_21 = ((/* implicit */int) var_5);
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 1])) && (((/* implicit */_Bool) arr_12 [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                var_23 = ((/* implicit */short) max((var_23), (var_4)));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) -2797774549686162812LL);
                    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_8 + 1]))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned long long int) var_9)))));
                        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_5] [i_0])))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = (short)-2207;
                        arr_37 [i_0] [i_5] [i_7] [i_8] [i_10] = ((/* implicit */unsigned char) (((~(arr_33 [i_0] [i_0] [i_5] [i_7] [i_8 - 1] [i_10]))) >> (((((((/* implicit */_Bool) var_0)) ? (5272667017301921943LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) - (5272667017301921883LL)))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_5] [i_7] [8] [i_5] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (signed char)-123)) - (((/* implicit */int) var_6)))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_7 [i_8]))))))));
                    }
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_5] = ((/* implicit */_Bool) (+(arr_8 [i_5 - 1] [i_5 - 1])));
                        var_29 = ((/* implicit */signed char) arr_7 [i_12]);
                    }
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_0] [i_13] [i_7] [i_8] [8ULL] [i_7])) ? (arr_33 [i_0] [i_5 - 1] [i_5] [i_8] [i_0] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_5] [i_8 + 1] [i_8] [i_8] [i_5 - 1] [i_8])))));
                        arr_48 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [(unsigned char)13] [i_5 - 1] [i_7] [i_8 - 2])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_5 - 1] [i_7] [i_8 - 2])) : (arr_38 [i_0] [i_5 - 1] [i_5] [i_8 + 1] [i_13])));
                        var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    }
                }
                for (int i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 4 */
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_8 [i_0] [i_5 - 1]))))));
                        arr_54 [i_0] [i_5] [i_7] [i_5] [i_0] = ((/* implicit */unsigned char) arr_17 [i_5] [(short)8] [i_5] [i_5]);
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31042))) : (-6894768782353040969LL)))) ? (((/* implicit */int) (short)-26564)) : ((+(((/* implicit */int) (unsigned short)0))))));
                        var_35 = ((/* implicit */unsigned char) var_1);
                    }
                    for (long long int i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
                    {
                        var_36 = ((((/* implicit */_Bool) arr_19 [i_0] [i_5 - 1] [i_7])) ? (arr_29 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                        arr_59 [i_0] [i_0] [i_5] [i_5] [i_14] [(_Bool)1] [i_16] = ((/* implicit */_Bool) ((unsigned char) var_8));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */int) (short)0)))) != (((((/* implicit */_Bool) 4504964404999721088ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_23 [i_0] [i_7] [i_14]))))));
                        arr_64 [i_0] [i_5] [i_5] [i_0] [(signed char)5] [i_14] [i_17] = ((/* implicit */unsigned long long int) var_7);
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_6 [i_5 - 1])) ? (((/* implicit */long long int) arr_31 [i_5] [i_14] [i_5] [17LL] [i_5] [i_0] [i_0])) : (arr_2 [i_0] [i_5 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                    }
                    for (short i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        arr_67 [i_18] [i_5] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */int) (short)-11913);
                        arr_68 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_5])) ? (arr_39 [i_18]) : (arr_39 [i_0])));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        var_39 = var_4;
                        arr_71 [i_0] [i_5] [i_5] [i_14] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_5 - 1] [i_5 - 1] [i_7] [i_19 - 1] [i_14]))) : (arr_13 [i_5 - 1])));
                        arr_72 [i_5] [i_7] = ((/* implicit */short) (+((-(((/* implicit */int) var_3))))));
                    }
                }
            }
        }
        for (signed char i_20 = 2; i_20 < 17; i_20 += 1) 
        {
            var_40 = ((((/* implicit */_Bool) var_0)) ? (((var_5) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3))))));
            arr_77 [i_0] [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) (signed char)-68))));
            arr_78 [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_8)) - (242)))))));
        }
        arr_79 [i_0] = ((/* implicit */unsigned short) (-(arr_60 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        arr_83 [i_21] [i_21] = ((/* implicit */long long int) -1093864209);
        arr_84 [i_21] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) -8362105882296344907LL)) ? (arr_28 [(short)0] [(short)0] [i_21] [i_21] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
    }
    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) max((var_7), (((/* implicit */long long int) var_3)))))));
    var_42 = ((/* implicit */short) var_11);
}
