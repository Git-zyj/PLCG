/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169979
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned short) ((var_4) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2]))));
        var_19 *= ((/* implicit */unsigned short) arr_0 [0LL] [i_0 - 3]);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (unsigned short)19893))))));
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_22 &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)35687)) : (((/* implicit */int) var_9))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [(_Bool)1])) ? (((/* implicit */int) arr_2 [8U])) : (((/* implicit */int) var_8))))) ? (arr_8 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) 1139639513)))))));
                    var_24 = ((/* implicit */short) (((-(((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 3])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) (unsigned char)238)))))));
                }
            }
            /* LoopNest 2 */
            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        arr_18 [i_1] = ((/* implicit */signed char) ((unsigned char) (~(9U))));
                        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [i_0] [2ULL] [i_5] [i_5] [i_4 - 1] [i_0 - 2]))));
                        var_26 = ((/* implicit */signed char) ((var_3) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45643)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                    }
                } 
            } 
            arr_19 [(unsigned char)6] [i_0 + 2] [(unsigned char)6] |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21974))) - (2705573563U)));
            arr_20 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
        }
        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */_Bool) ((unsigned short) -1812134297));
            arr_23 [i_6] = ((/* implicit */_Bool) ((signed char) 870202955U));
        }
        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 3) /* same iter space */
        {
            var_28 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) var_1)) : (arr_12 [3] [(signed char)3] [i_0] [i_0])))));
            arr_26 [4] [i_7 + 3] [(signed char)4] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7] [4ULL] [i_0]))) % (((((/* implicit */_Bool) 10364277482064992059ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_24 [i_0])))));
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_34 [i_0] [i_7] [i_7] [i_9] = ((/* implicit */long long int) (-(var_2)));
                            var_29 = ((/* implicit */signed char) var_18);
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned short) ((var_3) ? (((((/* implicit */_Bool) arr_5 [i_7] [i_7])) ? (((/* implicit */unsigned int) -1139639513)) : (arr_9 [i_0] [i_7] [i_7 + 1] [i_7] [i_0]))) : (((/* implicit */unsigned int) arr_25 [i_0 + 2] [i_7 - 1] [i_7]))));
        }
        for (short i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            arr_37 [i_11] = (unsigned char)116;
            arr_38 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-114642197)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64839)) || (((/* implicit */_Bool) (unsigned char)132))))) : (((/* implicit */int) (unsigned short)19893))));
        }
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_31 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_15)) ? (18322989112585281178ULL) : (((/* implicit */unsigned long long int) 13U))))));
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) arr_7 [i_13] [i_0 + 2]))));
                    var_33 &= ((/* implicit */signed char) (short)-9086);
                    var_34 = ((/* implicit */long long int) (+(((int) (signed char)41))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned int) var_10);
    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((var_2) * (((((-453945098) / (-1139639510))) * (((((/* implicit */int) (unsigned char)177)) / (((/* implicit */int) var_5)))))))))));
}
