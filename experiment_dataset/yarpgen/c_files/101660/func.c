/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101660
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */int) max((min((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) arr_2 [i_0 - 2] [i_0 - 1])))), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)201)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_19 |= ((/* implicit */unsigned char) (~(var_12)));
                    arr_8 [4LL] &= ((/* implicit */int) ((unsigned short) arr_7 [i_0 + 1]));
                }
                var_20 = (unsigned char)201;
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)41164)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) : (262143LL))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0]))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)56))))) : (((unsigned int) var_11))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 1]))))) <= (arr_6 [(unsigned char)8] [i_1 + 3]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3 - 3])) || (((/* implicit */_Bool) var_0))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)201))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_4 + 1])) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_3 - 1] [16])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40824))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                for (unsigned short i_6 = 4; i_6 < 12; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_25 = (-(((/* implicit */int) (!(((/* implicit */_Bool) 579548699U))))));
                            var_26 = (~(4091154203U));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 855809366)) || (((/* implicit */_Bool) (unsigned char)199))));
                            var_28 &= ((/* implicit */unsigned char) (unsigned short)18760);
                        }
                    } 
                } 
            } 
            var_29 = ((unsigned char) (unsigned char)116);
        }
        for (unsigned int i_8 = 2; i_8 < 11; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                var_30 = ((/* implicit */unsigned char) max((var_30), (((unsigned char) arr_18 [i_3 + 3] [2] [i_8 + 1] [i_3 + 2]))));
                var_31 -= ((/* implicit */long long int) ((arr_19 [i_8] [i_9] [i_8 - 1] [i_3] [i_8]) != (arr_19 [i_3] [i_3] [i_8 - 2] [i_3] [i_8 - 1])));
                var_32 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)56639))));
            }
            arr_27 [i_8] = ((/* implicit */unsigned char) (~(((int) arr_17 [11] [i_3] [i_8] [i_8]))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                for (long long int i_11 = 1; i_11 < 11; i_11 += 1) 
                {
                    {
                        var_33 = ((/* implicit */int) var_1);
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_3))));
                            arr_35 [i_12] [i_8] [11U] [i_8] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) arr_24 [i_3]))));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_12 [12])))) ? (((/* implicit */int) arr_14 [i_8 + 3] [i_8 - 2] [i_8 + 1])) : (arr_33 [i_3] [i_8 - 2] [i_8] [i_11 - 1] [i_12])));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_3 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_11 + 1]))) : (((((/* implicit */_Bool) arr_18 [i_3] [i_8] [i_11] [i_12])) ? (arr_1 [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_3 + 1] [i_8 - 1] [i_10] [i_8])))))));
                        }
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) var_13))));
                        var_38 |= ((4691117085980912210LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (int i_13 = 2; i_13 < 13; i_13 += 3) 
        {
            var_39 = ((/* implicit */unsigned int) 9223372036854775803LL);
            var_40 |= ((/* implicit */unsigned int) ((unsigned short) var_13));
        }
        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
        {
            var_41 = ((unsigned char) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) arr_30 [i_3 + 3] [i_3] [i_3])) : (((/* implicit */int) var_11))));
            var_42 = ((/* implicit */unsigned char) (-(arr_13 [i_3 + 3])));
        }
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) /* same iter space */
        {
            arr_45 [i_3] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_3 - 3])) ? (arr_1 [i_3 - 3]) : (arr_1 [i_3 - 3])));
            arr_46 [i_15] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)24717)) : (arr_28 [i_3 - 1] [i_3])));
            arr_47 [i_3] [i_15] [i_15] &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [2U] [i_3 - 2] [i_3 + 3] [i_3 - 1]))));
        }
    }
    var_43 = ((/* implicit */unsigned short) var_1);
}
