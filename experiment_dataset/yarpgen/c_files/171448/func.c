/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171448
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-2)) <= (((/* implicit */int) var_5))))) : (((/* implicit */int) arr_0 [i_0])))) >= ((~((-(((/* implicit */int) arr_0 [i_0]))))))));
        arr_4 [(signed char)10] [(signed char)10] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-64)) == ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((unsigned short) arr_2 [(signed char)13] [2U])))) & (((((min((var_11), (((/* implicit */int) var_7)))) + (2147483647))) >> (((18446744073709551615ULL) - (18446744073709551615ULL)))))));
        arr_5 [(unsigned short)3] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) > (var_1)))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (var_14))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((var_9) >> (((/* implicit */int) (unsigned char)8)))) != (((/* implicit */int) arr_0 [i_1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) (signed char)-58))));
                    arr_14 [i_1] [i_2] [(signed char)10] [i_1] = ((/* implicit */unsigned short) arr_9 [i_1] [i_3 - 2]);
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (signed char)-74)) >= (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1])) && (((/* implicit */_Bool) (unsigned char)250))))) : (((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 2]))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */int) 549755811840ULL);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 4; i_4 < 8; i_4 += 2) 
    {
        var_21 -= ((/* implicit */long long int) min((arr_2 [i_4] [i_4]), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))) >= (549755811837ULL))))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_0 [i_4]))));
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 4; i_9 < 12; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((var_3) + (2147483647))) >> (((min((((/* implicit */int) (signed char)-123)), (var_11))) + (1882435957)))))) < (((max((arr_27 [(short)2] [i_6] [i_6] [i_5]), (((/* implicit */unsigned long long int) (signed char)-17)))) - ((-(541165879296ULL))))))))));
                                arr_34 [i_9] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)496)), (min((((/* implicit */unsigned int) (short)15804)), (arr_19 [i_5])))))), (arr_27 [i_5] [i_5] [i_5] [i_5])));
                            }
                        } 
                    } 
                    var_24 += ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-116))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))));
                    arr_35 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 31744U)) && ((!(((/* implicit */_Bool) ((unsigned int) (signed char)117)))))));
                }
            } 
        } 
    } 
}
