/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106831
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
    var_12 = ((/* implicit */short) var_9);
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_14 = ((/* implicit */long long int) max((max((((unsigned int) arr_2 [i_0] [(unsigned short)15])), (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (arr_1 [i_1])))))), (((/* implicit */unsigned int) ((int) var_10)))));
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) min((((unsigned long long int) arr_5 [i_0] [i_1] [i_2])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [18LL] [18LL])) % (arr_1 [i_0]))))));
                arr_10 [i_0] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */unsigned short) max((((/* implicit */short) ((arr_5 [i_1] [i_1] [i_0]) <= (arr_5 [i_0] [i_1] [i_2])))), (var_10)));
            }
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                var_15 += ((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_0]);
                var_16 &= ((/* implicit */int) ((short) ((int) ((long long int) arr_3 [i_0] [i_1] [i_3]))));
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_15 [(unsigned short)22] [i_1] [i_4] = arr_3 [i_4] [i_4] [i_4];
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) (short)28817)) <= (((/* implicit */int) var_6)))))));
                var_18 = ((/* implicit */short) arr_5 [(unsigned short)12] [i_1] [i_1]);
            }
            for (unsigned char i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                var_19 = ((/* implicit */unsigned int) ((short) ((short) arr_4 [i_0] [i_0])));
                arr_18 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((int) arr_17 [i_0] [i_0] [i_0] [i_0]));
                arr_19 [i_0] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_5] [i_5 + 1] [i_5] [i_5])) < (((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_17 [i_5] [i_5 + 1] [i_5] [i_5])) - (21509)))))));
                var_20 = ((/* implicit */unsigned short) arr_4 [0] [i_1]);
                arr_20 [i_1] [15U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_0]))) || (((/* implicit */_Bool) ((int) ((unsigned char) arr_5 [i_0] [i_0] [i_0]))))));
            }
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_0 [i_0] [i_6]))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_23 [i_0]))));
            var_23 ^= (unsigned char)54;
        }
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            var_24 = ((/* implicit */long long int) arr_27 [i_0] [i_0]);
            arr_28 [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) arr_5 [i_0] [9] [i_0]));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                var_25 = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) min((((unsigned long long int) arr_32 [i_8])), (((/* implicit */unsigned long long int) -9223372036854775806LL)))))));
                var_27 += ((/* implicit */unsigned char) ((short) arr_2 [i_8] [i_8]));
            }
            for (unsigned char i_10 = 2; i_10 < 19; i_10 += 4) 
            {
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (short)7455))));
                var_29 = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_8] [i_10]);
                var_30 ^= ((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (arr_12 [i_0] [i_0] [i_0] [(unsigned char)12])));
                var_31 = ((/* implicit */short) ((_Bool) ((arr_14 [i_10 - 1] [i_10] [i_10] [i_10]) + (arr_14 [i_10 + 4] [i_10] [i_10 - 2] [i_10]))));
                var_32 ^= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)212)), (max((arr_13 [i_0] [i_8] [i_10 - 2]), (arr_13 [i_0] [i_0] [i_10 - 1])))));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_11 = 3; i_11 < 20; i_11 += 1) 
            {
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((unsigned int) arr_8 [i_11 + 3])))));
                arr_42 [i_11] [i_11 - 2] [i_11 + 1] = ((/* implicit */unsigned int) var_7);
            }
            for (int i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                var_34 = ((/* implicit */int) arr_32 [i_12]);
                var_35 = arr_4 [i_8] [i_12];
                arr_45 [i_12] [i_0] &= ((/* implicit */short) arr_38 [i_0] [i_0] [i_0]);
                var_36 = ((/* implicit */unsigned char) arr_6 [3U] [i_8] [i_12] [i_12]);
            }
            for (long long int i_13 = 2; i_13 < 22; i_13 += 2) 
            {
                arr_50 [(unsigned char)12] &= ((/* implicit */short) var_8);
                arr_51 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((short) arr_17 [i_0] [i_0] [i_0] [10])))) - (((/* implicit */int) min((arr_7 [i_0] [i_8] [i_0]), (((/* implicit */unsigned char) arr_2 [i_0] [15ULL])))))));
                var_37 = ((/* implicit */unsigned short) max((min((arr_39 [15] [i_13 - 2]), (arr_39 [i_13 + 1] [i_13 + 1]))), (arr_39 [(short)6] [i_13 - 1])));
            }
            arr_52 [i_0] [i_0] = ((/* implicit */unsigned short) max((min((var_4), (((/* implicit */unsigned int) arr_29 [i_0])))), (((/* implicit */unsigned int) max((min(((unsigned char)201), ((unsigned char)55))), (min(((unsigned char)54), (var_11))))))));
        }
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((unsigned char) arr_25 [12LL])))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_14 = 1; i_14 < 23; i_14 += 2) 
    {
        arr_55 [i_14 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_53 [i_14])) % (((/* implicit */int) arr_53 [i_14 - 1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_15 = 1; i_15 < 23; i_15 += 1) 
        {
            arr_59 [i_14] [i_14 + 1] [i_14 + 1] = ((/* implicit */int) arr_57 [i_14 - 1] [i_14] [i_14 - 1]);
            arr_60 [i_15] [i_14] [i_14] = ((/* implicit */int) ((unsigned char) arr_56 [i_14]));
            var_39 |= arr_57 [17] [i_15] [(short)14];
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 23; i_16 += 2) 
            {
                for (unsigned char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_18 = 0; i_18 < 24; i_18 += 1) 
                        {
                            arr_67 [i_14] [i_14 + 1] [21] [(_Bool)0] [i_14] [i_14 + 1] &= ((/* implicit */unsigned char) arr_53 [i_15]);
                            var_40 = ((/* implicit */long long int) max((var_40), (arr_63 [i_15 - 1] [i_15 - 1])));
                        }
                        for (long long int i_19 = 0; i_19 < 24; i_19 += 2) 
                        {
                            var_41 = ((/* implicit */unsigned char) arr_64 [i_14 + 1] [i_14]);
                            var_42 = ((/* implicit */short) arr_62 [i_14 - 1] [i_16] [i_16] [(unsigned char)0]);
                            arr_72 [(unsigned short)3] [i_14] [i_15] [(unsigned short)3] [i_16] [(unsigned short)1] [i_19] = ((/* implicit */unsigned long long int) (unsigned char)98);
                            arr_73 [i_14] [i_14] [(short)7] [i_14] [(short)7] [i_14] = ((/* implicit */short) arr_62 [i_14] [i_15] [i_15] [i_17]);
                            var_43 = arr_53 [i_15];
                        }
                        for (unsigned short i_20 = 1; i_20 < 22; i_20 += 4) 
                        {
                            arr_77 [i_14] [i_17] [i_14] [i_14] [i_14] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_61 [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1])) + (((/* implicit */int) arr_61 [i_14] [i_14 - 1] [i_16] [i_16]))));
                            var_44 = ((/* implicit */_Bool) ((unsigned int) arr_56 [i_14 - 1]));
                            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((int) arr_68 [i_17] [i_20 + 1] [i_17] [i_20])))));
                            arr_78 [6ULL] [i_20] [i_16 + 1] [i_20] [i_14] = ((/* implicit */_Bool) var_11);
                            arr_79 [i_20] = ((/* implicit */unsigned int) var_7);
                        }
                        arr_80 [i_14] [i_15 - 1] [i_16] [i_17] [i_17] = ((/* implicit */long long int) arr_71 [i_17] [i_17] [0] [i_15] [i_15] [1LL]);
                        var_46 = ((/* implicit */unsigned char) arr_62 [i_14] [i_14] [i_16] [i_17]);
                    }
                } 
            } 
            arr_81 [i_15] [i_14] = ((/* implicit */_Bool) arr_74 [i_15] [(unsigned char)16] [(unsigned char)16] [(unsigned char)16] [i_14 + 1] [i_14]);
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_21 = 2; i_21 < 13; i_21 += 4) 
    {
        var_47 = ((/* implicit */short) arr_12 [i_21 - 2] [i_21 - 2] [i_21 - 2] [i_21]);
        var_48 |= ((short) arr_58 [i_21] [i_21 + 2]);
    }
    for (short i_22 = 2; i_22 < 12; i_22 += 1) 
    {
        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) arr_21 [i_22 - 1] [i_22 - 1] [i_22]))));
        arr_87 [i_22 + 2] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_22] [i_22] [i_22]))) <= (max((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)193)), (arr_26 [i_22] [i_22])))), (arr_71 [i_22 + 1] [i_22] [i_22 + 2] [i_22] [i_22] [i_22])))));
    }
}
