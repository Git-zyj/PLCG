/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155778
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_0]);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_11 = ((/* implicit */unsigned int) (~((~((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_1)) > (-569355808))))));
                                var_13 = ((/* implicit */int) ((((unsigned long long int) var_0)) < (arr_2 [i_0])));
                                arr_13 [(unsigned short)13] [i_1] [i_1] [i_2] [i_2] [i_3] [(short)14] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_9 [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 3])), (var_0))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) ((int) var_9)))), (arr_5 [i_0] [i_1] [i_2])));
                    arr_14 [i_1] [(signed char)5] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1 + 1]))))) >> (((((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_2] [i_2])) - (9980)))))) : (((/* implicit */unsigned char) ((((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1 + 1]))))) >> (((((((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_2] [i_2])) - (9980))) - (16027))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        for (short i_7 = 1; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) ((63) != (-63)))) > ((-(((/* implicit */int) var_10)))))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_5] [i_5] [i_6] [i_7] [i_7])) << (((var_5) + (1146704249)))));
                                arr_22 [(_Bool)1] [i_1] [i_5] [i_5 - 1] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (63) : (((/* implicit */int) arr_21 [i_1] [i_6]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((75) / (((/* implicit */int) var_10)))) < (((/* implicit */int) arr_24 [i_1 - 3] [i_5 + 3] [i_5] [(signed char)8]))));
                                var_18 = ((/* implicit */int) var_0);
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 3]))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (2060827722) : (((/* implicit */int) (unsigned char)70)))))));
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */_Bool) ((var_0) >> ((((~(((/* implicit */int) var_10)))) - (7314)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_12 = 1; i_12 < 20; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_43 [i_10] [i_10] [i_10] [i_10] [i_14] [i_10] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)19626)) ? (((/* implicit */int) (short)24844)) : (((/* implicit */int) (signed char)-11)))), (((/* implicit */int) ((signed char) (short)19626)))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_1))));
                            arr_44 [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((int) (_Bool)1)) : ((-(((/* implicit */int) var_10)))))))))));
            arr_45 [i_10] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_30 [i_11])) : (17658518048795353600ULL)))));
            arr_46 [(signed char)16] [i_10] [i_10] = ((/* implicit */unsigned short) var_4);
        }
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((min((arr_27 [i_10] [i_10]), (((/* implicit */long long int) (signed char)11)))) << (((((/* implicit */int) ((signed char) (signed char)-11))) + (27))))))));
    }
    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
    {
        arr_49 [i_15] = ((/* implicit */short) (~((-(arr_47 [i_15])))));
        arr_50 [i_15] = max((((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)-11), (((/* implicit */signed char) (_Bool)0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-75) : (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 86)) ? (arr_47 [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? ((-(arr_48 [3]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (int i_16 = 1; i_16 < 21; i_16 += 3) 
        {
            for (int i_17 = 2; i_17 < 21; i_17 += 3) 
            {
                for (long long int i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-18)), ((unsigned short)65535))))) : (min((((/* implicit */long long int) var_1)), (arr_51 [i_15] [2ULL]))))))))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_59 [i_16] [i_17 - 2] [i_17 - 2] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_59 [i_15] [i_17 - 1] [i_15] [(signed char)9]))))))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (arr_57 [i_17 + 2] [i_17 - 2] [i_17 + 1])))) ? ((~(arr_57 [13] [i_17] [i_17 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_57 [(unsigned short)10] [i_17] [i_17 + 2]))))));
                        arr_60 [i_15] [i_16] [i_17] [i_18] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_10))))))), ((-(max((var_0), (((/* implicit */unsigned long long int) arr_56 [i_16]))))))));
                    }
                } 
            } 
        } 
    }
}
