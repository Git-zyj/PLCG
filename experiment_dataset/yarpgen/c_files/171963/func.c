/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171963
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) var_3))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (var_2)))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((594935924150585042ULL) - (594935924150585040ULL))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 - 1] [i_0]);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_12 = ((/* implicit */int) ((unsigned long long int) min((arr_1 [i_0 + 2] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 + 2]))));
            arr_7 [i_0] [i_1] = ((/* implicit */int) ((signed char) ((unsigned long long int) arr_5 [i_0] [i_1] [i_0 - 2])));
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (max((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_0])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_1 [(signed char)8] [i_1])))))) ? (max((max((var_1), (((/* implicit */int) var_6)))), (((int) var_7)))) : (((/* implicit */int) ((signed char) ((signed char) var_3))))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned char) min((min((max((((/* implicit */unsigned int) var_1)), (arr_0 [i_0]))), (((/* implicit */unsigned int) ((short) arr_4 [i_0]))))), (((/* implicit */unsigned int) ((int) arr_1 [i_0 + 1] [i_0 - 2])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 4; i_3 < 20; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)182))));
                        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) var_3))) < (((unsigned long long int) var_0)))))));
                        var_15 += ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_0)) ? (arr_1 [(unsigned char)8] [i_4]) : (((/* implicit */unsigned long long int) arr_11 [i_2])))));
                        var_16 *= ((/* implicit */signed char) (~(arr_14 [i_0 + 2])));
                    }
                } 
            } 
            arr_17 [i_2] [i_0 - 4] = ((/* implicit */short) arr_1 [i_0] [i_2]);
            arr_18 [i_0 - 1] [i_2] [i_2] = ((/* implicit */signed char) arr_15 [i_0] [(signed char)12] [(signed char)18] [i_0]);
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)0])) ? (var_3) : ((+(arr_13 [i_0 + 2] [i_2] [i_2])))));
        }
        for (int i_5 = 1; i_5 < 18; i_5 += 2) 
        {
            var_18 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_19 [i_0 - 3] [i_0 - 3] [i_5])), (var_7)))), (min((((unsigned int) var_6)), (((/* implicit */unsigned int) var_6))))));
            var_19 = ((/* implicit */short) arr_5 [i_0 - 1] [i_0] [i_0]);
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            arr_25 [(signed char)15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_23 [i_0 + 2] [i_6] [i_6]) >> (((arr_20 [2]) - (8048219169784713393ULL)))))) ? (((var_2) + (((/* implicit */unsigned long long int) var_10)))) : (((unsigned long long int) var_10))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_6] [i_0]) : (((/* implicit */unsigned long long int) arr_13 [i_0 - 2] [i_0 - 2] [i_6]))))) ? (((/* implicit */unsigned long long int) var_7)) : (var_2))))));
        }
        for (unsigned int i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            arr_28 [i_7] = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0]);
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        {
                            arr_38 [i_0] [i_8] [i_9] [i_7] = ((/* implicit */unsigned int) min((max((min((((/* implicit */unsigned long long int) arr_22 [i_0 + 1] [i_8] [i_0 + 1])), (var_4))), (((/* implicit */unsigned long long int) arr_16 [i_7 + 1] [i_0 - 4] [i_0 - 4])))), (var_4)));
                            arr_39 [i_10] [i_7] [i_8] [i_7] [i_0 + 1] = ((/* implicit */signed char) var_0);
                            var_21 = ((/* implicit */unsigned long long int) arr_21 [i_0 + 1] [i_0 + 1] [i_8]);
                            arr_40 [i_0 - 4] [i_7] [i_0 - 4] [i_0 - 4] [i_0] = ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
    {
        for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 2) 
        {
            {
                arr_47 [2LL] [(signed char)1] = ((/* implicit */short) var_4);
                arr_48 [i_11] [i_11] [i_12] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_5 [i_12 + 1] [i_12 - 1] [(signed char)9])))));
                arr_49 [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) var_7))) || (((/* implicit */_Bool) ((unsigned short) 4056033289153542875LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(var_5)))))) : (((((/* implicit */_Bool) arr_46 [i_12 + 1] [i_12 + 1])) ? (arr_46 [i_12 + 1] [i_12]) : (arr_46 [i_12 + 1] [i_12])))));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_14 = 1; i_14 < 10; i_14 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (min((var_5), (((((/* implicit */_Bool) arr_31 [i_14] [i_14 + 1] [i_14] [i_14] [i_12 - 1])) ? (var_5) : (arr_31 [i_14 + 1] [i_14 + 1] [i_12] [i_12] [i_12 - 1])))))));
                        arr_55 [i_11] [i_14] [i_13] [i_11] [i_14] = ((/* implicit */unsigned short) max((((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_1)) : (var_8)))), (((/* implicit */unsigned long long int) ((((unsigned int) var_3)) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_11] [i_13] [6LL])))))))))));
                        var_23 += ((/* implicit */unsigned int) ((long long int) ((long long int) (signed char)-32)));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_29 [i_11] [i_12 - 1] [i_13] [i_14 + 2])) : (var_5))) * (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_13])) ? (((/* implicit */long long int) arr_45 [i_11] [0ULL] [(unsigned char)5])) : (var_10))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        arr_58 [i_11] [2ULL] [i_13] [i_12] [i_12] [i_12] = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_13]))) : (arr_50 [i_11] [i_12] [9ULL] [i_15]))) <= (((unsigned long long int) arr_0 [i_11]))));
                        var_25 ^= ((/* implicit */signed char) ((long long int) var_8));
                        var_26 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_5));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_12 [i_12 - 1] [i_12 - 1] [i_12 - 1]) : (arr_12 [i_12 + 1] [i_12 - 1] [i_12 - 1])));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        for (signed char i_17 = 2; i_17 < 11; i_17 += 1) 
                        {
                            {
                                arr_65 [i_11] [i_11] [i_11] [6] [6] [i_11] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_50 [i_12] [(signed char)2] [i_16] [i_17]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_46 [i_11] [i_16])))) : (max((var_2), (var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_16])) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((int) var_8))))) : (((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned long long int) ((int) var_3))) : (max((arr_1 [i_11] [i_11]), (((/* implicit */unsigned long long int) arr_15 [i_12] [11U] [1] [1]))))))));
                                var_28 = ((((/* implicit */_Bool) max((arr_62 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17] [i_17]), (((/* implicit */unsigned int) arr_63 [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_17] [(signed char)0]))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_6)) >> (((arr_50 [i_11] [i_12] [i_13] [i_17 + 1]) - (867458688901316265ULL))))))) : (max((arr_23 [i_12] [i_12 - 1] [i_17 - 1]), (((/* implicit */unsigned int) var_0)))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (2286987495027855373ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_11] [i_13] [i_11])))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((int) ((_Bool) ((((/* implicit */_Bool) arr_62 [i_11] [(signed char)10] [i_13] [i_13] [(_Bool)1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_11] [i_12] [2LL] [i_13] [i_13]))))))))));
                }
                var_31 += ((/* implicit */unsigned short) ((unsigned long long int) (short)-21650));
            }
        } 
    } 
}
