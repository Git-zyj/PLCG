/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12230
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
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_13 |= ((/* implicit */unsigned long long int) var_12);
                            var_14 = ((/* implicit */unsigned char) ((long long int) min((arr_3 [i_4 - 1] [i_2 - 1] [i_1 - 1]), (arr_3 [i_4 - 1] [i_2 + 2] [i_1 - 1]))));
                            arr_13 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9219865347109937455ULL)) ? (((/* implicit */int) max((arr_12 [i_1] [i_3] [i_2 + 1] [i_3] [i_1]), (var_0)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)207)) ? (3836749447029091409LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_14 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) arr_12 [i_4 - 1] [2LL] [i_1 - 1] [2LL] [i_0]);
                            arr_15 [i_3] [i_2] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) arr_6 [i_0]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        arr_23 [i_6] [i_5] [(unsigned char)3] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_15 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (arr_18 [i_5] [4LL]) : (arr_18 [i_5] [i_1]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_16 = (!(((/* implicit */_Bool) (unsigned char)237)));
                            var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_0]))))) && (((/* implicit */_Bool) arr_2 [(unsigned char)17] [i_1 - 1]))));
                        }
                    }
                } 
            } 
            var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1] [(_Bool)1] [i_1]))) - (max((9219865347109937455ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        var_19 = ((_Bool) (unsigned char)122);
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) 10705039967491158212ULL)) ? (arr_16 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))))));
                        arr_32 [(unsigned char)0] [(_Bool)1] [i_8] [(unsigned char)0] [i_0] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) var_7)) <= (min((((/* implicit */int) (unsigned char)0)), ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    }
                } 
            } 
        }
        var_21 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), (var_2)))) ? (((((/* implicit */_Bool) var_8)) ? (9219865347109937455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (min((((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_3)))) : (min((((var_9) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!(var_9)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_12] [i_10])) ? (((/* implicit */int) arr_40 [i_13] [i_14])) : (((/* implicit */int) arr_40 [i_13] [i_13]))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)18)))))));
                            var_25 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                            arr_48 [i_14] [i_14] [i_11] &= ((unsigned char) (~(((/* implicit */int) arr_19 [i_10]))));
                        }
                        /* vectorizable */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)122)) ? (-1101747213733615855LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                            var_27 = ((/* implicit */long long int) var_4);
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)253)))))));
                            var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_8))) - (((/* implicit */int) arr_24 [i_12] [i_12] [i_12] [i_10] [i_11]))))) ? (((arr_19 [i_10]) ? (((/* implicit */int) arr_19 [i_16])) : (((/* implicit */int) arr_41 [i_10] [i_11] [i_12])))) : ((~((+(((/* implicit */int) (unsigned char)169))))))));
                            var_30 = ((/* implicit */long long int) arr_52 [i_10] [i_10] [i_10] [i_12] [i_12]);
                        }
                        /* vectorizable */
                        for (unsigned char i_17 = 0; i_17 < 19; i_17 += 1) 
                        {
                            var_31 -= var_6;
                            arr_57 [i_11] [i_12] = (~(arr_20 [(_Bool)1] [i_11] [(_Bool)1] [i_17]));
                            var_32 ^= ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) var_11))) != (arr_54 [i_10] [i_11] [(unsigned char)2] [i_10] [i_17])))));
                            var_33 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_41 [i_10] [(unsigned char)16] [i_10])))) | (((arr_54 [i_10] [i_11] [i_12] [i_13] [(unsigned char)8]) >> (((((/* implicit */int) (unsigned char)124)) - (83)))))));
                            var_34 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) arr_43 [i_10] [i_12] [i_17])))));
                        }
                        arr_58 [i_10] [i_12] [i_12] [i_10] = min((min((((unsigned char) var_8)), (((/* implicit */unsigned char) ((_Bool) var_3))))), (((unsigned char) arr_44 [i_12] [i_11] [i_13] [i_12])));
                        arr_59 [i_10] [i_11] [i_10] [i_12] [i_10] [i_10] = var_10;
                        var_35 = ((/* implicit */_Bool) (+((((~(((/* implicit */int) (unsigned char)18)))) ^ (((/* implicit */int) ((unsigned char) (unsigned char)27)))))));
                    }
                    for (long long int i_18 = 1; i_18 < 18; i_18 += 1) 
                    {
                        var_36 = ((((arr_12 [i_18] [i_18] [i_18] [i_12] [i_18 - 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_18] [3LL] [i_18] [i_12] [i_18 + 1])))) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_33 [(unsigned char)12] [i_18 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_12] [i_11] [i_11] [i_18 - 1] [i_12] [i_12] [i_12]))))))));
                        arr_63 [i_10] [i_10] [i_12] [i_12] [i_18 + 1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_6 [(unsigned char)13])) ? (((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)44)))) : ((-(((/* implicit */int) arr_28 [i_10]))))))));
                        var_37 = ((/* implicit */long long int) max((((((/* implicit */int) arr_6 [i_10])) / (((/* implicit */int) arr_6 [i_11])))), ((~(((/* implicit */int) arr_39 [i_10]))))));
                    }
                    arr_64 [i_12] [i_11] [i_11] [i_12] = ((/* implicit */_Bool) ((unsigned long long int) ((min((arr_9 [(_Bool)1] [i_11] [(_Bool)1] [i_12] [i_11]), (((/* implicit */unsigned long long int) arr_8 [(unsigned char)8] [(_Bool)1] [(unsigned char)8] [i_10])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                    arr_65 [i_12] = ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
    } 
}
