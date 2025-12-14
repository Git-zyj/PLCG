/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169216
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
    var_17 -= ((/* implicit */signed char) var_16);
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_0 [i_0]))));
        var_19 &= ((/* implicit */unsigned char) (signed char)(-127 - 1));
        var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) var_10))));
    }
    var_21 = var_0;
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)203), (var_15)))) ? (((/* implicit */int) var_15)) : (((((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) var_5)))) % (((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)-124))))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? ((-(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-6)))))) : ((-(((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) arr_0 [i_1]))))))));
        arr_7 [i_1] [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)91)) % (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_1])))) : (((/* implicit */int) min((arr_1 [i_1] [(unsigned char)9]), (arr_4 [i_1] [i_1]))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 12; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) (unsigned char)0);
                        arr_18 [i_4] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)112))));
                        var_23 = ((/* implicit */signed char) min((var_23), (arr_11 [i_1] [i_2] [i_1])));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1])))))) ? (((((((/* implicit */int) arr_13 [i_1])) + (2147483647))) << (((((((/* implicit */_Bool) arr_4 [i_2] [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_4 + 3])))) - (44))))) : (((/* implicit */int) ((unsigned char) arr_4 [i_2 - 2] [i_2 + 1])))));
                    }
                    arr_19 [i_3] [i_2] [i_1] = min(((unsigned char)176), ((unsigned char)114));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_2))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) (signed char)73)))))));
        }
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) (signed char)-126);
            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) max((arr_22 [i_1]), (var_14)))) + (2147483647))) >> ((((~(((((/* implicit */int) arr_2 [i_6])) * (((/* implicit */int) (signed char)-4)))))) - (885)))));
        }
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
        {
            arr_29 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-68)) != (((/* implicit */int) ((signed char) (signed char)125)))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_33 [i_7]))));
                        var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (signed char)29))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (unsigned char)53))))) ? (((/* implicit */int) arr_27 [i_8] [i_7])) : (((/* implicit */int) ((signed char) (unsigned char)22)))))) ? (((((((/* implicit */_Bool) arr_25 [i_1] [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (unsigned char)48)))) >> (((((/* implicit */int) arr_21 [i_8] [(signed char)1] [i_1])) - (97))))) : (((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */int) arr_34 [i_1] [i_8 + 2] [i_8] [i_8])) + (98))) - (8)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_10 = 4; i_10 < 10; i_10 += 3) 
        {
            arr_37 [i_1] [i_1] [i_10] &= ((/* implicit */unsigned char) (signed char)-79);
            arr_38 [i_10] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_13 [i_10 - 1]), (min((arr_31 [i_1] [i_10] [i_10]), (arr_0 [i_1]))))))));
            arr_39 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_26 [i_10] [i_10 + 3]))) ? (((((((/* implicit */int) var_5)) / (((/* implicit */int) arr_33 [i_1])))) * (((/* implicit */int) var_4)))) : (((((/* implicit */int) (signed char)-99)) * (((((/* implicit */int) (unsigned char)95)) + (((/* implicit */int) (unsigned char)53))))))));
        }
    }
}
