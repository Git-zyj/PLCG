/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145618
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_10)))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-102)))))) : (((unsigned long long int) (unsigned char)137))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_5);
                    arr_8 [(signed char)8] [i_1] [i_2 + 1] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2] [i_2 + 2])) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (1528608414U))))))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (+(arr_5 [i_1 - 2] [i_1 - 1] [i_2 + 1]))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_13 = max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (signed char)116)) - (((/* implicit */int) var_2)))))), (((arr_9 [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                        var_14 *= ((/* implicit */unsigned long long int) var_0);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_18 [i_3] [i_3] [i_3] [i_3] [8ULL] [i_3]))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        arr_23 [i_7] [i_7] = ((/* implicit */signed char) (-((+(2147483647)))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 4) 
        {
            for (unsigned int i_9 = 3; i_9 < 17; i_9 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) arr_27 [i_9] [i_9 - 2] [i_9] [i_9]);
                    /* LoopNest 2 */
                    for (long long int i_10 = 3; i_10 < 16; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            {
                                arr_33 [i_8 - 2] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2766358881U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_24 [i_7] [(unsigned short)0])))) / (((/* implicit */int) arr_24 [i_8 - 2] [i_8 - 1]))));
                                arr_34 [i_7] [i_10] [i_10 + 1] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (-5026932313228965071LL)))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((unsigned long long int) var_4)))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) * (((((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_7] [3LL] [i_7] [(unsigned char)13])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_8 - 2]))))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_8 - 2] [(_Bool)1])) ? (((/* implicit */int) arr_24 [i_8 - 1] [i_13])) : (((/* implicit */int) arr_24 [i_8 + 1] [i_12]))));
                                arr_40 [i_7] [i_8] [(signed char)17] [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_30 [i_12] [i_9 - 2] [i_9 - 1] [i_8 - 1] [i_13] [i_9 - 1] [i_8 - 2])));
                                arr_41 [i_7] [i_8] [i_9] [(unsigned short)3] [(_Bool)1] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(18446744073709551615ULL))))));
                                var_20 *= ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_42 [i_7] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_7] [0ULL] [14ULL] [(_Bool)0]))) | (var_4));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 2; i_14 < 17; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                {
                    arr_51 [i_14] [i_15] [i_16] [i_15] = ((/* implicit */unsigned long long int) (-(arr_27 [i_14 - 2] [i_14] [i_14 - 2] [i_14 - 1])));
                    arr_52 [i_15] [i_15] [i_16] [i_16] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))));
                }
            } 
        } 
        arr_53 [i_14 - 2] = ((/* implicit */unsigned long long int) (+(((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_14] [i_14] [i_14] [(unsigned char)15] [i_14])))))));
    }
    var_21 = ((/* implicit */unsigned char) min((var_9), (max((((/* implicit */unsigned long long int) ((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120)))))), (var_4)))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) : ((-(-5026932313228965071LL)))))));
}
