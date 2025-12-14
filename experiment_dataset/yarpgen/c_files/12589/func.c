/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12589
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
    var_16 = var_9;
    var_17 += ((/* implicit */signed char) (+(9223372036854775800LL)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((((((/* implicit */int) ((unsigned short) -4338639170744860789LL))) != (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))) | (9223372036854775806LL))) : (max((arr_4 [i_1] [i_1]), (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 1]))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_12 [i_3] [20LL] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))) ^ (var_12))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2] [i_3])) == (((/* implicit */int) (signed char)99)))))))) || (((/* implicit */_Bool) max((((18014398509481983LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26567))))), (((/* implicit */long long int) max(((signed char)7), (var_6)))))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) - (9223372036854775807LL))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_3] [i_2] [i_2] [i_2] [19LL] [19LL]))))))))));
                        var_20 -= ((/* implicit */unsigned short) 570471771147268072LL);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1 - 2] [i_0] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1])))))));
                        arr_16 [i_0] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_13)))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_25 [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_8 [i_0] [i_1] [i_0]));
                            arr_26 [(signed char)3] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((arr_9 [i_1] [i_1] [i_1 - 2] [i_1]) >> (((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1]))))) - (4258964576516714213LL)))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])))))));
                            arr_27 [i_5] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_9 [i_0] [(unsigned short)18] [(unsigned short)18] [(signed char)20])))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            arr_32 [i_0] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)63))));
                            arr_33 [i_1] [i_2] [i_5] [i_7] = ((signed char) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_5] [i_7]))));
                            var_22 = ((/* implicit */signed char) var_1);
                            var_23 -= ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) arr_30 [i_1] [i_1] [i_1])))));
                            var_24 = 9223372036854775800LL;
                        }
                        arr_34 [i_0] [i_0] [i_2] [i_0] [(signed char)22] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (1683413587291977875LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1])))))) ? (((/* implicit */int) ((var_11) != (var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) || (((/* implicit */_Bool) arr_6 [i_1 - 1])))))));
                        arr_35 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_15))) & ((((-(arr_9 [(unsigned short)11] [i_1 - 2] [i_1] [(unsigned short)11]))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_13 [i_1] [i_1])) : (((/* implicit */int) var_13)))))))));
                    }
                    var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) ((((var_10) ^ (var_11))) ^ (min((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0])), (9223372036854775807LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)109)))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))) : (var_4)))))));
                    arr_36 [i_2] [i_2] [i_1] [(signed char)22] = ((((/* implicit */_Bool) var_14)) ? ((~(((long long int) (unsigned short)127)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((long long int) (signed char)7))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_8 = 3; i_8 < 8; i_8 += 2) 
    {
        arr_40 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (signed char)51))) << (((((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)28))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))) - (-9223372036854775791LL))) + (24LL)))));
        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_15)) ^ (((/* implicit */int) arr_24 [i_8 - 3] [i_8 + 2])))) | (((/* implicit */int) arr_24 [i_8 - 2] [i_8 + 2]))));
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        var_27 = ((/* implicit */signed char) var_11);
        arr_43 [i_9] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_9] [i_9])) ? (arr_4 [i_9] [i_9]) : (arr_4 [i_9] [i_9])))));
        arr_44 [i_9] [i_9] = arr_14 [i_9] [i_9] [i_9];
        arr_45 [i_9] [i_9] = ((unsigned short) ((((/* implicit */_Bool) arr_21 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_0 [i_9] [i_9])));
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            for (unsigned short i_11 = 2; i_11 < 14; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    {
                        var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_11 - 2])) ? (((/* implicit */int) arr_41 [i_11 - 1])) : (((/* implicit */int) (unsigned short)65526))))) ? (((/* implicit */int) ((unsigned short) arr_7 [(signed char)22] [i_10] [i_12]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        var_29 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) ((arr_47 [i_9] [i_10] [i_11]) <= (var_11)))) > (((/* implicit */int) (signed char)15)))))));
                    }
                } 
            } 
        } 
    }
    var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (signed char)86))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)65472))));
}
