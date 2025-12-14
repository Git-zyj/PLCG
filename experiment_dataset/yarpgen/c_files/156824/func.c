/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156824
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((-6377573259391173191LL), (((/* implicit */long long int) ((int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_3] [i_0])))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3 - 3] [17LL] [i_3 + 2] [i_3 + 2] [i_3 - 3] [17LL])) << (((/* implicit */int) (_Bool)1))))) && (((((/* implicit */int) arr_14 [i_0] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3] [5LL])) >= (((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_3 - 1] [i_3])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        arr_19 [(signed char)8] [i_2] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_5] [i_0])) && (((/* implicit */_Bool) arr_17 [i_5] [i_2] [i_1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 0LL)))) : ((((_Bool)1) ? (arr_6 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_13))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((arr_0 [i_5]), (((/* implicit */signed char) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 4; i_6 < 20; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] |= (-(((/* implicit */int) ((signed char) arr_11 [i_0] [(signed char)9] [i_6] [i_7]))));
                            var_23 = ((/* implicit */long long int) ((arr_22 [13ULL] [13ULL] [i_0] [i_2] [i_6 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_6] [i_6 - 3] [i_6] [i_6 + 1])))));
                        }
                        arr_26 [i_0] [i_6] [i_2] [(_Bool)1] = ((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_2] [i_6 + 1]);
                        var_24 = -2209671716255351614LL;
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    var_25 ^= ((/* implicit */long long int) (unsigned short)53416);
                    arr_29 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_17 [i_8 - 1] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */long long int) var_14))))), ((+(arr_7 [i_8] [i_8] [i_8])))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 3) 
                    {
                        arr_34 [i_9] [i_8 + 1] [(signed char)13] [(signed char)13] [i_0] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (signed char)-101))))));
                        arr_35 [i_9] [i_8] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)16795));
                    }
                    for (int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) var_6);
                        arr_38 [9LL] = ((/* implicit */unsigned long long int) var_16);
                    }
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) 9316181931109195549ULL);
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (_Bool)0))));
                        var_29 = ((/* implicit */signed char) (-(((/* implicit */int) arr_23 [i_0] [i_1] [11LL] [i_8] [i_1]))));
                        /* LoopSeq 4 */
                        for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            var_30 += ((/* implicit */unsigned short) ((long long int) var_5));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_8 + 4]), (arr_7 [i_1] [i_1] [i_8 + 1])))) ? (((unsigned long long int) arr_7 [i_0] [i_12] [i_8 + 2])) : (arr_7 [i_0] [i_11] [i_8 + 4])));
                            arr_43 [i_11] [i_11] = ((/* implicit */long long int) arr_23 [i_8] [i_8 - 1] [(_Bool)1] [i_8 - 1] [i_8 + 4]);
                            var_32 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1355349021)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_8 + 2] [i_8 - 1] [i_8 + 1]))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) : (((/* implicit */int) arr_18 [i_12] [(_Bool)1] [(_Bool)1]))));
                        }
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            arr_48 [i_13] [i_13] [i_13] [i_13] [i_13] |= ((/* implicit */_Bool) (-(max((max((((/* implicit */int) arr_46 [i_0] [i_1] [i_8])), (arr_4 [i_0] [i_1] [i_0]))), (((/* implicit */int) var_16))))));
                            arr_49 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_18)))) ? (((/* implicit */unsigned long long int) arr_21 [i_8 + 3] [i_8 + 4] [i_8 + 1])) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_22 [i_13] [i_11] [i_8] [i_1] [i_0])))))));
                            var_33 += ((/* implicit */_Bool) arr_40 [i_8 - 1] [i_8 + 3] [i_8 + 3] [i_8 + 1] [i_8] [i_8]);
                            var_34 = ((/* implicit */_Bool) var_19);
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1230885743725967392LL)), (((unsigned long long int) var_17))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_18)))), (((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) 6377573259391173191LL)) : (arr_30 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_11])))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((+(arr_39 [i_0] [i_0] [i_0] [i_8] [i_0] [i_14]))) : (((arr_8 [i_14] [i_11] [17] [i_0]) ? (-2624368165925979101LL) : (arr_45 [i_1] [i_1] [i_1] [i_1] [13ULL] [i_1]))))))))));
                            var_37 = ((/* implicit */long long int) ((((arr_11 [i_0] [i_8] [i_11] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-9223372036854775807LL - 1LL)))) >= ((~(var_17)))));
                        }
                        for (signed char i_15 = 0; i_15 < 21; i_15 += 1) 
                        {
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_54 [i_8] [i_8] [i_8] [i_8 + 2] [i_11])))))))));
                            var_39 = ((/* implicit */unsigned short) var_2);
                            var_40 |= ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) arr_12 [i_0])))));
                        }
                    }
                }
                var_41 = ((/* implicit */int) arr_36 [i_0] [i_0] [(signed char)16] [i_1]);
                var_42 ^= ((/* implicit */int) max(((_Bool)1), (((_Bool) -9223372036854775798LL))));
            }
        } 
    } 
    var_43 = (-(((long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_14))))));
    var_44 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
    var_45 |= var_13;
}
