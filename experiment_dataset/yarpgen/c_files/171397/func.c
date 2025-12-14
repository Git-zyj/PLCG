/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171397
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
    var_16 = max((4294967295U), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))));
    var_17 -= ((/* implicit */signed char) max((var_14), (((/* implicit */unsigned int) var_11))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1]))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) min(((signed char)7), ((signed char)-7)))) + (2147483647))) >> (((-6806708330909065428LL) + (6806708330909065452LL)))))) ? (min((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 - 1])), (((var_4) >> (((var_2) - (3185640839883392787LL))))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)91)))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)111))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) var_0)) : (20LL))))));
        var_18 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) min((((((/* implicit */int) (signed char)5)) ^ (((/* implicit */int) (signed char)50)))), ((~(((/* implicit */int) var_8))))))) : (var_2));
    }
    for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        var_19 = ((/* implicit */signed char) var_12);
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 5882720697115588372LL)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)111))))));
        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (arr_5 [i_1 - 2] [i_1 - 2]))))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            var_21 -= ((/* implicit */long long int) ((signed char) var_15));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                var_22 &= ((/* implicit */long long int) ((((/* implicit */long long int) arr_5 [i_2] [i_2])) != (((var_13) | (arr_13 [i_2] [i_2])))));
                var_23 += ((/* implicit */signed char) (+(((((((/* implicit */int) (signed char)-111)) + (2147483647))) >> (((var_0) - (58323093U)))))));
            }
            for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                arr_19 [i_3] [i_2] [i_5] = ((((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_13 [i_2] [i_3]) : (arr_15 [i_2] [i_2] [i_2]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 50331648U)) ? (arr_16 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_5]))));
                arr_20 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (21LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2])))))) ? (((/* implicit */long long int) arr_17 [i_2] [i_2] [i_3] [i_5])) : (arr_13 [i_3] [i_5])));
                var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_5])))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_5] [i_2])) ? (arr_18 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2]))))))));
            }
        }
        for (signed char i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            var_27 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : (var_13)))) ? (((((/* implicit */_Bool) 140737488355072LL)) ? (-8312115469230938445LL) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((var_7) > (((/* implicit */long long int) 3714894380U)))))))), ((~(arr_6 [i_6])))));
            var_28 = ((/* implicit */long long int) ((max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-119))))), (((arr_15 [i_2] [i_6] [i_6]) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775799LL))) + (18LL))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_6] [i_2])) == (((/* implicit */int) ((var_15) > (arr_21 [i_2] [i_6]))))))))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            arr_26 [i_7] = ((/* implicit */signed char) (-(arr_24 [i_7])));
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_7] [i_7])) ? (4294967271U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_7])))));
            arr_27 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_21 [i_7] [i_7]))) == ((~(((/* implicit */int) arr_14 [i_2]))))));
        }
        /* vectorizable */
        for (long long int i_8 = 3; i_8 < 15; i_8 += 2) 
        {
            var_30 = ((/* implicit */signed char) ((1723939857U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_8 + 1])))));
            arr_30 [i_2] [i_2] = ((/* implicit */long long int) (signed char)-56);
        }
        arr_31 [i_2] [i_2] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) ((arr_5 [i_2] [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))))), (((((/* implicit */long long int) arr_29 [i_2])) | (8948666491330346145LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -8948666491330346145LL)))))));
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    {
                        var_31 = ((/* implicit */signed char) ((long long int) (~(6092956917011212817LL))));
                        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) arr_14 [i_2])))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_33 = arr_40 [i_12];
        arr_43 [i_12] &= ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) 6314940088876258552LL))))))));
        arr_44 [i_12] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
        var_34 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_42 [i_12] [i_12])))));
    }
    /* LoopNest 2 */
    for (signed char i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    for (unsigned int i_16 = 2; i_16 < 11; i_16 += 2) 
                    {
                        for (long long int i_17 = 0; i_17 < 13; i_17 += 4) 
                        {
                            {
                                arr_59 [i_13] [i_13] [i_13] [i_16] [i_17] = ((long long int) arr_23 [i_13] [i_13]);
                                arr_60 [i_13] [i_13] [i_13] [i_13] = var_4;
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
                        {
                            arr_68 [i_13] [i_13] [i_14] [i_18] [i_19] [i_14] [i_20] = ((long long int) arr_13 [i_13] [i_13]);
                            var_35 = ((/* implicit */long long int) ((signed char) (signed char)0));
                        }
                        for (long long int i_21 = 0; i_21 < 13; i_21 += 3) 
                        {
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) var_8))));
                            var_37 = ((/* implicit */signed char) 65535U);
                        }
                        for (long long int i_22 = 1; i_22 < 12; i_22 += 2) 
                        {
                            var_38 ^= ((((/* implicit */_Bool) 34LL)) ? (((20LL) % (arr_50 [i_13]))) : (var_4));
                            var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                        }
                        for (unsigned int i_23 = 0; i_23 < 13; i_23 += 4) 
                        {
                            arr_76 [i_19] [i_19] [i_19] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
                            var_40 = ((/* implicit */long long int) ((signed char) arr_37 [i_13] [i_13] [i_14] [i_18] [i_19] [i_23]));
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) (signed char)-81))) / (((long long int) var_6))));
                            arr_77 [i_19] = (-(arr_62 [i_13] [i_23]));
                        }
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_57 [i_13] [i_13] [i_13] [i_13]) : (arr_50 [i_13]))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_24 = 1; i_24 < 10; i_24 += 2) 
                    {
                        arr_80 [i_24] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-10)) + (2147483647))) >> (((((/* implicit */int) ((signed char) (signed char)-4))) + (8)))));
                        var_43 = ((/* implicit */signed char) ((arr_72 [i_24 + 2] [i_24 + 2] [i_24 + 3] [i_24] [i_24 - 1]) - (arr_72 [i_24 + 2] [i_24] [i_24 + 3] [i_24] [i_24 - 1])));
                        arr_81 [i_13] [i_24] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-60))));
                        arr_82 [i_13] [i_14] [i_13] [i_24] = ((/* implicit */long long int) ((((long long int) arr_37 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])) > (((((/* implicit */_Bool) 1893950155U)) ? (arr_6 [i_13]) : (((/* implicit */long long int) arr_16 [i_24]))))));
                        arr_83 [i_13] [i_24] [i_24] [i_24] = ((/* implicit */long long int) 1893950157U);
                    }
                    for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
                    {
                        arr_87 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_25]))) * (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0)))));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) -8869398840899042865LL))));
                        arr_88 [i_13] [i_13] [i_13] [i_13] = ((((((/* implicit */long long int) var_3)) <= (var_7))) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)109))) : (var_15))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)118))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_26 = 0; i_26 < 13; i_26 += 3) 
                {
                    arr_91 [i_13] &= ((/* implicit */long long int) ((unsigned int) arr_45 [i_13]));
                    var_45 = ((/* implicit */signed char) ((long long int) arr_62 [i_13] [i_14]));
                }
                arr_92 [i_13] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_46 [i_14])), (arr_35 [i_13] [i_13] [i_13] [i_13])))) ? (((((/* implicit */_Bool) arr_52 [i_13] [i_13])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_13] [i_13] [i_13] [i_14] [i_14] [i_14]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (arr_49 [i_14] [i_14] [i_13]))) >> (((arr_69 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) - (2748055619U)))))));
            }
        } 
    } 
}
