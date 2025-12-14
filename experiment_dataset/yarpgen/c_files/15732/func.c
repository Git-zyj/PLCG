/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15732
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
    var_14 += ((/* implicit */signed char) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((short) arr_3 [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) + (arr_7 [i_0] [i_1 + 1] [i_0])));
            arr_10 [i_0] = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_1 - 2] [i_1 - 1]));
        }
        var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-1))) ? (((6379291750901668269ULL) << (((/* implicit */int) var_3)))) : (((/* implicit */unsigned long long int) var_7))));
    }
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned char)255), ((unsigned char)255))))))) <= (min((((/* implicit */unsigned int) max((-989609863), (((/* implicit */int) (unsigned char)15))))), (arr_5 [i_2])))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 2; i_3 < 15; i_3 += 1) /* same iter space */
        {
            var_17 += ((/* implicit */unsigned long long int) arr_11 [i_2 - 1] [i_3 + 1]);
            arr_15 [i_2] [i_2] = ((((((/* implicit */_Bool) (signed char)-113)) ? (12067452322807883346ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))) % (arr_8 [i_3] [i_3 - 1]));
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned long long int) -3275360248381224734LL)))));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (+(arr_17 [i_2 - 1] [7] [i_4])))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) (((!(((_Bool) var_13)))) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_17 [i_2] [i_2] [i_2]))) % (((/* implicit */int) ((unsigned char) var_4))))))));
                        arr_24 [i_5] [i_3] [(unsigned char)14] [i_3] [i_6] |= ((/* implicit */_Bool) ((unsigned int) max((arr_6 [i_2 - 1] [i_3 + 1]), (arr_6 [i_2 - 1] [i_3 + 1]))));
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_29 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))) ? (((/* implicit */int) (unsigned short)48894)) : (((/* implicit */int) (_Bool)1))));
                        arr_30 [i_2] [i_2] [i_4] [i_2] [i_5] [i_4] = ((/* implicit */_Bool) ((max((((/* implicit */int) max(((signed char)105), (arr_23 [10U] [i_3 - 2] [0LL] [i_5] [7ULL])))), (var_4))) << (((-1LL) + (13LL)))));
                    }
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (6379291750901668270ULL))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-1)), (0U))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)0))))))) * ((-(arr_13 [i_2] [i_4] [i_3 + 1]))))))));
                    var_23 = ((/* implicit */unsigned long long int) (signed char)16);
                }
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_24 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_5 [i_2]) : (arr_5 [i_2])))));
                    var_25 = ((/* implicit */signed char) ((_Bool) (-(((((/* implicit */int) (unsigned char)15)) >> (((2147483647) - (2147483646))))))));
                    var_26 = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_3)))), (((int) arr_28 [i_8] [15] [i_3] [i_3] [(unsigned short)15]))));
                    var_27 = ((/* implicit */unsigned char) (_Bool)1);
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) ((unsigned short) var_0));
                    arr_37 [i_2] [i_3] [i_4] [i_2] [i_9] = ((/* implicit */signed char) (!(arr_1 [i_2])));
                    arr_38 [7U] [(unsigned char)14] [i_4] [i_2] = ((/* implicit */unsigned char) (~(arr_7 [i_2 + 1] [i_3 + 1] [i_2])));
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 0U))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) 989609862)) >= (0ULL))))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        arr_44 [i_2] [i_2] [i_2] [13] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (1008806316530991104LL)));
                        var_30 = ((/* implicit */_Bool) ((unsigned int) ((unsigned short) var_0)));
                        var_31 = ((/* implicit */unsigned char) ((var_9) && (((/* implicit */_Bool) arr_12 [i_2]))));
                        var_32 = ((/* implicit */int) arr_35 [i_2] [i_3 + 1] [i_4] [i_10] [i_11] [i_4]);
                    }
                    var_33 = ((/* implicit */_Bool) ((0ULL) % (arr_12 [i_2])));
                    arr_45 [i_2] [i_3] [i_4] [i_10] = ((/* implicit */_Bool) ((int) var_9));
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)82)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
                }
            }
        }
        for (unsigned char i_12 = 2; i_12 < 15; i_12 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (short i_14 = 2; i_14 < 15; i_14 += 2) 
                {
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_33 [i_2]))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (short)232)) : (((/* implicit */int) (_Bool)1))));
                            var_37 -= ((/* implicit */unsigned int) max((arr_8 [i_14] [i_2]), (((/* implicit */unsigned long long int) var_6))));
                        }
                    } 
                } 
            } 
            arr_55 [i_2] [i_2] = arr_35 [9LL] [i_12] [6] [i_12] [(_Bool)1] [9LL];
        }
        /* LoopSeq 2 */
        for (int i_16 = 1; i_16 < 14; i_16 += 2) /* same iter space */
        {
            var_38 ^= ((/* implicit */int) ((long long int) (_Bool)0));
            arr_58 [i_2] [i_2] = ((/* implicit */unsigned short) var_2);
        }
        /* vectorizable */
        for (int i_17 = 1; i_17 < 14; i_17 += 2) /* same iter space */
        {
            arr_61 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) 788171532U)))));
            arr_62 [i_2] [i_2] = ((/* implicit */unsigned int) var_10);
        }
        var_39 += ((/* implicit */int) var_1);
        var_40 = ((/* implicit */unsigned int) (_Bool)0);
    }
    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
    {
        arr_65 [10LL] = ((/* implicit */int) var_2);
        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [4LL]) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_1 [(unsigned short)16]))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)46759)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)6])))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            arr_68 [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((arr_8 [i_18 + 1] [i_18 + 1]) > (arr_8 [i_18 + 1] [i_18 + 1])));
            var_42 = ((/* implicit */_Bool) 4294967295U);
            arr_69 [i_18] [i_19] = ((/* implicit */unsigned char) ((unsigned long long int) arr_67 [i_18]));
            var_43 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
        }
    }
    var_44 += ((/* implicit */signed char) ((int) var_3));
}
