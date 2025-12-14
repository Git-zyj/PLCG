/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138337
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
    var_10 &= ((/* implicit */_Bool) var_9);
    var_11 &= ((/* implicit */unsigned long long int) ((var_2) > (((long long int) -2727746171415578440LL))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -2727746171415578440LL)) ? (13130048522432098121ULL) : (((/* implicit */unsigned long long int) 2727746171415578440LL))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] &= ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) max((var_5), (((/* implicit */int) arr_6 [i_0]))))) : (((((/* implicit */_Bool) 0LL)) ? (-2727746171415578428LL) : (arr_2 [i_2]))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 4; i_4 < 11; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) 63625992)))), (max(((!(var_6))), (((((/* implicit */_Bool) 1227630061)) && (((/* implicit */_Bool) (unsigned char)33))))))));
                            arr_16 [i_0] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_4 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2727746171415578453LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_2 [i_4 - 1])))))));
                            arr_17 [i_0] [i_1] [i_2] [(unsigned short)2] [i_4] [i_0] [i_4 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(63625992)))) ? (var_3) : (-1603055814611448499LL)));
                            var_14 = ((/* implicit */long long int) arr_14 [i_4 + 1] [i_1] [i_2] [i_3] [i_4]);
                            var_15 *= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        }
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_0 [i_2])), (arr_5 [i_0] [i_0] [i_2]))) & (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_2]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
                        var_16 ^= ((/* implicit */unsigned short) (+(var_5)));
                        var_17 ^= ((/* implicit */unsigned short) ((arr_5 [i_0] [i_0] [i_0]) / (((((/* implicit */_Bool) arr_10 [i_0] [5U] [i_1] [i_1] [i_2] [i_3])) ? (max((-2892818903760130973LL), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_3]))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_3 [i_1]));
                        arr_22 [i_5] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_5] [i_0] [i_5] [i_2] [i_0] [(unsigned char)7] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_0]))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        arr_25 [i_6] = arr_23 [i_6];
                        var_18 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)127))))) != (((((/* implicit */long long int) ((/* implicit */int) var_6))) & (var_9))))))));
                        arr_26 [i_6 + 1] [i_2] [i_6] [i_6] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)2] [i_6 - 1] [i_6 - 1] [i_6] [i_6])) ? (((/* implicit */int) arr_14 [i_6] [i_6] [i_6 - 1] [i_2] [i_2])) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_2] [i_1]))) : (((var_8) / (((/* implicit */long long int) arr_13 [i_6] [i_6] [i_6 - 1] [8U] [8U])))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_19 ^= ((/* implicit */short) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7])))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 8; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned char) ((signed char) -2727746171415578444LL));
                        arr_38 [i_9] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_7] [i_7] [(short)3] [i_7] [i_7] [i_7])) ? (var_2) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
            var_22 = ((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_8]))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            var_23 ^= ((/* implicit */signed char) arr_2 [i_11]);
            arr_41 [(unsigned short)4] = ((/* implicit */unsigned long long int) ((unsigned int) arr_28 [i_7]));
            arr_42 [i_7] = arr_29 [(_Bool)1];
        }
        for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            var_24 *= ((/* implicit */signed char) ((_Bool) arr_24 [i_7]));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_12] [(_Bool)1] [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) arr_11 [i_7] [i_12] [i_7] [i_7] [i_7]))));
            var_26 += ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (2767002872836189099ULL) : (((/* implicit */unsigned long long int) var_8)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [(unsigned short)4])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7] [i_7] [4U] [(unsigned char)10] [i_12] [i_12]))))))));
        }
        arr_45 [i_7] &= ((short) arr_43 [i_7]);
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [(signed char)4] [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_7] [i_7] [i_7] [i_7] [i_7]))));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            var_28 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_13]))));
            /* LoopNest 2 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_29 = ((/* implicit */signed char) ((((var_5) - (var_5))) + (((/* implicit */int) arr_54 [i_13] [i_16] [i_15 - 1] [i_15 - 1]))));
                        var_30 ^= ((/* implicit */short) arr_20 [i_13] [i_13] [i_13] [i_13]);
                    }
                } 
            } 
        }
        for (unsigned int i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            var_31 -= ((/* implicit */_Bool) ((long long int) arr_30 [i_17]));
            arr_58 [i_13] [i_13] = ((/* implicit */signed char) var_4);
            arr_59 [i_13] [i_17] [i_17] |= ((/* implicit */signed char) (+(arr_44 [i_13] [i_13] [i_17])));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_63 [i_18] = ((/* implicit */short) ((_Bool) var_9));
            arr_64 [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_55 [i_13] [i_13] [i_13] [i_13] [i_13]))) > (var_9)));
            var_32 += (+(arr_37 [i_13]));
        }
        var_33 ^= ((100367536064411650LL) == (((/* implicit */long long int) 63625992)));
        var_34 += ((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_13])) ^ (((/* implicit */int) arr_60 [i_13]))));
        var_35 |= ((/* implicit */signed char) ((((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_10 [i_13] [i_13] [i_13] [3U] [i_13] [i_13]))))) : (12288204936471281869ULL)));
        var_36 ^= ((/* implicit */short) arr_61 [i_13] [i_13] [i_13]);
    }
    /* LoopNest 3 */
    for (short i_19 = 0; i_19 < 25; i_19 += 1) 
    {
        for (int i_20 = 0; i_20 < 25; i_20 += 2) 
        {
            for (unsigned long long int i_21 = 2; i_21 < 24; i_21 += 3) 
            {
                {
                    var_37 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (arr_67 [i_19])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_4)), (var_1)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (max((0U), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_20] [i_21 - 2])))))));
                    var_38 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_65 [i_21] [i_21 + 1]))));
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_71 [i_19])) & (((((/* implicit */_Bool) arr_73 [i_21 + 1] [i_20] [i_20] [i_19])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))))));
                    var_40 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)46)), (2727746171415578432LL)));
                }
            } 
        } 
    } 
}
