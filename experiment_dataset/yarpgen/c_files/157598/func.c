/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157598
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
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [(signed char)10] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2] [i_3]))));
                        var_18 = ((/* implicit */long long int) ((int) ((unsigned short) 3141560157U)));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 4; i_5 < 15; i_5 += 4) 
                        {
                            {
                                arr_20 [i_2] [(short)0] [i_2] [(_Bool)1] [8] [i_2] |= ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) arr_14 [0ULL] [i_2] [i_4] [i_2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)9])))))))));
                                arr_21 [i_1] [8] [i_2] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0] [i_1] [i_1 - 1] [i_4] [i_5 - 4])) ? (-1316247788250963206LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_1 + 2] [i_1] [i_5 - 2]))))), (((/* implicit */long long int) ((3141560153U) << (((arr_11 [i_1] [(_Bool)0] [2] [i_2] [i_2]) + (1247552810))))))))) : (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0] [i_1] [i_1 - 1] [i_4] [i_5 - 4])) ? (-1316247788250963206LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_1 + 2] [i_1] [i_5 - 2]))))), (((/* implicit */long long int) ((3141560153U) << (((((arr_11 [i_1] [(_Bool)0] [2] [i_2] [i_2]) + (1247552810))) - (761681532)))))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [i_1] = ((/* implicit */int) (((+(arr_19 [(unsigned short)11] [i_1] [i_2]))) <= (((/* implicit */int) ((-696170928) == (((/* implicit */int) (signed char)-35)))))));
                }
            } 
        } 
    } 
    var_19 = (((+((+(((/* implicit */int) (unsigned short)65535)))))) < ((~(((/* implicit */int) ((7236925465085368069LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184)))))))));
    var_20 = ((/* implicit */short) (+((~(min((3141560153U), (((/* implicit */unsigned int) var_15))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_6 = 4; i_6 < 15; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                {
                    var_21 = (~(((/* implicit */int) arr_29 [i_6 + 1] [i_6 + 1] [i_6 + 1] [(signed char)5])));
                    arr_32 [i_7] = ((/* implicit */short) ((((/* implicit */int) (!(arr_27 [i_7] [i_7] [(signed char)13])))) >= (((((/* implicit */int) arr_26 [i_6])) + (((/* implicit */int) arr_25 [(short)14]))))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */int) arr_30 [i_6] [(unsigned short)12] [i_6] [i_6 + 1])) : (((/* implicit */int) (signed char)-125)))) - (((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_11))))));
        arr_33 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6])) ? (arr_31 [i_6] [13ULL]) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-20)) <= (((/* implicit */int) var_12))))) : (((/* implicit */int) ((_Bool) arr_23 [i_6] [i_6])))));
        arr_34 [i_6] [i_6] = ((/* implicit */signed char) (+(arr_28 [i_6 + 1])));
        arr_35 [i_6] = ((/* implicit */short) (!(arr_27 [i_6] [(short)12] [i_6])));
    }
    for (short i_9 = 4; i_9 < 15; i_9 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) -1199598983232598092LL))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(arr_43 [i_10]))))));
                    }
                } 
            } 
        } 
        arr_47 [i_9] |= (~(((/* implicit */int) arr_24 [i_9])));
        var_25 = min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [(unsigned short)7] [(unsigned char)15]))))) | (((/* implicit */int) ((((/* implicit */int) arr_37 [i_9])) >= (((/* implicit */int) arr_42 [i_9] [i_9] [i_9]))))))), (min((((((/* implicit */_Bool) arr_30 [i_9] [(unsigned short)2] [i_9] [i_9 - 4])) ? (((/* implicit */int) arr_27 [i_9] [2ULL] [i_9])) : (((/* implicit */int) arr_46 [i_9] [i_9] [i_9])))), (((/* implicit */int) ((_Bool) var_13))))));
        arr_48 [i_9] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_17))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_13 = 4; i_13 < 17; i_13 += 2) 
    {
        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) var_17))));
        arr_51 [i_13] = ((/* implicit */signed char) ((3141560157U) << (((arr_50 [i_13 - 2]) + (1058249903)))));
    }
    for (int i_14 = 2; i_14 < 16; i_14 += 4) 
    {
        arr_54 [i_14] = ((/* implicit */int) ((((((/* implicit */int) (signed char)120)) + (((/* implicit */int) (signed char)-125)))) < (((/* implicit */int) max((((short) (signed char)-6)), (((/* implicit */short) arr_49 [i_14])))))));
        arr_55 [i_14] = ((/* implicit */int) arr_29 [i_14] [i_14] [i_14] [i_14]);
    }
}
