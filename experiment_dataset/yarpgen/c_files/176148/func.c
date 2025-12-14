/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176148
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned long long int) var_4);
            var_12 *= ((/* implicit */signed char) arr_0 [1ULL]);
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)159))));
                var_14 ^= (((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)146)) <= (((/* implicit */int) arr_1 [i_2]))))))) >> (((((((/* implicit */_Bool) max((arr_6 [i_2] [(unsigned char)20] [i_0 + 4] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_2]))))) ? (((/* implicit */int) ((unsigned char) 18446744073709551615ULL))) : (arr_4 [i_0] [i_1]))) - (253))));
            }
            for (unsigned char i_3 = 3; i_3 < 21; i_3 += 2) 
            {
                arr_10 [i_0] = ((unsigned char) ((int) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (unsigned char)13)))));
                arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)190)) | (((/* implicit */int) ((signed char) var_0))))))));
                var_15 = (!(((/* implicit */_Bool) arr_8 [i_0] [i_0])));
                var_16 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1])))));
                arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) var_9)))));
            }
            for (int i_4 = 2; i_4 < 22; i_4 += 3) 
            {
                arr_15 [i_0] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_0]);
                var_17 *= ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)65)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0] [i_4]) : (((/* implicit */int) var_0))))) <= (6167343042985073417ULL))))));
                var_18 = (unsigned char)211;
                var_19 *= ((/* implicit */unsigned long long int) (-((+(((int) (_Bool)1))))));
            }
            arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_7 [i_0 + 1] [i_0 + 4] [i_0 + 2]) >= (((/* implicit */int) ((signed char) arr_1 [i_0])))))) >> (((unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (var_2))))));
        }
        for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            arr_20 [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) % (((/* implicit */int) ((_Bool) (-(arr_6 [i_0] [i_5] [i_0] [i_5])))))));
            /* LoopNest 2 */
            for (short i_6 = 4; i_6 < 23; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        arr_26 [i_0] = ((/* implicit */unsigned long long int) max((arr_0 [i_0 - 1]), (((/* implicit */short) arr_17 [i_0]))));
                        arr_27 [(unsigned char)18] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) ((unsigned char) var_2))) >= (((/* implicit */int) (!(arr_3 [i_0])))))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_8 [i_5 - 1] [i_6]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) arr_6 [i_0] [(unsigned char)0] [(short)1] [i_10]);
                            var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) arr_2 [i_9] [i_8])) : (var_4))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 4; i_12 < 21; i_12 += 1) 
            {
                {
                    arr_41 [i_0] [21ULL] [i_12] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 1451837975)) : (0ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_18 [i_0] [i_12]))))))));
                    var_23 = ((/* implicit */signed char) (+(11189585059316979618ULL)));
                }
            } 
        } 
        arr_42 [(short)20] [i_0] = ((/* implicit */short) ((int) (unsigned char)32));
        /* LoopSeq 2 */
        for (short i_13 = 3; i_13 < 22; i_13 += 4) 
        {
            arr_46 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
            arr_47 [i_0] = arr_29 [i_0] [i_13 - 2] [i_13 + 2] [i_13 + 2];
            var_24 = ((unsigned long long int) arr_8 [i_0] [i_13 + 2]);
            arr_48 [i_0] [16ULL] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (short)709))));
        }
        for (int i_14 = 1; i_14 < 22; i_14 += 3) 
        {
            arr_51 [i_0] = ((/* implicit */short) var_10);
            arr_52 [i_0 + 1] [i_0] [i_0] = max((var_5), (((/* implicit */unsigned long long int) var_10)));
        }
        var_26 = var_6;
    }
    for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 2) /* same iter space */
    {
        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_15] [i_15] [7]))))) >= (((((/* implicit */_Bool) arr_5 [i_15])) ? (((/* implicit */int) arr_23 [i_15] [i_15 + 4] [i_15] [12ULL])) : (((/* implicit */int) var_0))))))) % (((/* implicit */int) ((signed char) arr_17 [(unsigned char)4])))));
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((unsigned long long int) ((((((/* implicit */int) (short)-29179)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)138)) - (133)))))))));
    }
    for (unsigned long long int i_16 = 1; i_16 < 20; i_16 += 2) /* same iter space */
    {
        var_29 = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_35 [i_16] [i_16 + 3] [i_16 - 1] [i_16 + 4] [i_16 + 3]))))), ((unsigned char)128));
        /* LoopNest 3 */
        for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            for (int i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                for (signed char i_19 = 1; i_19 < 23; i_19 += 3) 
                {
                    {
                        arr_67 [i_16] [i_17] [i_19] = ((/* implicit */short) arr_17 [i_16]);
                        /* LoopSeq 2 */
                        for (signed char i_20 = 4; i_20 < 22; i_20 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) arr_53 [i_16] [i_17]);
                            var_31 = ((/* implicit */unsigned long long int) arr_25 [i_17]);
                            var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))) | (18446744073709551615ULL)));
                        }
                        for (int i_21 = 1; i_21 < 22; i_21 += 4) 
                        {
                            arr_74 [(unsigned char)11] [i_17] [(unsigned char)11] [i_16] [i_21] = ((/* implicit */int) ((unsigned long long int) ((unsigned char) var_3)));
                            var_33 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_35 [i_21] [i_19] [i_16] [i_16] [i_16]))));
                            arr_75 [i_16] [(unsigned char)3] = (-(max((arr_66 [i_19 + 1] [i_16 - 1] [i_21 + 1]), (arr_66 [i_19 - 1] [i_16 + 2] [i_21 + 2]))));
                        }
                        var_34 ^= max((1327233745), (-1814263338));
                        var_35 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (max((((18446744073709551615ULL) >> (((/* implicit */int) var_2)))), (((unsigned long long int) (short)32767))))));
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                } 
            } 
        } 
    }
    var_37 = ((unsigned char) var_6);
    var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (var_5)));
    var_39 = ((/* implicit */signed char) 699195620);
}
