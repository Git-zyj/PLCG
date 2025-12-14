/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187994
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-122))));
                    arr_10 [i_1] = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */int) (signed char)-23)) + (((/* implicit */int) (signed char)-28)))), (((/* implicit */int) (!(((/* implicit */_Bool) 677330017)))))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_2]), (arr_2 [i_0])))) ? (max((((/* implicit */unsigned int) (unsigned char)255)), (97846276U))) : (((/* implicit */unsigned int) ((int) (unsigned char)29))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_13 = 373418229;
                                var_14 = ((/* implicit */signed char) (((+(1051175261))) != (((((/* implicit */_Bool) arr_8 [i_4 + 3] [(short)8] [i_3 - 1])) ? (((/* implicit */int) ((signed char) arr_8 [(unsigned char)13] [(unsigned char)13] [i_0]))) : (((/* implicit */int) (unsigned char)0))))));
                                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)255)), (876286775276209046LL)))), (max((14715365188291638700ULL), (((/* implicit */unsigned long long int) -373418230)))))))));
                                arr_16 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (signed char)-96))) ^ (((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)255))))))) ? ((~(arr_14 [i_0] [(short)6] [(signed char)14] [i_3 + 1] [i_2]))) : (((/* implicit */unsigned long long int) ((long long int) 1686821048)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 15; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_16 = ((((/* implicit */_Bool) arr_21 [14U] [i_6] [i_6])) ? (((/* implicit */int) arr_21 [i_5 + 1] [i_6] [i_7])) : (arr_13 [i_5] [i_5] [i_6] [i_7] [i_7]));
                    var_17 ^= arr_3 [i_5 + 1];
                }
                var_18 = ((/* implicit */int) ((unsigned short) max((373418231), (1051175282))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((signed char) (signed char)-2));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
}
