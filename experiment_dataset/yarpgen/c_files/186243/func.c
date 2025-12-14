/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186243
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        var_10 = ((int) 15955164864773421678ULL);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 13ULL);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_11 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [(unsigned short)0] [i_2] [i_5]))));
                            var_12 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1]))));
                        }
                        for (long long int i_6 = 2; i_6 < 10; i_6 += 3) 
                        {
                            var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (16357739727892467117ULL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_6)))))));
                            arr_22 [i_0] [i_1] [(_Bool)1] [i_4] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_2))));
                        }
                        arr_23 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_0])) != (arr_20 [i_1 + 1] [i_4] [i_4] [i_0] [i_4])));
                        arr_24 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0] [i_1 + 1] [i_1] [i_1 + 1]));
                        arr_25 [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))) <= (8318875652216997076ULL))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-3)) % (((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 2) 
                    {
                        arr_28 [i_7 + 2] [i_1 + 1] [i_2] [i_0] = arr_15 [i_1] [i_0];
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_7 - 1] [i_0] = ((/* implicit */signed char) (-(1318081095)));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) ^ (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_2]))))));
                            arr_33 [i_7 + 2] [i_0] [i_7] [(unsigned char)4] [i_7] [i_7 - 1] = arr_6 [i_8] [i_0] [i_0];
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_36 [i_9] [i_2] [i_0] [i_9] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -35631220))));
                            arr_37 [i_7] [i_7] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))) % (15U)));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_9))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            arr_40 [i_0] [(unsigned short)1] [i_2] [i_2] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-798)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)239))))) : (var_1)));
                            arr_41 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 3) 
                        {
                            var_17 -= ((/* implicit */signed char) var_0);
                            arr_44 [i_11 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)15508);
                            arr_45 [i_0] [i_0] [i_0] [i_7] [i_0] [i_11] = ((/* implicit */short) (signed char)-53);
                            var_18 = ((/* implicit */_Bool) var_9);
                        }
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_19 ^= (_Bool)1;
                        var_20 -= ((/* implicit */unsigned short) ((_Bool) arr_12 [i_1 + 1] [i_1 + 1]));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_14 = 2; i_14 < 9; i_14 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (_Bool)1))));
                            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (unsigned short)28867)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [(_Bool)1] [i_13] [(unsigned short)6] [i_1 + 1] [(_Bool)1])))))));
                            var_23 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) var_0))));
                            var_24 ^= ((/* implicit */_Bool) (unsigned char)227);
                            var_25 ^= ((/* implicit */short) (+(((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228))))))));
                        }
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (signed char)-9))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
                            arr_62 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                            var_27 = ((/* implicit */unsigned int) var_7);
                        }
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_6 [i_17] [(unsigned short)6] [i_0]))));
                            arr_67 [i_1] [i_1] [i_1] [i_15] [i_17] [i_17] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_30 [i_0] [i_0] [i_2] [i_15] [i_17])) : (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) 1857064752))) - (36631)))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            arr_70 [i_0] [i_0] [i_0] [i_0] [i_15] [i_18] = (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_2] [i_0]))))), (((((/* implicit */_Bool) 3110874442U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [8LL] [8LL]))))))));
                            arr_71 [i_0] = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_2)))))));
                            var_29 = ((/* implicit */unsigned char) var_7);
                        }
                        /* vectorizable */
                        for (long long int i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            var_30 -= (!(((/* implicit */_Bool) (signed char)0)));
                            arr_74 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) var_9))))));
                            var_31 = ((/* implicit */unsigned int) ((unsigned long long int) arr_16 [i_19] [i_0] [i_15] [i_15] [i_0] [i_0]));
                        }
                        arr_75 [i_15] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(var_3)));
                        var_32 ^= ((/* implicit */signed char) 4125843777U);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) var_2))));
                        arr_79 [i_0] [i_0] [i_20] [i_20] [i_20] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)47957)) || (((/* implicit */_Bool) 3163416150U)))))))));
                        var_34 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1 + 1] [i_0]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                        {
                            arr_83 [i_0] [i_1 + 1] [9ULL] [i_1] [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) var_0);
                            arr_84 [i_0] [i_0] [i_2] [i_20] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [i_0] [i_1 + 1] [i_1 + 1])) && ((!((_Bool)0)))));
                        }
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_23 = 0; i_23 < 11; i_23 += 2) 
                        {
                            var_35 -= ((/* implicit */unsigned short) (signed char)-106);
                            arr_90 [i_0] [i_1 + 1] [i_0] = ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) / (((((/* implicit */int) arr_46 [i_2] [i_2] [i_1 + 1] [i_22] [i_0] [i_1])) - ((-(((/* implicit */int) (signed char)15)))))));
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) ^ (3404521959U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-101)) ? (33554428) : (min((((/* implicit */int) (signed char)-59)), (1779431048)))))))))));
                        }
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)44), (((/* implicit */signed char) (_Bool)1))))) ? (8087658543899234629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_81 [i_22] [i_2] [i_0] [i_0] [i_0]))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_24 = 0; i_24 < 11; i_24 += 2) 
                        {
                            var_38 ^= ((/* implicit */signed char) var_3);
                            var_39 = ((/* implicit */unsigned int) var_9);
                            arr_93 [i_0] = ((/* implicit */unsigned short) 11922840);
                            arr_94 [i_0] [i_1] [i_2] [i_22] [0ULL] = ((/* implicit */unsigned short) (_Bool)0);
                            arr_95 [i_24] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) arr_48 [i_0] [i_1 + 1] [i_1 + 1] [i_2]);
                        }
                    }
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_8)))))), ((((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (var_4))))))));
}
