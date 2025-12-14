/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131539
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
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)56), ((unsigned char)189)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_19 += (unsigned short)50007;
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_13))));
    }
    for (signed char i_1 = 2; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_5))));
        var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned short)16383))))) ? (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned short)15529)) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) (signed char)-58)) & (((/* implicit */int) var_17)))))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_5 [i_1] [i_1 - 2]))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_24 += ((/* implicit */signed char) var_0);
        var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((((/* implicit */int) (unsigned short)15512)) / (((/* implicit */int) arr_7 [(unsigned short)10] [i_2])))) : (((/* implicit */int) arr_6 [i_2 + 1]))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 3; i_3 < 24; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3 - 2] [(unsigned char)3])) && ((!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_3)))))))));
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5]))) : (arr_9 [i_5] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12010)) ? (557821667) : (((/* implicit */int) (unsigned short)55445))))))), (((/* implicit */long long int) max((((/* implicit */int) arr_8 [i_3])), ((+(((/* implicit */int) var_16))))))))))));
                    var_28 |= ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned short)50013)))))))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 1; i_6 < 23; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3 - 2])) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_13 [i_7])))))));
                                var_30 ^= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_18 [i_3] [i_6] [i_7] [i_8]))))) / (arr_21 [i_4] [i_7])));
                            }
                        } 
                    } 
                    var_31 ^= ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_16 [i_3] [(unsigned char)10] [i_4] [i_6 + 2])) | (((/* implicit */int) (signed char)-116)))));
                    var_32 ^= ((/* implicit */unsigned short) (unsigned char)170);
                    var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_3 + 1])) ? (((/* implicit */int) arr_16 [i_6] [i_4] [i_3 - 1] [i_3])) : (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (unsigned short)28557)) : (((/* implicit */int) var_1))))));
                    var_34 &= ((/* implicit */long long int) 2261380320U);
                }
                for (signed char i_9 = 4; i_9 < 24; i_9 += 2) 
                {
                    var_35 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2047)) ^ (((/* implicit */int) (unsigned short)26549)))))));
                    var_36 += ((/* implicit */signed char) arr_21 [i_3 - 2] [i_9]);
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_10 = 2; i_10 < 24; i_10 += 4) 
                {
                    var_37 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [i_3 - 1] [i_4] [i_10] [i_10] [i_10]))));
                    var_38 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)64))));
                }
                for (signed char i_11 = 2; i_11 < 23; i_11 += 2) 
                {
                    var_39 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-116))))) && (((/* implicit */_Bool) ((var_0) & (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3] [i_3] [i_4] [i_4] [i_11]))))))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 24; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            {
                                var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)13)))))));
                                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_21 [i_3] [i_11]))));
                                var_42 ^= ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)38987)) - (((/* implicit */int) (unsigned short)65527))))));
                                var_43 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_3 - 2]))) ? (((/* implicit */int) ((unsigned char) ((unsigned char) var_13)))) : (((/* implicit */int) arr_31 [i_11]))));
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_11] [i_11])) ? (max((((/* implicit */int) (unsigned char)206)), (((((/* implicit */_Bool) arr_36 [i_3] [i_11] [i_4] [i_4] [i_11] [i_11 - 2])) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) arr_33 [i_3] [i_4] [i_11])))))) : (((/* implicit */int) var_1)))))));
                    arr_40 [i_11] |= ((((/* implicit */_Bool) (unsigned short)15529)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)127)));
                    arr_41 [i_11] [i_4] &= ((/* implicit */long long int) ((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 4829413807551418745LL)) || (((/* implicit */_Bool) (unsigned char)7))))) << (((((/* implicit */int) arr_34 [i_11] [i_11] [i_11] [i_11])) + (91))))));
                }
            }
        } 
    } 
}
