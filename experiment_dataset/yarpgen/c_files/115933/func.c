/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115933
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
    var_17 = ((/* implicit */long long int) var_6);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((arr_1 [13U]), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 1353947152)) || (((/* implicit */_Bool) (unsigned char)144))))))));
                        var_19 ^= var_2;
                        var_20 *= ((/* implicit */unsigned char) max((((((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_2]))) % (((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_1] [i_2] = ((unsigned int) arr_10 [i_2] [i_2]);
                            var_21 = ((/* implicit */int) var_13);
                            arr_13 [i_0] = ((/* implicit */signed char) var_8);
                            var_22 = (+((-(var_14))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_3] [i_0 + 1] [13] [i_3] [i_5] = ((/* implicit */unsigned short) arr_10 [i_0 - 1] [9U]);
                            var_23 -= ((/* implicit */unsigned short) (~(arr_14 [i_1] [i_2] [i_3])));
                        }
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))) % (3498025435U)))), (var_2))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2892796501U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21364))) : (-2108441870689709767LL)));
                            var_26 = var_5;
                            var_27 = ((/* implicit */unsigned short) arr_7 [i_0] [i_6] [i_2] [i_3]);
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_15))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                {
                    var_30 = var_16;
                    var_31 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_23 [6LL] [(signed char)6] [i_8 + 1])) ? (((((/* implicit */_Bool) arr_0 [i_8])) ? (var_2) : (((/* implicit */long long int) 212393615U)))) : (((var_2) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [1LL]))))))) >= (((/* implicit */long long int) var_4))));
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_6))))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_10 = 1; i_10 < 13; i_10 += 3) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_10 - 1] [i_10 + 1])) ? (var_15) : (((var_13) % (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
        var_34 = ((((/* implicit */_Bool) var_10)) ? (((arr_19 [i_10] [i_10] [i_10]) << (((/* implicit */int) arr_20 [i_10] [i_10] [i_10] [i_10] [i_10] [2U] [(_Bool)1])))) : (var_6));
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_35 -= ((/* implicit */unsigned int) var_0);
            arr_32 [i_11] [i_11] [(signed char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 2995999291U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (arr_17 [i_10] [i_10] [i_11] [i_10] [i_11])));
        }
        for (unsigned int i_12 = 1; i_12 < 13; i_12 += 1) 
        {
            var_36 |= ((/* implicit */int) var_8);
            arr_35 [i_10] = ((/* implicit */signed char) var_0);
            /* LoopSeq 3 */
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    var_37 *= ((/* implicit */_Bool) (((~(((/* implicit */int) arr_18 [i_10] [i_12] [13U] [13LL] [i_14])))) & (((/* implicit */int) var_1))));
                    var_38 = ((/* implicit */unsigned long long int) var_11);
                }
                for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    var_39 = ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (796941848U) : (1298968005U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                    var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (((+(arr_19 [i_10] [i_10] [i_10]))) > (((/* implicit */unsigned int) ((int) 7775388466844453321ULL))))))));
                    var_41 &= ((/* implicit */unsigned int) ((long long int) var_9));
                    var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((/* implicit */unsigned long long int) var_5)) : (((unsigned long long int) arr_10 [i_13] [i_13]))));
                }
                var_43 = ((/* implicit */unsigned int) ((signed char) 622787955U));
                var_44 = ((/* implicit */long long int) ((unsigned short) var_12));
                var_45 = ((/* implicit */unsigned short) ((int) arr_40 [i_10]));
            }
            for (long long int i_16 = 1; i_16 < 11; i_16 += 2) 
            {
                arr_49 [i_10] [i_10] [i_12] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_16 + 1])) ? (arr_8 [i_16 + 1] [i_10 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_10] [i_16]) : (arr_8 [i_16 + 2] [i_10 - 1] [i_16] [i_10] [i_12 - 1] [(signed char)3] [i_16])));
                var_46 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [(signed char)5] [i_12 + 1]))));
            }
            for (signed char i_17 = 4; i_17 < 13; i_17 += 3) 
            {
                var_47 ^= ((/* implicit */signed char) ((int) arr_6 [i_12] [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 1]));
                var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((_Bool) ((unsigned int) (signed char)-15))))));
                var_49 = ((/* implicit */unsigned short) arr_0 [(unsigned char)6]);
            }
            arr_54 [2ULL] = ((/* implicit */signed char) var_9);
        }
    }
    /* vectorizable */
    for (long long int i_18 = 0; i_18 < 18; i_18 += 4) 
    {
        arr_57 [i_18] = var_10;
        arr_58 [10] = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) var_10)));
        arr_59 [i_18] &= ((/* implicit */signed char) (+(arr_56 [i_18])));
    }
}
