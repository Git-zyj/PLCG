/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152417
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [(unsigned char)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 67108863))));
        arr_4 [i_0] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_1 [i_0] [i_0]));
        var_16 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((var_2) - (((/* implicit */long long int) ((/* implicit */int) (short)32759))))) : ((-(var_6)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_12 [i_2] = max((((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) / (var_15))), (((/* implicit */unsigned int) var_13)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 8; i_3 += 1) 
        {
            arr_15 [i_2] = ((/* implicit */signed char) (_Bool)1);
            var_18 = ((/* implicit */_Bool) arr_13 [(_Bool)1]);
            arr_16 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 - 2] [i_3 + 2]))) - (arr_1 [i_3 + 1] [i_3 + 3])));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                arr_22 [(short)9] = ((/* implicit */unsigned char) ((unsigned long long int) ((var_14) + (var_4))));
                var_19 -= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [(_Bool)0] [i_4])) || (((/* implicit */_Bool) var_14)))));
            }
            for (long long int i_6 = 4; i_6 < 9; i_6 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)30801)) ? (-1664603086967252020LL) : (((/* implicit */long long int) var_0)))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 1; i_7 < 7; i_7 += 2) 
                {
                    arr_27 [i_2] [i_4] [i_6] [i_7 + 4] = ((/* implicit */unsigned char) ((5448696562401935005LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7 - 1] [(unsigned short)8] [(_Bool)1] [i_6])))));
                    arr_28 [(short)2] [i_4] [i_6 + 2] [i_7] = ((/* implicit */unsigned long long int) var_9);
                    arr_29 [i_7 + 1] = ((/* implicit */long long int) var_7);
                }
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    arr_34 [i_2] [i_4] [i_6] [i_8] = ((/* implicit */long long int) (-(arr_21 [i_6 - 2] [i_4] [i_6 - 2] [i_4])));
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_37 [i_6 - 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (5448696562401935010LL)))) ^ (arr_1 [i_2] [i_4])));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_31 [i_6 + 2] [i_2] [i_6 + 2]))));
                    }
                    for (short i_10 = 1; i_10 < 10; i_10 += 1) 
                    {
                        arr_40 [i_2] [i_4] [i_4] [i_6] [i_8] [i_8] [i_10] |= ((/* implicit */unsigned short) arr_36 [i_8] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]);
                        arr_41 [i_10] [i_8] [i_4] [i_4] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_36 [i_10] [i_10] [i_10] [i_10] [i_10 - 1]));
                    }
                    for (signed char i_11 = 2; i_11 < 8; i_11 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_6 [i_11]))))) <= ((-9223372036854775807LL - 1LL))));
                        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [(signed char)10] [i_4] [i_6] [i_4] [i_2]))));
                    }
                }
            }
            for (unsigned short i_12 = 2; i_12 < 9; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    for (unsigned char i_14 = 1; i_14 < 7; i_14 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) 5448696562401935011LL);
                            arr_50 [i_2] [i_4] [i_12] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    for (unsigned char i_16 = 3; i_16 < 10; i_16 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */short) (~(((int) var_14))));
                            var_26 = ((/* implicit */short) ((unsigned long long int) arr_36 [i_2] [i_4] [i_12 - 1] [i_15 + 1] [i_16 - 1]));
                        }
                    } 
                } 
            }
            arr_57 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_1))) && (((/* implicit */_Bool) var_10))));
            /* LoopSeq 2 */
            for (unsigned char i_17 = 1; i_17 < 7; i_17 += 2) 
            {
                arr_60 [i_17] [i_2] = ((/* implicit */long long int) var_9);
                arr_61 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((var_14) == (arr_46 [i_17 + 2] [i_17 - 1] [i_17 + 3])));
                arr_62 [i_17 + 4] [i_2] |= ((/* implicit */unsigned long long int) (unsigned short)0);
            }
            for (int i_18 = 0; i_18 < 11; i_18 += 4) 
            {
                arr_65 [i_2] [i_4] [5U] = ((/* implicit */int) (signed char)(-127 - 1));
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_31 [i_2] [i_4] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2])))));
                arr_66 [1U] [i_4] [i_18] [i_18] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_4] [i_18] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_59 [i_2] [i_2] [(signed char)1] [6ULL])))));
                arr_67 [2ULL] [i_4] [i_18] = ((/* implicit */short) var_7);
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_7))));
            }
        }
        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            arr_70 [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_19])) && (((/* implicit */_Bool) arr_7 [i_19])))))) == ((+(arr_7 [i_19])))));
            /* LoopNest 2 */
            for (short i_20 = 1; i_20 < 9; i_20 += 3) 
            {
                for (signed char i_21 = 1; i_21 < 9; i_21 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_47 [i_2] [i_19] [i_19] [i_20 + 1] [i_21 + 2]), (arr_47 [i_2] [(unsigned char)1] [i_2] [(_Bool)1] [i_2]))))));
                        arr_77 [(_Bool)1] [(_Bool)1] [i_19] [i_21] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_72 [i_21 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_72 [i_21 + 2]))));
                        arr_78 [i_21] [i_21] [i_21 - 1] = ((/* implicit */_Bool) max(((short)32759), (((/* implicit */short) (!(((/* implicit */_Bool) arr_45 [i_21 + 1] [i_19] [i_21 + 1] [i_21])))))));
                    }
                } 
            } 
        }
    }
    var_30 = ((/* implicit */unsigned long long int) ((int) ((((_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_14)))) : (var_2))));
    var_31 = ((/* implicit */signed char) var_1);
}
