/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142285
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
    var_20 = (_Bool)0;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (arr_1 [i_1])));
            var_22 = ((/* implicit */signed char) max((var_22), ((signed char)115)));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [4] [23] [(unsigned short)19] = ((/* implicit */unsigned long long int) arr_5 [(signed char)16]);
                        arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) var_14));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0)))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) arr_10 [i_0] [(signed char)23] [i_1] [(signed char)23]);
        }
        for (int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
        {
            arr_19 [i_4] = ((/* implicit */int) ((arr_17 [i_0] [i_0]) != (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 4; i_6 < 22; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (unsigned short)65512))));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23)))))));
                            var_27 = (~(((/* implicit */int) (unsigned short)0)));
                        }
                    } 
                } 
                arr_27 [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_5] [i_5 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [(_Bool)1] [i_5 + 1]))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_32 [i_0] [(unsigned short)5] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) (unsigned short)65513)))) : (arr_16 [i_4])));
                var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) arr_5 [i_0])) : (-1)));
            }
            var_29 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_6 [i_0] [22]))));
            arr_33 [(_Bool)1] = ((/* implicit */_Bool) (+(arr_20 [i_0] [i_0])));
        }
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_9] [i_9] [i_0] [i_0] [i_0])) >> (((/* implicit */int) arr_6 [i_0] [i_0])))))));
            var_31 = (+(((/* implicit */int) (unsigned short)42076)));
            var_32 = ((/* implicit */unsigned short) ((-745775218) <= (((/* implicit */int) arr_12 [i_9] [i_0] [i_0] [(unsigned short)14] [i_0]))));
        }
        arr_37 [i_0] = arr_1 [i_0];
    }
    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1)))))))));
        arr_41 [i_10] = ((/* implicit */_Bool) arr_2 [i_10]);
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)10)) * ((((_Bool)1) ? (((/* implicit */int) arr_29 [i_10] [i_11] [i_12])) : (((/* implicit */int) ((_Bool) arr_39 [i_10] [i_12])))))));
                                arr_52 [i_10] [i_11] [(_Bool)1] [i_14] = ((/* implicit */_Bool) (unsigned short)39203);
                                var_35 ^= ((/* implicit */int) var_18);
                                var_36 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_13] [i_12] [i_11] [i_10]))));
                                var_37 = arr_44 [(signed char)1] [i_10];
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (unsigned short)8)))))) ? (((((((/* implicit */int) var_6)) * (((/* implicit */int) arr_49 [i_15] [i_12] [i_11] [(signed char)4])))) + ((+(((/* implicit */int) (unsigned short)23460)))))) : (((2147483617) + (((/* implicit */int) (_Bool)1))))));
                        var_39 += ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) arr_31 [i_15 - 1]))), ((~(((/* implicit */int) arr_40 [i_15 - 1] [i_15 - 1]))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_40 *= ((/* implicit */unsigned short) arr_9 [i_10] [i_11] [i_16] [i_16] [i_12] [i_16]);
                        var_41 = ((((/* implicit */int) (unsigned short)65513)) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) arr_28 [i_16])) : (((/* implicit */int) var_10))))))));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_23 [i_16] [i_11] [i_12] [i_16]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_16] [i_10] [(signed char)11] [i_10]))))) - (var_3)));
                        var_43 -= ((/* implicit */_Bool) (unsigned short)2138);
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 14; i_17 += 4) 
                        {
                            var_44 = ((/* implicit */int) arr_22 [i_11] [i_12] [i_16]);
                            arr_60 [i_10] [i_16] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_49 [i_10] [(unsigned short)7] [i_16] [i_17]))));
                            var_45 = ((/* implicit */unsigned short) arr_30 [i_11]);
                            var_46 = max((((arr_24 [i_10]) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_12])) >= (arr_56 [i_16] [i_11] [i_12] [i_11] [i_17])))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_13))))))), (((((/* implicit */_Bool) min((((/* implicit */int) var_19)), (var_0)))) ? (((((/* implicit */int) (_Bool)1)) >> (((arr_51 [i_10] [i_11] [(signed char)6] [i_16] [i_17] [i_17]) + (913160584))))) : (var_12))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        for (int i_19 = 0; i_19 < 14; i_19 += 3) 
                        {
                            {
                                var_47 = ((/* implicit */int) var_4);
                                arr_67 [(unsigned short)3] [12] [i_12] = var_13;
                                arr_68 [i_10] [i_11] [i_12] [i_10] [(_Bool)1] [i_11] = ((/* implicit */unsigned short) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned short)65513), (var_5)))), (((var_12) / (((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_19)) : (-27)));
    var_49 = ((/* implicit */_Bool) ((var_14) / (((/* implicit */unsigned long long int) var_15))));
}
