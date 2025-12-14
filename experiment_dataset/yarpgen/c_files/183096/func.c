/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183096
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
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)31959))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) (unsigned short)17423);
                                var_21 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
                                var_22 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (max((((/* implicit */unsigned long long int) var_15)), (var_11)))))));
                                var_23 -= ((/* implicit */short) min((arr_3 [i_2] [i_1] [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) 0ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                {
                    arr_19 [i_7] [i_7] [i_6] [i_5] = ((/* implicit */long long int) arr_6 [i_5] [i_5] [(short)7] [i_5]);
                    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_5])) ? (var_11) : (((/* implicit */unsigned long long int) var_14)))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (arr_1 [i_7]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 4) 
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_9] [i_10 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_12 [i_5]), (((/* implicit */long long int) var_4))))) ? (var_14) : (arr_6 [i_5] [i_5] [i_9] [i_10])))) : (max((((/* implicit */unsigned long long int) var_8)), (var_0)))));
                        arr_28 [i_9] [i_9] [i_9] [i_10 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) max((arr_5 [i_5] [i_9] [i_10 - 1]), (((/* implicit */unsigned long long int) arr_14 [i_8]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)48113)) : (((/* implicit */int) (unsigned short)48113))))) : (var_0))) & (((/* implicit */unsigned long long int) var_10))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        arr_31 [i_11] [(_Bool)1] [6] [(_Bool)1] [i_5] |= ((/* implicit */long long int) (~(((int) var_12))));
                        arr_32 [i_9] [17ULL] [i_8] [i_5] [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_9]))));
                    }
                    arr_33 [i_9] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (arr_12 [i_5])))), (min((var_7), (((/* implicit */unsigned long long int) arr_3 [i_9] [i_8] [i_5]))))))));
                    arr_34 [i_9] [i_8] [i_9] = ((/* implicit */_Bool) max((arr_3 [i_5] [i_5] [i_5]), (max((min((arr_3 [7] [7] [i_9]), (arr_8 [i_5] [i_5] [i_5] [i_9]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_16 [i_5] [i_5] [i_5])), (var_18))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        arr_37 [i_5] [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (2147483647))))));
                        var_25 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */int) (short)31))))) != (min((arr_10 [i_9] [i_8] [i_12] [i_8] [i_12] [i_9] [i_9]), (((/* implicit */unsigned long long int) var_10)))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            for (unsigned short i_14 = 4; i_14 < 18; i_14 += 3) 
            {
                for (int i_15 = 2; i_15 < 18; i_15 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned long long int) arr_13 [i_15]))));
                        /* LoopSeq 1 */
                        for (long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            arr_46 [i_14] = ((/* implicit */signed char) (unsigned short)65531);
                            arr_47 [i_14] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_13)), (var_5)));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        arr_50 [i_17] [i_17] = ((/* implicit */short) ((unsigned long long int) var_0));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_18 = 0; i_18 < 25; i_18 += 4) 
        {
            var_27 = ((/* implicit */long long int) var_16);
            arr_53 [3U] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (((((/* implicit */unsigned long long int) var_2)) % (18446744073709551606ULL)))));
        }
    }
    for (int i_19 = 0; i_19 < 11; i_19 += 4) 
    {
        var_28 = ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (short)-17)));
        var_29 = ((/* implicit */_Bool) var_9);
        var_30 &= ((/* implicit */short) ((((/* implicit */int) min((arr_14 [i_19]), (min((var_13), (var_15)))))) != (((((/* implicit */_Bool) arr_29 [i_19] [i_19] [i_19] [i_19] [i_19] [(_Bool)1])) ? (arr_2 [i_19] [i_19]) : (((/* implicit */int) var_1))))));
    }
    for (unsigned short i_20 = 1; i_20 < 13; i_20 += 3) 
    {
        var_31 &= ((/* implicit */long long int) (+(max((((var_5) - (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) var_4))))));
        /* LoopSeq 1 */
        for (long long int i_21 = 0; i_21 < 14; i_21 += 2) 
        {
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)8332)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)7758))));
            arr_63 [i_20] [i_21] |= ((/* implicit */long long int) (unsigned short)17423);
        }
    }
    /* LoopNest 3 */
    for (short i_22 = 0; i_22 < 20; i_22 += 1) 
    {
        for (unsigned short i_23 = 0; i_23 < 20; i_23 += 1) 
        {
            for (unsigned int i_24 = 1; i_24 < 18; i_24 += 4) 
            {
                {
                    arr_72 [i_22] = ((/* implicit */int) var_8);
                    arr_73 [i_24] [i_23] [i_23] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_68 [i_23] [(_Bool)1]))) ? (((((/* implicit */_Bool) min((456827403088836474LL), (((/* implicit */long long int) (unsigned short)33564))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32))) : (arr_66 [(signed char)4] [i_23]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    arr_74 [i_22] [i_22] = ((/* implicit */short) var_3);
                    var_33 = ((/* implicit */short) max((arr_3 [i_24 + 2] [i_24 + 2] [i_24 - 1]), (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_24 + 2] [i_24 + 2] [i_24 + 2]) : (arr_3 [i_24 + 2] [i_24 + 1] [i_24 + 2])))));
                    var_34 = ((/* implicit */_Bool) var_0);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_25 = 1; i_25 < 14; i_25 += 4) 
    {
        for (unsigned short i_26 = 0; i_26 < 15; i_26 += 1) 
        {
            {
                var_35 = ((/* implicit */int) arr_75 [i_25]);
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 15; i_27 += 4) 
                {
                    for (int i_28 = 3; i_28 < 14; i_28 += 3) 
                    {
                        {
                            arr_86 [i_28] [(signed char)5] [i_27] [i_26] [i_25 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1354630864)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_28 - 3] [2ULL] [i_26] [(short)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_26] [i_25]))) : (var_0)))) ? (((((/* implicit */_Bool) arr_42 [i_25 + 1] [i_25 + 1] [i_27] [i_28])) ? (((/* implicit */unsigned long long int) var_14)) : (var_7))) : (((arr_39 [i_28] [i_25]) % (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_27] [i_27] [i_26] [i_27]))))))));
                            var_36 ^= ((/* implicit */int) min((((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_12))))) ? (var_5) : (((/* implicit */unsigned long long int) ((arr_44 [i_25]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_25] [i_25] [i_27] [i_28] [i_27] [(short)6] [i_27])))))))), (((/* implicit */unsigned long long int) var_13))));
                            var_37 = ((/* implicit */int) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
}
