/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154246
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
    var_17 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) (~(((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) 693040870U);
                    arr_8 [i_0] [i_2] [(short)0] = max((((/* implicit */unsigned long long int) var_10)), (5814043292394164446ULL));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) (-(9962141292527233840ULL)));
        /* LoopNest 2 */
        for (long long int i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */int) ((((/* implicit */int) arr_10 [i_3])) > (arr_7 [i_5] [i_4 + 1] [i_3 + 1] [i_3])));
                    var_22 &= (~(arr_7 [i_3 + 1] [i_3 + 1] [i_4 + 1] [i_5 - 1]));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15431935581120493060ULL)) ? (((/* implicit */long long int) var_1)) : (252201579132747776LL)))) * (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) -30120770)))))))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-30120770) : (-30120770)))) ? (((/* implicit */int) ((signed char) (short)-7264))) : (((((/* implicit */_Bool) 191405928)) ? (((/* implicit */int) var_3)) : (-442398429)))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) ((191405928) < (((/* implicit */int) (signed char)55)))))));
        }
        for (int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 11; i_9 += 3) 
                {
                    for (long long int i_10 = 2; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 1707039332U)) ? (((/* implicit */int) (signed char)116)) : (-442398429))));
                            arr_31 [i_3] [i_7] [4LL] [i_9] [i_10] = ((/* implicit */unsigned short) arr_23 [i_3] [6ULL] [i_9] [(short)6]);
                            var_27 = ((/* implicit */int) max((var_27), ((-(((/* implicit */int) var_3))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2134483106)) ? (arr_17 [i_3] [i_3]) : (var_11)))) > (var_12)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_11])) ? (arr_11 [i_11]) : (arr_22 [i_3 - 1] [i_3 + 1] [i_11] [i_11])));
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        arr_39 [i_11] [i_7] [i_8] [i_7] [i_12] [i_12] = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_22 [i_3 + 1] [i_3] [i_3 - 1] [i_3]));
                        var_30 = ((/* implicit */_Bool) ((unsigned char) arr_19 [i_3 - 1] [i_3 + 1]));
                        arr_40 [6] [i_12] [6ULL] [i_11] [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1958937791)) ? (((/* implicit */int) ((arr_23 [i_3] [i_3] [i_8] [i_11]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) ((arr_11 [i_12]) == (arr_18 [i_3] [i_3] [i_3]))))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 11; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) -442398429)) ? (((/* implicit */long long int) arr_12 [i_11] [(_Bool)1])) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        var_32 = ((/* implicit */unsigned char) (~(((arr_42 [i_7] [i_7] [i_3]) | (arr_34 [i_3] [i_7] [i_11])))));
                        var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_8] [i_3 + 1] [(short)6]))));
                    }
                    for (signed char i_14 = 2; i_14 < 12; i_14 += 4) 
                    {
                        var_34 += ((_Bool) -8906343531644933826LL);
                        var_35 = ((/* implicit */_Bool) (~(6809998607912111363ULL)));
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (-(arr_22 [i_14 - 1] [i_14 - 1] [i_8] [i_3 - 1]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                    {
                        var_37 &= ((/* implicit */short) (-(((/* implicit */int) (short)-25463))));
                        var_38 = ((/* implicit */unsigned char) ((long long int) arr_19 [i_11] [(_Bool)1]));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : ((-(((/* implicit */int) (_Bool)1))))));
                        var_40 = ((/* implicit */unsigned short) ((((arr_27 [i_15] [(short)3] [i_8] [i_7] [i_7] [i_3 + 1]) << (((((/* implicit */int) (short)7264)) - (7239))))) >> (((((/* implicit */int) arr_15 [i_3 - 1] [i_3 + 1] [i_3 - 1])) + (24923)))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_29 [i_3] [i_7] [i_16] [i_11] [(short)5])))) & (var_11)));
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (short)25736)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9709)))));
                        var_43 = ((/* implicit */unsigned int) ((short) var_14));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 1; i_17 < 12; i_17 += 4) 
                    {
                        var_44 = ((/* implicit */_Bool) arr_50 [i_17] [i_11] [i_8] [8ULL] [i_3] [i_3]);
                        arr_56 [i_17] [i_7] [1LL] [i_7] [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-27513)) < (var_9))))) == (var_0));
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)116))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        arr_59 [i_3] [i_7] [i_11] [i_18] |= ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) 30120772)))));
                        var_46 *= ((var_3) ? (arr_0 [i_3 - 1]) : (arr_0 [i_3 - 1]));
                        var_47 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) var_1)))));
                        var_48 &= ((/* implicit */signed char) arr_54 [(short)12]);
                        var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) (~(((((/* implicit */_Bool) 1591497669235006268ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (16855246404474545348ULL))))))));
                    }
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((((/* implicit */int) arr_43 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [11])) + (2147483647))) << (((arr_17 [i_3] [i_3 + 1]) - (3457914750U))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 2; i_20 < 10; i_20 += 2) 
                    {
                        arr_66 [i_3 + 1] [i_7] [i_8] [8U] [i_20 - 2] = ((/* implicit */_Bool) var_0);
                        arr_67 [i_8] [i_19] = ((/* implicit */short) ((long long int) arr_26 [i_3] [i_3] [i_3 + 1]));
                    }
                    var_51 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-25072))));
                    arr_68 [(short)8] = ((/* implicit */unsigned int) (signed char)51);
                }
            }
            for (short i_21 = 0; i_21 < 13; i_21 += 4) 
            {
                var_52 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1591497669235006268ULL)) || (((((/* implicit */_Bool) arr_25 [i_3 + 1] [i_3 - 1] [4ULL] [i_7] [4ULL] [(short)5])) && (((/* implicit */_Bool) arr_54 [i_7]))))));
                arr_73 [(short)5] [i_21] = ((/* implicit */short) ((((/* implicit */long long int) ((var_5) >> (((((/* implicit */int) arr_24 [(_Bool)1])) - (4886)))))) - (((var_2) & (var_2)))));
                var_53 = var_9;
            }
            var_54 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_37 [i_3 + 1] [i_7] [i_7])) + (2147483647))) >> (((-1958937792) + (1958937802)))));
        }
    }
    var_55 = ((/* implicit */long long int) (short)17768);
}
