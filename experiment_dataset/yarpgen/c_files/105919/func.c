/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105919
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) var_1);
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) -1123600994)) && (((/* implicit */_Bool) var_4)));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (((((/* implicit */int) arr_4 [i_0])) + (-1123600998)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))) : (((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (9187343239835811840ULL))) - (((/* implicit */unsigned long long int) ((1123600994) / (((/* implicit */int) (_Bool)1)))))))));
            arr_10 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_2]);
            arr_11 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */short) (unsigned char)120)), ((short)-32766)));
        }
        for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 4) 
        {
            arr_14 [i_0] [(unsigned char)0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */int) (unsigned char)2))))) + (min((max((((/* implicit */unsigned long long int) var_1)), (var_11))), (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_2 [i_0] [i_0] [i_3])))))));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_20 = ((/* implicit */signed char) arr_3 [i_0] [i_3]);
                    var_21 = arr_4 [i_5];
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 4; i_6 < 12; i_6 += 3) 
                    {
                        arr_23 [i_0] [i_0] [i_4] [(_Bool)1] [i_6] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((-(arr_13 [i_4] [i_5]))))));
                        var_22 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_3] [5LL])), (arr_1 [i_4])));
                        var_23 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_13 [i_0] [i_6])) && (((/* implicit */_Bool) arr_19 [i_0] [i_3] [i_0] [i_3])))) ? (min((arr_20 [i_0] [i_3] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)10)), (arr_22 [i_0] [i_3] [i_6 - 1] [i_5] [i_6 - 1] [i_6 + 2])))))));
                    }
                }
                for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    arr_26 [i_0] = ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)8)));
                    var_24 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_7 [i_0])) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 3; i_8 < 11; i_8 += 3) 
                    {
                        arr_29 [i_0] [i_3 - 2] [i_4] = ((/* implicit */unsigned long long int) var_1);
                        arr_30 [i_0] [i_3] [i_4] [i_0] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (unsigned char)3)))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) arr_18 [i_0]);
                        arr_35 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_22 [i_0] [i_3 + 4] [i_3 - 4] [9] [i_3 - 3] [i_7 + 2])) - (((/* implicit */int) var_14)))) | (-1123600994)));
                    }
                    for (int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0] [i_0])) / (((/* implicit */int) arr_21 [i_3] [i_0]))))) - (((((/* implicit */long long int) ((/* implicit */int) (signed char)-111))) - (arr_13 [i_0] [i_4])))));
                        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_4 [i_10])) : (((/* implicit */int) ((((/* implicit */_Bool) min((177885703605362843ULL), (arr_20 [i_0] [i_4] [i_7] [i_10])))) && (((/* implicit */_Bool) arr_31 [i_4] [i_7 + 1] [i_10] [i_10] [i_10])))))));
                    }
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((var_17), (((/* implicit */int) var_10)))), (arr_17 [i_0] [i_4] [i_7 - 1] [i_11])))) ? (((/* implicit */long long int) arr_7 [i_0])) : (max((arr_37 [i_7 + 1] [i_3 + 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))))));
                        var_29 = ((/* implicit */unsigned long long int) ((int) var_16));
                    }
                    arr_43 [i_0] [i_3 - 1] [i_4] [i_7 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)6171)) ^ (0))) + ((~(((/* implicit */int) arr_34 [i_0] [i_3 + 3] [i_4] [11ULL] [i_7 + 2] [i_0])))))))));
                }
                for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */int) arr_4 [i_3]);
                    arr_48 [i_0] [7LL] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_40 [i_0] [i_3 + 4] [(short)7] [i_4] [i_12] [i_12 + 1]);
                }
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_3] [i_0] [i_3] [i_3] [i_4])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_0] [i_3] [i_4]))))) : (((((/* implicit */_Bool) (unsigned char)72)) ? (18268858370104188773ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))))))))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_52 [i_0] [1ULL] [i_3 - 4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) -886256156))), (min((arr_36 [(unsigned char)2] [i_3 - 3]), (((/* implicit */int) (unsigned char)30))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_17))))), (((((/* implicit */_Bool) (unsigned char)240)) ? (15) : (((/* implicit */int) (unsigned char)242))))))) : (((unsigned long long int) max((arr_50 [i_3] [i_3] [i_13]), (((/* implicit */long long int) arr_3 [i_0] [i_13])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_3] [i_0]))) & (arr_20 [i_0] [i_3 + 3] [i_3 - 3] [i_3]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                    arr_55 [i_0] [i_0] = ((/* implicit */long long int) arr_34 [i_0] [i_0] [i_3 + 4] [i_13] [i_13] [i_0]);
                    arr_56 [i_0] [i_3] [i_13] [i_14] = ((signed char) (signed char)-111);
                }
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    arr_60 [i_0] [(signed char)11] [i_0] [3ULL] = ((/* implicit */unsigned long long int) min(((-(arr_31 [i_0] [i_3 + 4] [i_13] [i_3 + 4] [i_15]))), (((arr_40 [i_0] [i_3 + 1] [i_0] [i_0] [(unsigned char)6] [i_15]) ^ (((/* implicit */long long int) var_17))))));
                    var_33 ^= ((/* implicit */_Bool) ((max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)13))))), (min((((/* implicit */long long int) var_13)), (arr_31 [i_3] [i_3] [i_13] [i_15] [i_3]))))) & (2027861415975943199LL)));
                }
            }
            for (unsigned short i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                var_34 = ((/* implicit */int) ((var_11) ^ (((unsigned long long int) arr_19 [i_3 - 1] [i_3] [i_0] [i_0]))));
                var_35 *= ((unsigned char) (signed char)-114);
            }
            var_36 = ((/* implicit */signed char) ((arr_57 [i_0] [i_3] [i_0] [i_3]) >= (((/* implicit */unsigned long long int) max(((~(arr_33 [i_0] [i_0] [i_0] [i_3 - 1] [i_3]))), (((long long int) arr_44 [i_0] [i_0] [i_0] [i_3 - 4])))))));
            var_37 = ((/* implicit */unsigned long long int) arr_39 [i_0] [i_0] [i_3 + 3] [i_0] [i_3 - 4] [i_3 - 3]);
        }
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 14; i_17 += 4) 
        {
            var_38 = ((/* implicit */unsigned short) ((unsigned char) arr_64 [i_0] [i_17]));
            arr_65 [i_0] [5LL] [i_0] = ((/* implicit */unsigned short) arr_40 [i_0] [i_17] [i_17] [i_17] [i_17] [i_17]);
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (18268858370104188764ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
            var_40 -= ((/* implicit */int) var_9);
        }
        var_41 = ((/* implicit */unsigned long long int) ((unsigned char) ((((long long int) var_8)) - (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)15), ((unsigned char)248))))))));
    }
    var_42 = ((/* implicit */signed char) var_8);
    var_43 ^= ((/* implicit */int) ((var_18) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)60911)) << (((/* implicit */int) var_0))))), (max((((/* implicit */unsigned long long int) var_18)), (var_11))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16)))))));
}
