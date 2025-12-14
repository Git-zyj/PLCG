/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101414
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_4 [i_0 - 1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) (signed char)-91);
                                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-2))))) ? (((/* implicit */int) ((((long long int) (signed char)75)) < (((/* implicit */long long int) (+(-850675288))))))) : (((/* implicit */int) (!((_Bool)1))))));
                                var_18 = ((/* implicit */long long int) arr_11 [i_0 + 1] [i_0 + 1] [i_1] [i_3]);
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_1] = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-91)))))) > (((((/* implicit */_Bool) var_3)) ? (arr_15 [(signed char)0] [i_1] [i_1] [i_1] [(signed char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
    } 
    var_19 = var_2;
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_22 [18LL] [i_5] [i_6])) ^ (((/* implicit */int) arr_22 [i_5] [2U] [i_5])))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) ((min((arr_23 [i_5]), (((/* implicit */long long int) (_Bool)1)))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))) - (((/* implicit */int) (_Bool)1)))))));
                var_22 = ((/* implicit */long long int) (-(((unsigned int) (short)127))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_16 [i_7] [i_7] [i_7] [i_7] [(short)9])))) ? (((/* implicit */int) arr_2 [i_7])) : (((/* implicit */int) (_Bool)1))));
        arr_26 [(short)10] [(short)10] &= ((/* implicit */long long int) arr_13 [(signed char)10] [(signed char)10] [(unsigned short)2]);
    }
    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) ((long long int) arr_24 [2U] [2U]));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_11 [i_8] [14LL] [(short)16] [(unsigned char)14]))));
        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((-(2039213669U))) - (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (2545602687U))))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        var_27 -= ((/* implicit */signed char) (-(2039213669U)));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_9]))) : (arr_30 [i_9])));
        var_29 = ((/* implicit */long long int) arr_30 [i_9]);
    }
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        var_30 = ((/* implicit */unsigned char) var_9);
        arr_33 [i_10] = ((/* implicit */short) arr_22 [i_10] [i_10] [i_10]);
        arr_34 [i_10] [i_10] = ((/* implicit */signed char) ((unsigned short) (_Bool)0));
        arr_35 [i_10] [i_10] = ((/* implicit */short) -6);
    }
}
