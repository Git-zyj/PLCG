/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186467
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) max((((((/* implicit */int) var_10)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (arr_1 [i_0])));
                var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((/* implicit */int) min((arr_4 [i_1] [i_1 + 1] [i_1]), (arr_4 [i_1] [i_1 + 2] [i_1])))), ((+(((/* implicit */int) var_7)))))))));
                var_15 *= ((/* implicit */short) (-(((/* implicit */int) var_7))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((signed char) arr_10 [i_2] [i_2] [i_3]))), (var_4))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    {
                        var_17 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) ((signed char) 447407084))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            arr_19 [i_6] [i_2] [i_4] [i_4] [16U] [i_2] [i_2] |= ((/* implicit */long long int) ((min((var_8), (((/* implicit */long long int) arr_16 [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 1])))) < (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                            arr_20 [(_Bool)1] [(signed char)1] [i_6] [i_5] [i_6] [i_4] [i_2] &= ((/* implicit */unsigned int) var_0);
                        }
                        var_18 = ((/* implicit */int) var_8);
                    }
                } 
            } 
            arr_21 [i_2] [i_2] [i_2] |= ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) var_9))), (((((var_7) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) * (((/* implicit */int) arr_9 [i_2]))))));
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 3; i_9 < 18; i_9 += 2) 
                {
                    {
                        var_19 = ((/* implicit */int) (+(374433800U)));
                        arr_29 [i_2] [i_2] |= ((/* implicit */int) max((((((/* implicit */_Bool) var_1)) ? (var_8) : (var_8))), (((((long long int) (unsigned short)58106)) >> (((((/* implicit */int) ((short) var_3))) - (3141)))))));
                        arr_30 [i_2] [i_2] [i_8] [8] &= ((/* implicit */_Bool) max(((-(((/* implicit */int) var_0)))), ((((+(((/* implicit */int) var_7)))) + ((-(((/* implicit */int) arr_26 [i_2] [i_7 + 1] [i_9]))))))));
                        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-126))));
                        arr_31 [i_2] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */int) max((((/* implicit */short) var_7)), (arr_24 [i_7] [8LL])))) >> (((((/* implicit */int) var_2)) << (((/* implicit */int) var_6)))))), (((/* implicit */int) var_6))));
                    }
                } 
            } 
            var_21 *= ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_2]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) var_11)) & ((~(var_3))))))));
                            var_23 = (~(((/* implicit */int) var_6)));
                            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                        }
                    } 
                } 
                arr_41 [i_7] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_6))) && (((/* implicit */_Bool) ((long long int) var_0)))));
                arr_42 [i_2] [i_7] [i_7] [i_10 + 1] = (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (var_8)))));
                arr_43 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_18 [i_2] [i_7] [i_7] [i_10] [16])) << (((((/* implicit */int) var_11)) - (154))))) : ((~(((/* implicit */int) var_0))))));
            }
        }
        /* LoopNest 3 */
        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            for (signed char i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    {
                        var_25 &= ((/* implicit */unsigned int) (+((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (var_3)))))));
                        arr_52 [i_2] [i_15] [i_14] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)127)), (-1304859778130392672LL)));
                        var_26 = ((/* implicit */short) var_7);
                        /* LoopSeq 2 */
                        for (int i_16 = 1; i_16 < 18; i_16 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) arr_18 [i_16] [i_16 - 1] [i_16 - 1] [i_15] [i_14])), ((~(((/* implicit */int) (unsigned short)7429))))))));
                            arr_55 [i_13] [i_15] [i_14] [i_14] [i_16] [i_14] [i_14] = ((/* implicit */_Bool) (-(min((var_9), (((/* implicit */long long int) var_6))))));
                            arr_56 [i_14] [i_13] [i_15] [i_16] [i_16] [12] = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                            var_28 = ((/* implicit */int) ((long long int) var_8));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_60 [i_17] [i_15] = ((/* implicit */long long int) arr_22 [i_13] [(_Bool)1] [i_17]);
                            arr_61 [i_17] [11U] [i_15] [i_15] [i_15] [i_13] [i_2] = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) var_4)))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_18 = 4; i_18 < 18; i_18 += 2) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    arr_67 [15ULL] [i_18] [i_2] [i_2] = min((((/* implicit */int) arr_18 [i_18 - 3] [i_18 - 4] [i_18 - 3] [i_18 + 1] [i_18 - 2])), (((((/* implicit */int) var_4)) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_11 [i_18 - 4] [i_18]), (var_5)))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_11 [i_19] [i_18])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_21 = 0; i_21 < 14; i_21 += 1) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    var_30 = ((/* implicit */int) (~(var_1)));
                    var_31 = ((/* implicit */short) var_0);
                    /* LoopNest 2 */
                    for (signed char i_23 = 0; i_23 < 14; i_23 += 1) 
                    {
                        for (signed char i_24 = 0; i_24 < 14; i_24 += 1) 
                        {
                            {
                                var_32 &= ((/* implicit */short) var_8);
                                var_33 = ((/* implicit */int) ((short) var_11));
                                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (var_5)));
                                var_35 = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_36 = (+((-(((/* implicit */int) var_11)))));
    }
}
