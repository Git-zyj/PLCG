/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17063
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max(((_Bool)1), ((!((_Bool)1)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_17 = (+(((/* implicit */int) var_6)));
                                var_18 = ((/* implicit */int) arr_7 [(signed char)10]);
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] [(unsigned char)0] [(signed char)0] = ((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) arr_1 [i_0 + 2]))), (min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)14] [i_0 + 2])) ? ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0])))));
    }
    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        var_19 ^= ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))) != (arr_7 [i_5])))), (max((((/* implicit */unsigned short) var_4)), (arr_2 [i_5] [i_5] [i_5])))));
        var_20 = min((((/* implicit */int) arr_6 [i_5] [i_5] [i_5])), ((+(((/* implicit */int) arr_6 [i_5] [i_5] [i_5])))));
        var_21 = ((/* implicit */int) (((+(((/* implicit */int) arr_4 [i_5] [i_5] [(_Bool)1])))) != (((/* implicit */int) arr_6 [i_5] [i_5] [i_5]))));
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5])) ? ((~(arr_7 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))))) > (((/* implicit */int) arr_1 [i_5]))))))));
    }
    for (unsigned short i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_6] [(unsigned short)4] [i_6] [i_6 - 3] [i_6])) < ((~(((/* implicit */int) var_6))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                {
                    var_24 = ((/* implicit */long long int) arr_19 [6LL] [i_7]);
                    var_25 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_21 [(unsigned short)2] [i_6 + 2] [i_6 - 2])) + (((/* implicit */int) arr_21 [i_8] [i_6 - 2] [i_6 - 2])))), (((arr_9 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 1]) ? (((/* implicit */int) arr_1 [i_6 - 1])) : (((/* implicit */int) arr_9 [i_6] [i_6] [i_6 - 1] [(_Bool)1] [i_6 - 1]))))));
                    arr_22 [i_8] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >> (((((/* implicit */int) max((arr_18 [i_6]), (((/* implicit */unsigned char) arr_21 [i_6] [(unsigned char)13] [i_6]))))) - (33)))))), ((~(var_7)))));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 3; i_9 < 21; i_9 += 1) /* same iter space */
    {
        var_26 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_9 - 3] [i_9 + 1] [i_9 + 1])) ^ (((/* implicit */int) arr_21 [i_9 - 2] [i_9] [i_9]))))) ? (((((((/* implicit */_Bool) var_11)) ? (arr_13 [i_9 + 1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9]))))) | (((/* implicit */long long int) 2996293793U)))) : (var_7));
        var_27 = ((/* implicit */_Bool) min((arr_8 [i_9 - 2] [i_9 - 2]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_9 - 3] [i_9 - 1] [i_9])))))));
        var_28 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) == (5243671076324932126LL));
    }
}
