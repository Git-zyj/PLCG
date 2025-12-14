/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147233
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
    var_12 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-124)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [5U])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_12 [i_0] [i_2]))));
                            var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
                            var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned char)250)))))));
                            var_15 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [(unsigned char)3])) : (((/* implicit */int) arr_6 [i_3])))) ^ ((~(((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_3]))))));
                            var_16 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) > (var_3)));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) (signed char)64))))) : (((unsigned int) arr_6 [i_0]))));
            var_18 = var_9;
        }
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((unsigned int) arr_11 [i_0]));
            var_20 = ((/* implicit */unsigned char) var_3);
        }
        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            arr_18 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) arr_12 [2U] [i_0]);
            var_21 *= ((/* implicit */unsigned int) ((unsigned char) var_7));
        }
        for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2908008355U)) ? (2088406885U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_7]))))))));
            var_23 ^= ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_0 [i_0]))))));
            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */signed char) 2206560401U);
                            var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)22] [i_8] [(unsigned char)22] [i_10])) ? (var_6) : (var_1)));
                            var_27 = ((/* implicit */signed char) arr_3 [i_0] [i_7] [i_8]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_12])) < (((/* implicit */int) var_10))));
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            arr_36 [i_11] [i_11] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)178))))));
                            var_29 = ((/* implicit */signed char) var_7);
                            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0] [i_7]))));
                            arr_37 [i_0] [i_11] [i_7] [i_11] [i_11] [i_7] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2206560401U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_7] [i_11]))) : (32767U)));
                        }
                        for (unsigned char i_14 = 0; i_14 < 23; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((unsigned int) var_6));
                            arr_42 [i_0] [i_7] [i_7] [i_11] [i_11] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) arr_25 [i_0] [i_7] [i_11] [i_12] [i_14])) : (((/* implicit */int) var_5))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            arr_46 [(unsigned char)17] [i_7] [i_12] [i_11] = ((((/* implicit */_Bool) (unsigned char)100)) ? (1897201098U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))));
                            var_33 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)46)) ? (2206560393U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_28 [i_0] [i_0] [(signed char)6] [i_7] [i_11] [(signed char)13] [i_15]))))));
                            var_34 *= ((/* implicit */unsigned char) (~(var_6)));
                            var_35 = ((/* implicit */signed char) 2729340732U);
                        }
                        arr_47 [i_0] [i_7] [i_11] [i_11] = ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_37 ^= ((/* implicit */unsigned char) (+(var_8)));
    }
    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_17 = 2; i_17 < 13; i_17 += 1) 
        {
            for (unsigned int i_18 = 0; i_18 < 14; i_18 += 1) 
            {
                {
                    arr_57 [i_16] [i_16] [i_18] = ((/* implicit */signed char) var_4);
                    var_38 = ((/* implicit */unsigned int) arr_9 [i_18] [i_16] [i_16]);
                }
            } 
        } 
        arr_58 [i_16] [i_16] = ((/* implicit */signed char) arr_14 [i_16] [i_16] [(signed char)14]);
        /* LoopNest 3 */
        for (signed char i_19 = 0; i_19 < 14; i_19 += 3) 
        {
            for (unsigned char i_20 = 0; i_20 < 14; i_20 += 3) 
            {
                for (unsigned int i_21 = 0; i_21 < 14; i_21 += 3) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) var_3);
                        arr_66 [i_21] [0U] [i_16] [i_19] [i_16] = (signed char)38;
                    }
                } 
            } 
        } 
        arr_67 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_43 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) << (((arr_38 [i_16] [(signed char)4] [i_16] [i_16] [i_16]) - (2042436962U)))))) ? (((((/* implicit */_Bool) arr_21 [i_16] [i_16] [i_16])) ? (arr_38 [i_16] [i_16] [i_16] [i_16] [(unsigned char)9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_16] [i_16] [i_16])))))));
    }
    for (unsigned int i_22 = 0; i_22 < 16; i_22 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_23 = 0; i_23 < 16; i_23 += 4) 
        {
            for (signed char i_24 = 0; i_24 < 16; i_24 += 3) 
            {
                for (unsigned char i_25 = 0; i_25 < 16; i_25 += 3) 
                {
                    {
                        var_40 = ((/* implicit */unsigned char) var_4);
                        var_41 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_76 [i_22] [(signed char)14] [(unsigned char)9] [i_25]))) ? (min((((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (unsigned char)189)))), (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) arr_16 [i_22])) : (((/* implicit */int) arr_74 [(signed char)0] [i_23])))))) : (((/* implicit */int) ((unsigned char) min((2415446319U), (360799615U)))))));
                        var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_25] [i_24] [i_22])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_22] [i_23] [i_24]))))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [4U]))) > (var_6))))) ? ((+(arr_3 [i_22] [i_24] [i_24]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-122), ((signed char)-38))))) > (var_8)))))));
                    }
                } 
            } 
        } 
        arr_78 [0U] [3U] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (var_8))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)73)) > (((/* implicit */int) arr_7 [4U] [(signed char)14] [i_22] [i_22]))))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_6)))))))));
    }
}
