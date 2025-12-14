/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121949
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (max((var_2), (arr_0 [i_0]))))))));
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] = arr_1 [i_0];
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        arr_14 [i_3] [i_0] [(unsigned char)4] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_2] [i_3])))))), (((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0]))))) & (((/* implicit */int) (unsigned char)195))))));
                        var_18 = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_0 [i_1 - 3]))))));
                        var_19 -= arr_6 [(unsigned char)2] [i_1 - 3] [(unsigned char)8];
                        var_20 -= ((/* implicit */unsigned char) max((((((/* implicit */int) max((arr_0 [i_3 + 1]), (var_15)))) / (((/* implicit */int) arr_13 [(unsigned char)3] [i_1 + 1] [i_2] [i_3] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_0] [i_2] [i_2] [i_0]), (arr_8 [i_0] [i_2] [(unsigned char)7])))))))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        var_21 ^= var_2;
                        var_22 = ((/* implicit */unsigned char) min((var_22), (var_7)));
                        arr_19 [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 1])) >> ((((+(((/* implicit */int) max((arr_5 [i_4]), (var_4)))))) - (190)))));
                    }
                    var_23 ^= var_16;
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
    {
        arr_22 [(unsigned char)0] [i_5] = max((max(((unsigned char)128), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))), ((unsigned char)251));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) arr_25 [i_5] [i_6] [i_7])) : (((/* implicit */int) arr_13 [i_5] [(unsigned char)1] [(unsigned char)8] [(unsigned char)7] [i_5]))));
                var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_5]))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)22)) && ((!(((/* implicit */_Bool) (unsigned char)14))))));
                var_28 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)235))))));
            }
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
                var_30 -= ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_28 [i_5]))))));
            }
            for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (unsigned char i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        {
                            var_31 |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_10] [i_11] [i_11 + 1] [(unsigned char)2] [i_10]))));
                            arr_41 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */int) (unsigned char)52)) + (((/* implicit */int) (unsigned char)64)))) : (((/* implicit */int) var_2))));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_39 [i_9] [i_9] [i_9] [i_5] [i_11 + 2] [i_9])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    for (unsigned char i_13 = 3; i_13 < 8; i_13 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) max((var_33), (arr_10 [(unsigned char)7] [(unsigned char)7] [i_9] [(unsigned char)4] [i_12] [(unsigned char)7])));
                            var_34 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_40 [i_5] [i_6] [i_5] [i_12] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [(unsigned char)2]))))));
                        }
                    } 
                } 
            }
            var_35 = var_2;
            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)207)) ? ((~(((/* implicit */int) (unsigned char)170)))) : (((/* implicit */int) (unsigned char)223)))))));
        }
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
        {
            arr_49 [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (unsigned char)249)))));
            var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)51))));
            var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_17 [i_5] [(unsigned char)7] [i_14] [i_14]), (arr_25 [i_5] [i_5] [i_14]))))));
            var_39 *= max((max((max((var_6), (var_9))), (arr_40 [i_5] [i_14] [i_14] [i_14] [i_5]))), ((unsigned char)176));
        }
    }
    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_16 = 3; i_16 < 9; i_16 += 2) 
        {
            for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    {
                        arr_59 [i_15] [i_17] = arr_43 [i_18];
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_17] [i_16 - 1] [(unsigned char)1] [(unsigned char)1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_56 [i_16] [(unsigned char)9]), (arr_57 [i_17] [(unsigned char)4] [i_17] [(unsigned char)4])))) || ((!(((/* implicit */_Bool) arr_8 [(unsigned char)1] [i_16] [i_16]))))))) : (((((((/* implicit */int) var_10)) * (((/* implicit */int) arr_13 [i_15] [i_15] [i_15] [i_18] [(unsigned char)3])))) / (((/* implicit */int) ((unsigned char) (unsigned char)192))))))))));
                    }
                } 
            } 
        } 
        arr_60 [i_15] = max(((unsigned char)119), ((unsigned char)109));
    }
    var_41 = (unsigned char)172;
    var_42 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_8)) * (((/* implicit */int) ((unsigned char) var_12)))))));
    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)110)))))) || (((/* implicit */_Bool) var_0))));
    var_44 = (unsigned char)255;
}
