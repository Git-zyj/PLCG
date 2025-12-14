/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114327
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) var_11)) | (var_5))) >> (((((unsigned long long int) arr_4 [i_0])) - (70ULL))))))));
                        var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_6))))))));
                        arr_11 [9ULL] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((int) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (max((var_0), (arr_6 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4]))) : (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [i_4]))))) : ((-(2097151U))))))));
        arr_15 [i_4] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4])))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 4; i_5 < 14; i_5 += 4) 
        {
            for (unsigned char i_6 = 2; i_6 < 12; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((unsigned long long int) var_5))))));
                    arr_22 [i_6] [i_4] = ((/* implicit */unsigned char) 7LL);
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    {
                        var_24 = ((/* implicit */long long int) (-(min((max((arr_6 [(_Bool)1] [i_8]), (((/* implicit */unsigned int) var_10)))), (((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_8] [i_8] [i_10])) ? (arr_33 [i_7] [i_8] [i_7] [(unsigned short)11] [i_7]) : (var_5)))))));
                        arr_34 [i_10] [i_9 - 1] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7]))) : (var_0)))))) : (8490086643780415249ULL)));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_37 [i_7] [i_7] [i_9 + 2] [i_10] [i_10] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_4 [i_7])) * (((/* implicit */int) arr_24 [i_10]))))));
                            var_25 = ((/* implicit */short) (+(((/* implicit */int) (short)7))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((var_16) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_7] [i_10] [i_12]))))) : ((~(arr_31 [i_8]))))))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_32 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9 + 1]), (arr_32 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9 + 1])))) ? (((((/* implicit */_Bool) arr_32 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9 + 1])) ? (arr_39 [i_9 + 1] [i_8] [i_9 + 2] [i_8] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9 + 1]))))) : (((((/* implicit */_Bool) arr_39 [i_9 + 1] [i_8] [i_9 + 2] [i_8] [i_9 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9 + 1]))) : (arr_39 [i_9 + 1] [i_8] [i_9 + 2] [i_8] [i_9 + 1]))))))));
                            var_28 = ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_8] [i_9] [i_8])))) && (((/* implicit */_Bool) arr_3 [i_8] [(short)10] [i_9 + 2])))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_27 [i_7] [6] [i_9 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_7] [i_10] [i_7])) + (((/* implicit */int) arr_38 [i_7] [11] [i_7]))))) : (max((((/* implicit */unsigned long long int) arr_38 [i_8] [i_9 + 1] [i_7])), (arr_27 [i_7] [10U] [i_7])))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_10])) ? (arr_6 [i_9] [(signed char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_7] [i_8] [5U] [2U]))))))))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) (short)-25)))), ((-(((/* implicit */int) arr_9 [(short)6] [i_8] [(signed char)6] [i_8]))))))))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_32 -= ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32767))))))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_1))));
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) 953731045U))), (arr_35 [i_7] [i_14] [i_7] [i_10] [(short)3] [i_7] [i_7]))))) * (var_5))))));
                        }
                        var_35 = ((/* implicit */unsigned int) arr_42 [i_7] [i_7]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            for (short i_16 = 2; i_16 < 9; i_16 += 3) 
            {
                for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            var_36 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_18] [(unsigned char)11] [i_16 - 1] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [8U] [i_16 - 1] [i_15] [8U])) >> (((var_2) - (3741595916U)))))) : (((var_14) / (953731045U)))))));
                            var_37 = (!(((((/* implicit */_Bool) arr_24 [i_16 - 2])) || (((/* implicit */_Bool) arr_24 [i_16 + 2])))));
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((unsigned int) arr_17 [i_7] [i_15] [i_17])) | ((~(arr_55 [i_7] [i_7] [3ULL] [i_17] [i_18])))))) ? (((((/* implicit */_Bool) arr_33 [i_7] [i_15] [i_16 + 3] [i_17] [(short)3])) ? ((~(arr_28 [4]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [(_Bool)1] [i_16] [i_15] [4U])) + (((/* implicit */int) (_Bool)1))))))) : (((((((/* implicit */_Bool) arr_39 [i_7] [i_15] [i_7] [(unsigned short)2] [i_7])) ? (3341236237U) : (var_5))) >> (((((((/* implicit */_Bool) var_2)) ? (arr_7 [(short)14] [i_17] [i_18]) : (((/* implicit */unsigned long long int) 3341236251U)))) - (6755979996762038705ULL))))))))));
                            arr_57 [i_7] = ((/* implicit */unsigned char) ((_Bool) var_15));
                        }
                        for (unsigned int i_19 = 4; i_19 < 9; i_19 += 1) /* same iter space */
                        {
                            arr_60 [i_7] [i_15] [i_15] [i_15] [i_15] [i_15] = -3894208053399130054LL;
                            arr_61 [i_17] [i_17] [i_17] [i_7] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [(unsigned char)9])) ? (((/* implicit */long long int) ((var_0) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) arr_40 [10U])) : (((/* implicit */int) var_17)))))))) : ((+((+(var_12)))))));
                        }
                        for (unsigned int i_20 = 4; i_20 < 9; i_20 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_20] [i_7] [i_7] [14LL]))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_2))))) ? (min((((/* implicit */unsigned long long int) var_8)), (var_4))) : (((/* implicit */unsigned long long int) max((arr_55 [i_7] [(unsigned short)4] [(unsigned short)4] [i_15] [0ULL]), (((/* implicit */unsigned int) var_3))))))) - (3481357319ULL)))));
                            arr_65 [i_7] [i_16] [i_16] [i_20] = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) arr_54 [3ULL] [i_7] [i_7] [i_7] [i_7]))))))));
                        }
                        var_40 -= ((/* implicit */long long int) arr_43 [i_7] [i_7] [i_16 - 1] [i_16 + 1] [i_17] [i_15]);
                        var_41 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_17] [i_16] [i_15] [i_15] [i_7])) ? (var_14) : (var_5)))))))));
                    }
                } 
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned short) max((((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_16)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5))))), (((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) var_8)) ? (2376492632U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
    var_43 = ((/* implicit */short) var_7);
}
