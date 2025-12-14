/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112672
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
    var_19 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            arr_6 [i_1 - 3] = ((/* implicit */unsigned char) (~(arr_5 [i_1 - 2])));
            arr_7 [i_1 - 4] [(unsigned short)10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_3 [17] [i_1] [i_0]))) >= (((/* implicit */int) ((unsigned char) var_4)))));
            var_20 = ((/* implicit */signed char) var_8);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                arr_13 [i_2] [13U] [i_2] [i_2] = arr_3 [i_0] [i_2] [i_2];
                arr_14 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) min((((/* implicit */int) ((short) arr_10 [i_0]))), (max((arr_4 [i_0]), (arr_5 [i_2])))));
            }
            for (unsigned int i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1715492389)) || (((/* implicit */_Bool) -1937012287))));
                var_22 = ((/* implicit */unsigned short) arr_9 [i_0] [18LL] [18LL]);
                arr_17 [i_4] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) arr_15 [i_2] [i_2] [i_4 - 2] [i_2])))));
                arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (4294967295U))), (((((/* implicit */_Bool) var_10)) ? (arr_8 [i_0] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))), (min((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) * (arr_16 [i_0] [i_2] [i_2]))), (((/* implicit */long long int) arr_3 [(unsigned short)19] [i_2] [(unsigned char)2]))))));
            }
            var_23 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_0) <= (var_5)))), (min((((/* implicit */long long int) arr_9 [(signed char)6] [(signed char)6] [(signed char)6])), (arr_12 [i_0] [i_0] [(unsigned char)16] [i_2])))))) ^ (var_7)));
            var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_11 [i_0] [7U]), (((/* implicit */unsigned long long int) var_18))))) && (((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (var_5))))))) >= (((/* implicit */int) ((arr_4 [11U]) == (arr_9 [i_0] [i_2] [i_2]))))));
        }
        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            arr_21 [(short)19] [(short)19] = ((/* implicit */signed char) (_Bool)0);
            arr_22 [6] [i_0] = ((/* implicit */long long int) max((1U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_0])) ? (arr_19 [(short)17] [i_5]) : (((/* implicit */int) arr_1 [(unsigned char)4]))))) && (((/* implicit */_Bool) arr_20 [i_0] [i_5] [i_5])))))));
            var_26 |= ((/* implicit */unsigned int) (~(((long long int) ((((/* implicit */int) var_13)) << (((/* implicit */int) (_Bool)1)))))));
            arr_23 [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) arr_9 [i_0] [13] [i_5])) % (max((var_2), (((/* implicit */long long int) var_4)))))) + (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_5]) < (((/* implicit */int) max((var_6), (((/* implicit */short) var_16)))))))))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            arr_26 [i_6] [i_0] [(unsigned char)11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_6]))));
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) (!((_Bool)1)));
                            arr_34 [i_8] [i_6] [i_8] [i_6] [i_8] [i_8] = ((/* implicit */signed char) arr_27 [i_6] [i_7]);
                        }
                    } 
                } 
            } 
        }
    }
    for (long long int i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) arr_5 [i_10]);
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                for (unsigned int i_13 = 3; i_13 < 15; i_13 += 3) 
                {
                    {
                        arr_46 [i_10] [i_11] [(_Bool)1] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) == (arr_31 [i_10] [10LL] [i_12] [(unsigned short)13])));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_0)) + (((((/* implicit */long long int) arr_44 [10U] [10U] [i_12] [6ULL])) % (arr_20 [i_12] [i_11] [(_Bool)1])))));
                        var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_45 [i_12 + 1] [i_12 + 1] [i_13] [i_13 - 1]) > (arr_45 [i_12 + 1] [i_12 + 1] [i_13 + 3] [i_13 - 1]))))));
                    }
                } 
            } 
        } 
        var_31 = ((arr_45 [i_10] [i_10] [0U] [i_10]) % (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9)) << (((((((/* implicit */int) arr_30 [i_10] [(_Bool)1] [i_10] [i_10])) + (93))) - (6)))))));
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_51 [i_14] [i_15] [i_14] = ((/* implicit */unsigned short) ((arr_15 [i_14] [i_15] [i_14] [i_15]) ? (((/* implicit */int) arr_15 [(_Bool)1] [i_15] [i_15] [i_15])) : (((/* implicit */int) var_11))));
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                var_32 = ((/* implicit */long long int) arr_37 [i_14] [i_16]);
                var_33 = ((/* implicit */_Bool) ((unsigned int) arr_24 [i_16]));
                var_34 = ((/* implicit */signed char) arr_49 [i_15]);
                var_35 = ((/* implicit */signed char) ((arr_42 [i_16] [16] [4ULL] [i_14]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_36 = ((/* implicit */unsigned long long int) arr_54 [i_15]);
            }
            var_37 |= ((((/* implicit */_Bool) arr_29 [i_14] [i_15])) ? (arr_29 [i_14] [i_15]) : (arr_29 [i_14] [i_14]));
            arr_55 [i_15] = ((((/* implicit */int) arr_53 [i_14] [i_15] [i_15])) != (((/* implicit */int) var_13)));
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
            {
                for (int i_18 = 1; i_18 < 15; i_18 += 1) 
                {
                    {
                        arr_60 [i_15] [i_17] [i_15] [i_15] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_35 [i_17])) - (101))))));
                        var_38 = ((/* implicit */long long int) ((arr_44 [i_18 + 3] [i_18 + 3] [i_18 - 1] [i_18]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    }
                } 
            } 
        }
        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            arr_63 [i_14] [i_19] = ((/* implicit */unsigned int) (_Bool)0);
            arr_64 [i_19] [i_19] = ((/* implicit */short) var_9);
            arr_65 [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [(_Bool)1] [i_19] [i_14] [i_14])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_19] [(_Bool)1] [i_14] [i_14] [i_14])) || (((/* implicit */_Bool) arr_58 [i_14] [i_19] [i_19] [i_14]))))) : (((/* implicit */int) ((((/* implicit */int) arr_33 [i_14] [i_14])) != (((/* implicit */int) arr_36 [i_19])))))));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_39 = ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_20] [i_14])) % (((/* implicit */int) var_15))));
            arr_69 [(signed char)6] = ((/* implicit */short) arr_31 [(_Bool)1] [i_14] [i_14] [i_14]);
        }
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_14] [(unsigned char)17] [i_14])) ? (((/* implicit */int) arr_32 [(_Bool)1] [(_Bool)1] [(short)4] [(short)4] [(_Bool)1])) : (((/* implicit */int) arr_35 [i_14]))));
        /* LoopSeq 1 */
        for (unsigned short i_21 = 2; i_21 < 16; i_21 += 4) 
        {
            var_41 = ((/* implicit */short) ((4294967285U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_42 = ((/* implicit */int) var_18);
        }
        arr_72 [i_14] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_14]))));
        /* LoopSeq 4 */
        for (long long int i_22 = 4; i_22 < 15; i_22 += 2) 
        {
            var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((_Bool) var_16)))));
            var_44 += ((/* implicit */_Bool) var_4);
            var_45 = ((/* implicit */short) var_14);
        }
        for (unsigned short i_23 = 0; i_23 < 18; i_23 += 4) 
        {
            var_46 = ((/* implicit */_Bool) var_10);
            var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) var_1))));
            var_48 = ((/* implicit */_Bool) var_6);
            /* LoopSeq 1 */
            for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 4) 
            {
                arr_82 [i_23] [i_23] [i_24] [i_14] = ((/* implicit */unsigned long long int) var_17);
                arr_83 [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((arr_11 [i_14] [i_14]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_58 [i_23] [i_23] [i_23] [i_23])) ^ (((/* implicit */int) var_16)))))));
            }
        }
        for (unsigned char i_25 = 0; i_25 < 18; i_25 += 4) 
        {
            var_49 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) var_9)))));
            var_50 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_80 [i_14] [i_25] [i_14])) > (((((/* implicit */int) arr_78 [i_14] [i_25] [2LL])) % (((/* implicit */int) (_Bool)1))))));
            arr_86 [i_14] [i_14] [i_25] = ((/* implicit */signed char) var_0);
            arr_87 [i_14] = ((/* implicit */signed char) ((unsigned char) arr_52 [i_25]));
        }
        for (short i_26 = 0; i_26 < 18; i_26 += 4) 
        {
            var_51 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [2ULL] [i_14] [i_26]))) % (arr_25 [i_14])));
            var_52 = ((/* implicit */unsigned int) var_6);
        }
    }
}
