/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132363
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = (+((-((-(var_5))))));
        var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == (var_7)))) : (((/* implicit */int) var_6))))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (signed char i_3 = 3; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_14 = ((unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_2]))));
                        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_9 [i_1] [i_0] [i_1] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) : ((~(arr_10 [i_1] [i_1]))))) % (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 424925441U)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)-2))))) ^ (arr_13 [i_1] [i_1 + 1])))));
                        var_16 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20)))))) ? ((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_3])))) : (((/* implicit */int) var_1))))));
                    }
                } 
            } 
        } 
        var_17 = ((signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (var_11) : (((arr_13 [i_0] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
        var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
    }
    for (signed char i_4 = 2; i_4 < 9; i_4 += 4) 
    {
        var_19 |= ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (arr_3 [i_4] [i_4]));
        var_20 = ((/* implicit */unsigned int) min((var_20), (var_7)));
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) arr_8 [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))) : ((~(((((/* implicit */_Bool) 1507274718U)) ? (2532222022U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_5]))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_25 [i_7] = arr_15 [i_8];
                                var_22 ^= ((unsigned int) min(((-(var_5))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_4] [i_6] [i_7] [i_6])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        var_23 = arr_22 [i_4] [i_9] [i_6] [i_6];
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_5 [i_5 - 1] [i_4 + 2] [i_4 + 1]))));
                        var_25 = ((/* implicit */unsigned int) ((signed char) arr_17 [i_4 - 1]));
                    }
                    for (signed char i_10 = 2; i_10 < 7; i_10 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_4 + 1])) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6] [i_6] [i_6]))) != (arr_0 [i_4]))))))) ? (((((/* implicit */int) arr_1 [i_10 - 2] [i_4 + 2])) % (((/* implicit */int) (signed char)8)))) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_10]))));
                        var_27 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_23 [i_10] [i_5] [i_5 - 2] [i_10] [i_5] [i_10] [i_10]), (arr_29 [i_4] [i_4 + 2] [i_4 + 1] [i_4 - 2])))), (((((/* implicit */_Bool) arr_30 [i_5 - 3])) ? (((/* implicit */int) arr_23 [i_4] [i_6] [i_5 - 1] [i_10] [i_5 - 1] [i_6] [i_5])) : (((/* implicit */int) arr_30 [i_5 - 3]))))));
                    }
                    for (signed char i_11 = 2; i_11 < 7; i_11 += 2) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */unsigned int) ((2032U) != (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_4 + 2] [i_5 + 1] [i_11 - 1])))))));
                        arr_34 [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_32 [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) : (2424467454U))) + (var_4)));
                    }
                    var_29 = ((/* implicit */signed char) ((((unsigned int) (+(arr_14 [i_5])))) % (((((arr_28 [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6]))))) ? ((+(arr_9 [i_4] [i_4] [i_4] [i_6]))) : (((3778302917U) % (arr_3 [i_6] [i_5])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_12 = 2; i_12 < 9; i_12 += 2) 
        {
            for (signed char i_13 = 2; i_13 < 9; i_13 += 4) 
            {
                {
                    arr_41 [i_4] [i_12] [i_12] [i_4] = var_10;
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_7 [i_4] [i_12] [i_14])))));
                        var_31 = (+((+(max((1338716341U), (var_7))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_12] [i_13] [i_12])) ? (((((unsigned int) var_3)) - (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_4] [i_12] [i_13])) ? (((((/* implicit */int) (signed char)42)) - (((/* implicit */int) arr_12 [i_4] [i_12] [i_12] [i_15])))) : ((+(((/* implicit */int) var_0))))))))))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))) ^ ((+(var_10))))))))));
                        var_34 = ((/* implicit */signed char) arr_36 [i_4] [i_13] [i_15]);
                        var_35 &= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_12 [i_12 + 1] [i_4] [i_4] [i_4]))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            arr_53 [i_17] [i_16] [i_4] [i_13] [i_12] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_13 - 1])) ? (((/* implicit */int) arr_6 [i_12 - 1] [i_4] [i_4 - 2])) : (((/* implicit */int) var_6))));
                            var_36 = arr_19 [i_13 - 2] [i_13 + 1] [i_13 + 2];
                            arr_54 [i_4] [i_12] [i_13] [i_16] [i_16] [i_17] = ((/* implicit */unsigned int) var_6);
                            var_37 = arr_46 [i_17] [i_12 + 1] [i_17];
                            arr_55 [i_4] [i_12] [i_12] [i_13] [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_12 + 2])) ? (arr_44 [i_4 - 2] [i_4 - 2] [i_17] [i_4 - 2] [i_4]) : (var_4)));
                        }
                        for (signed char i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                        {
                            var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (((~(arr_28 [i_16]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_4 + 2]))))))) % (((unsigned int) arr_17 [i_16]))));
                            arr_58 [i_4] [i_4] [i_13] [i_13] [i_18] = (-(((((/* implicit */_Bool) arr_38 [i_13 - 1] [i_4 + 1])) ? (arr_38 [i_13 + 2] [i_4 - 1]) : (arr_38 [i_13 + 1] [i_4 + 1]))));
                        }
                        /* vectorizable */
                        for (signed char i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                        {
                            var_39 = ((/* implicit */signed char) arr_33 [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_19] [i_16] [i_13 + 2]))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_12] [i_12] [i_12])) != (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_16])) && (((/* implicit */_Bool) var_12)))))));
                        }
                        var_42 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))) ^ (arr_11 [i_4 - 2])))) ? (arr_11 [i_4 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4 - 2])) && (((/* implicit */_Bool) arr_11 [i_4 - 2])))))));
                        arr_61 [i_4] [i_12] [i_4] [i_16] [i_16] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(3743212882U)))) ? ((+(arr_7 [i_12 + 1] [i_4 + 2] [i_4 - 1]))) : ((-(arr_18 [i_4 + 1] [i_4 - 1] [i_12 - 1])))));
                        var_43 = ((/* implicit */signed char) ((((unsigned int) arr_10 [i_4 + 2] [i_4 + 2])) ^ (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_37 [i_4] [i_4] [i_16])) ^ (((/* implicit */int) arr_12 [i_16] [i_12] [i_12] [i_4])))))))));
                    }
                }
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned int) ((signed char) var_1));
}
