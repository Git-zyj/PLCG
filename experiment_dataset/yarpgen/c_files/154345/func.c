/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154345
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
    var_14 = ((/* implicit */int) ((unsigned long long int) var_8));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            arr_12 [i_0 - 3] [i_1 - 2] [i_2 + 2] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1])) != (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 2]))));
                            var_15 += ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_2 + 1] [i_3 - 2] [i_4]))))) : (((/* implicit */int) (unsigned short)41045))));
                            arr_13 [i_4] [i_1] [i_2 - 1] [i_1] [i_0 - 3] = ((/* implicit */signed char) ((int) (unsigned short)41045));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_17 [i_1] [i_3 - 2] [i_2 - 1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1 + 2]))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((-(((/* implicit */int) arr_11 [i_0 - 3] [i_1 - 1])))) & (((/* implicit */int) arr_8 [i_0 - 3] [i_1 + 1] [i_2 + 2] [i_3 - 1])))))));
                        }
                        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((8960853574707956149LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40481)))))))) + ((((!(((/* implicit */_Bool) (unsigned short)11520)))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0 - 3]))))))));
                    }
                    for (unsigned char i_6 = 3; i_6 < 23; i_6 += 1) 
                    {
                        arr_22 [i_0 + 1] [i_1] [i_2 + 2] [i_6 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((862634934) < (((/* implicit */int) arr_3 [i_2 + 2] [i_6 + 1])))))) ? (((/* implicit */int) max((arr_2 [i_0 - 3] [i_6 - 1]), (((/* implicit */unsigned short) arr_7 [i_0 + 1] [i_2 + 2] [i_6 - 2]))))) : (max((((/* implicit */int) arr_16 [i_0 - 2] [i_1 + 2] [i_1] [i_1] [i_2 + 2] [i_6 - 3])), (arr_0 [i_0 - 3])))));
                        var_18 = ((/* implicit */unsigned long long int) (~((-((-(((/* implicit */int) var_2))))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((((((/* implicit */int) arr_9 [i_2 - 1] [i_1 - 2])) - (((/* implicit */int) arr_19 [i_1 - 2] [i_2 - 1] [i_6 - 2])))) + (2147483647))) >> (((/* implicit */int) var_12)))))));
                        var_20 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)38461))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_6 + 1]))) & (arr_15 [(unsigned char)16])))));
                        var_21 = ((/* implicit */int) 12253268276668546047ULL);
                    }
                    for (short i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        var_22 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) max((((((/* implicit */long long int) ((((-1) + (2147483647))) >> (((((/* implicit */int) arr_23 [i_1] [i_2 - 1] [i_1 + 1] [i_1])) - (18653)))))) > (arr_5 [i_1]))), (((((/* implicit */int) arr_4 [i_0 - 3] [i_2 + 1] [i_7 - 1])) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) < (51206159592817560LL))))))))) : (((/* implicit */unsigned char) max((((((/* implicit */long long int) ((((-1) + (2147483647))) >> (((((((/* implicit */int) arr_23 [i_1] [i_2 - 1] [i_1 + 1] [i_1])) - (18653))) - (17924)))))) > (arr_5 [i_1]))), (((((/* implicit */int) arr_4 [i_0 - 3] [i_2 + 1] [i_7 - 1])) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-23))) < (51206159592817560LL)))))))));
                        arr_27 [i_1] = ((/* implicit */short) (signed char)-23);
                    }
                    arr_28 [i_1] [i_1 - 2] [i_1 + 2] [i_1] = (signed char)-39;
                    var_23 = (-(((arr_14 [i_2 + 3] [i_1 + 2] [i_0 - 2]) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1] [i_2] [i_1] [i_2] [i_1 - 2])))))))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_13))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 2; i_8 < 14; i_8 += 1) 
    {
        for (unsigned char i_9 = 1; i_9 < 14; i_9 += 2) 
        {
            {
                arr_33 [12LL] &= (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_8 - 1]))))) > (((/* implicit */int) max(((unsigned short)35511), (arr_19 [i_8 + 2] [i_8] [i_9 + 1]))))))));
                arr_34 [i_8 - 2] [i_8 + 1] [i_8] = ((((int) ((4095) <= (((/* implicit */int) arr_21 [i_8]))))) | (((/* implicit */int) (unsigned short)40288)));
            }
        } 
    } 
}
