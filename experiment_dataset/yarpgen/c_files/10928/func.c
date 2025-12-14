/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10928
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) var_8);
                    var_15 = ((/* implicit */short) (~(((/* implicit */int) (signed char)61))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0 + 1] [i_0] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 2] [(short)11] [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_3])))))) ? (arr_4 [i_2 + 1] [i_2 + 1] [i_1]) : (arr_4 [(signed char)11] [i_1] [i_2]));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 - 1] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_1] [i_1]))) : (arr_4 [i_2 + 1] [i_2 + 1] [i_0 - 3])));
                    }
                    for (short i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        var_17 = arr_5 [i_0 + 4] [i_2] [(signed char)2];
                        arr_18 [i_0] = ((/* implicit */signed char) var_8);
                    }
                    arr_19 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((short) 6069284333644411456LL)))));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)-21062))));
        /* LoopSeq 3 */
        for (short i_5 = 4; i_5 < 18; i_5 += 2) 
        {
            var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (short)6563)) : (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (short)-20197)) : (((/* implicit */int) var_2))))));
            arr_25 [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6241402773922891555LL)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (signed char)-98))));
            arr_26 [i_0] = ((short) ((short) (short)-3640));
            arr_27 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (short)-27765))) ? (((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        }
        for (long long int i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_8 = 3; i_8 < 16; i_8 += 2) /* same iter space */
                {
                    arr_34 [i_8 + 2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_6 + 2] [i_0 - 2] [i_8 + 2])) : (((/* implicit */int) (short)-3640))));
                    var_19 = ((signed char) (short)-3617);
                    var_20 = arr_8 [i_0];
                    arr_35 [i_0] [i_6] [i_7] [i_0] [i_8 + 1] = ((/* implicit */long long int) ((((((/* implicit */int) var_3)) / (((/* implicit */int) var_9)))) * (((/* implicit */int) ((short) (short)-32765)))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((short) (short)5484))) < (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (short)-13104))))));
                }
                for (short i_9 = 3; i_9 < 16; i_9 += 2) /* same iter space */
                {
                    var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [(short)2])) ? (arr_4 [i_0] [i_6 - 1] [(short)0]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    /* LoopSeq 2 */
                    for (short i_10 = 3; i_10 < 18; i_10 += 2) 
                    {
                        arr_44 [i_10] [i_10] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_10 - 2]))));
                        var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_37 [(short)2] [(short)2]))) ? (((/* implicit */int) arr_8 [(short)16])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_41 [i_0] [i_0 + 4])) : (((/* implicit */int) (signed char)-55))))));
                    }
                    for (short i_11 = 1; i_11 < 17; i_11 += 1) 
                    {
                        arr_48 [(short)14] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) arr_22 [i_6] [i_6]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [(short)0])))))));
                        var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) var_7)))));
                        var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) arr_11 [i_0] [(short)17] [(short)0] [i_7] [(short)17] [i_11 - 1])))) : (((/* implicit */int) var_11))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        arr_52 [i_0 - 2] [i_6] [3LL] [i_7] [i_0] [i_12] = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-32745)))) || (((/* implicit */_Bool) arr_28 [i_12] [i_7]))));
                        arr_53 [i_12] [i_12] [i_7] [i_6 - 2] [i_6] [i_12] [i_0] |= arr_4 [i_0] [(signed char)14] [i_0];
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32745)) & (((/* implicit */int) (short)4367))))) ? (((((/* implicit */_Bool) (short)3005)) ? (((/* implicit */int) (short)-4706)) : (((/* implicit */int) (short)-30975)))) : (((/* implicit */int) (short)21418))));
                        var_27 = ((/* implicit */long long int) var_7);
                        arr_54 [i_0 + 2] [i_6] [i_7] [i_0] [i_7] [i_12] = var_14;
                    }
                }
                var_28 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_0 + 2] [i_0 - 3] [i_0] [i_6 + 1]))));
            }
            for (short i_13 = 3; i_13 < 18; i_13 += 1) 
            {
                arr_59 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)-21418)) ^ (((/* implicit */int) var_4))));
                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_29 [i_0] [i_6 + 2] [i_13 + 1]))));
                /* LoopSeq 1 */
                for (short i_14 = 3; i_14 < 17; i_14 += 3) 
                {
                    var_30 ^= (short)-13116;
                    arr_62 [15LL] [i_0] [i_13] [15LL] = ((short) (-(((/* implicit */int) (short)(-32767 - 1)))));
                    arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) (short)21408));
                }
                arr_64 [i_0] = ((/* implicit */signed char) ((short) var_10));
                /* LoopSeq 1 */
                for (long long int i_15 = 2; i_15 < 17; i_15 += 3) 
                {
                    var_31 = ((/* implicit */short) ((((((/* implicit */int) (short)-32763)) + (2147483647))) << (((((/* implicit */int) (signed char)56)) - (56)))));
                    var_32 = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_0]))));
                    var_33 += ((/* implicit */signed char) ((short) (short)32767));
                    var_34 |= var_13;
                }
            }
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 19; i_16 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_17 = 3; i_17 < 15; i_17 += 2) 
                {
                    arr_74 [i_0] [i_6] [i_16] [i_16] [i_17 + 3] [i_17] = ((short) ((short) arr_36 [i_0] [i_0] [i_0] [i_0]));
                    var_35 = ((short) (short)17411);
                    var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)74)) & (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((long long int) (short)21442)))));
                    var_37 &= (short)17444;
                }
                var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6935816430937187173LL)) ? (((/* implicit */int) (short)25664)) : (((/* implicit */int) (short)19808))))) ? ((~(((/* implicit */int) (short)-30967)))) : ((-(((/* implicit */int) var_7))))));
            }
            for (long long int i_18 = 0; i_18 < 19; i_18 += 1) 
            {
                var_39 ^= ((/* implicit */long long int) arr_45 [i_0] [(short)14] [i_6 + 2] [i_6] [i_18] [i_6] [i_6]);
                arr_77 [i_0] [i_0] [i_0] [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)108))));
                var_40 |= ((/* implicit */signed char) ((((/* implicit */int) (short)3616)) ^ (((/* implicit */int) (short)-25665))));
            }
            arr_78 [0LL] |= ((((/* implicit */_Bool) ((long long int) (short)22384))) ? (var_14) : (var_0));
            arr_79 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) ? (((var_14) - (arr_37 [i_0] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)21417)) < (((/* implicit */int) arr_23 [i_6] [(short)11] [i_0]))))))));
        }
        for (short i_19 = 0; i_19 < 19; i_19 += 2) 
        {
            var_41 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)3860)) ? (((/* implicit */int) (short)-3643)) : (((/* implicit */int) (short)26624)))) == (((/* implicit */int) arr_17 [i_0] [i_19] [i_19] [i_19]))));
            arr_82 [i_0] [i_0] [i_19] = (short)-23623;
        }
    }
    var_42 += min((((/* implicit */long long int) min(((short)-23986), (((/* implicit */short) ((signed char) var_7)))))), (((((/* implicit */_Bool) ((short) (short)18052))) ? (-1717596485817246606LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-3860))))));
    var_43 = ((/* implicit */signed char) var_2);
}
