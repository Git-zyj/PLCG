/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155935
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
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_12)))))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_6)) : (var_9))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_17 = ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6285350766400497549LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)93)))))) : (var_9));
        var_18 = ((/* implicit */unsigned short) var_5);
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_21 -= ((/* implicit */short) (+((~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])) <= (((/* implicit */int) arr_5 [i_1] [i_1])))))))));
        var_22 = ((/* implicit */unsigned short) arr_5 [(short)16] [i_1 + 1]);
        arr_6 [i_1] = -11LL;
    }
    for (short i_2 = 2; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_23 -= ((/* implicit */signed char) (+(arr_7 [(_Bool)1])));
        var_24 = -7350868415176137881LL;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 3; i_3 < 12; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) var_2);
        arr_14 [(_Bool)1] [i_3 - 3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            arr_19 [i_3] [i_3] [7LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) arr_18 [i_3] [i_3 + 2])) : (((/* implicit */int) arr_18 [i_3 - 1] [i_3 - 2]))));
            var_25 = ((/* implicit */short) arr_5 [i_3 - 2] [i_3 + 1]);
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 12; i_6 += 2) 
                {
                    for (short i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_15)))) ? ((~(arr_4 [i_5]))) : (((/* implicit */unsigned long long int) 18LL))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((unsigned short) arr_21 [i_6 + 2] [i_4] [(signed char)1] [i_6]))));
                            var_28 = arr_23 [i_7] [i_6] [i_5] [i_3];
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) arr_23 [i_5] [i_4] [i_3] [i_5]);
                /* LoopSeq 3 */
                for (long long int i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [(unsigned char)1] [i_8 - 1]))))))))));
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) var_6))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_32 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_16 [i_3] [i_4] [i_5])) : (((/* implicit */int) var_11)))) >> (((((/* implicit */int) (unsigned short)47827)) - (47803)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        arr_32 [(unsigned short)4] [i_4] [(unsigned short)4] [(unsigned short)4] [i_10] = ((/* implicit */unsigned short) (+(-24LL)));
                        var_33 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_10 + 2]))));
                    }
                    for (short i_11 = 1; i_11 < 12; i_11 += 4) 
                    {
                        var_34 = ((/* implicit */int) 7394522648198234120LL);
                        arr_36 [i_3] [i_3] [i_3] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_31 [i_3 - 3] [i_3] [i_3] [i_3 + 2] [i_3] [i_4] [i_11 - 1]))));
                        var_35 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_11] [i_11] [i_11 + 1] [i_11 - 1]))) : (arr_33 [i_3 - 2] [i_11] [i_11 - 1] [i_11] [i_5] [i_11] [i_3])));
                    }
                }
                for (long long int i_12 = 4; i_12 < 13; i_12 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) (unsigned short)6239))) > (((long long int) var_0))));
                        arr_41 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_3 - 3] [i_3]))));
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) arr_40 [i_3] [i_3 + 2] [i_3] [i_3 + 1] [i_3] [i_3] [i_12 - 2]))));
                    }
                    for (unsigned short i_14 = 2; i_14 < 13; i_14 += 4) 
                    {
                        var_38 -= ((/* implicit */signed char) var_6);
                        arr_44 [i_3 - 3] [i_3] [i_3 - 3] [i_3 - 3] = ((((/* implicit */long long int) var_7)) % (arr_33 [5LL] [i_14 - 2] [i_14] [i_14] [i_14 + 1] [i_14] [i_14 + 1]));
                        var_39 = var_6;
                        var_40 = (~(var_4));
                    }
                    var_41 = -4902530540337889991LL;
                }
            }
            /* LoopNest 3 */
            for (signed char i_15 = 3; i_15 < 13; i_15 += 2) 
            {
                for (short i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        {
                            var_42 = ((unsigned short) var_14);
                            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */long long int) arr_26 [i_3] [i_15] [i_15 - 1] [i_16])) + ((-9223372036854775807LL - 1LL)))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */long long int) ((var_8) ? (var_6) : (var_6)))) : (max((((/* implicit */long long int) var_13)), (var_3)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)837)))))));
}
