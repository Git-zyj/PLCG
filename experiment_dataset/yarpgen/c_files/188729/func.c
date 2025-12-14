/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188729
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
    var_17 = ((/* implicit */short) var_15);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) (+(min((((/* implicit */int) arr_0 [i_0])), ((+(((/* implicit */int) arr_0 [i_0]))))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned int) ((_Bool) ((int) ((arr_4 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4] [i_2]))) : (arr_2 [i_4])))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned short) ((_Bool) 3028449084647961611LL))), (max((arr_10 [i_1] [i_2] [10LL] [i_1] [i_5]), (arr_10 [i_5] [i_4] [i_3] [i_2] [i_1]))))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((12465330496307408519ULL) <= (((/* implicit */unsigned long long int) ((arr_9 [i_5]) ^ (((/* implicit */unsigned int) arr_7 [i_3] [i_3]))))))))) != (max((15759920542875788594ULL), (((/* implicit */unsigned long long int) 3215673244U))))));
                                var_23 = ((/* implicit */short) ((((_Bool) (+(((/* implicit */int) arr_4 [i_4]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_5 [i_1])))))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_1] [i_2] [i_2] [i_1] [i_4]))))) ^ (arr_9 [i_1])))));
                                var_24 = ((_Bool) (+(arr_7 [i_1] [(unsigned short)4])));
                            }
                        } 
                    } 
                    var_25 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_3] [i_2] [i_1] [i_1])), ((+(9882623867846074589ULL)))))));
                    arr_16 [i_2] &= ((/* implicit */_Bool) ((long long int) (+(((((/* implicit */_Bool) 12465330496307408519ULL)) ? (2686823530833763034ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12796))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((unsigned char) max((arr_8 [i_1] [i_7] [i_8] [i_9]), (arr_8 [i_1] [i_1] [i_8] [i_9]))));
                                var_27 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_1] [i_6] [i_7] [i_8] [i_9])) ? (arr_9 [i_1]) : (arr_9 [i_8]))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */unsigned long long int) 2188293859714154117LL)) : (11314011578992433073ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)39))) ? (((/* implicit */int) arr_14 [i_1] [i_6] [i_7] [1U])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_6] [i_7] [i_7])))))));
                }
            } 
        } 
        var_29 -= (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) 1464735791179981909ULL))), (arr_27 [i_1] [i_1] [6LL] [(unsigned short)12] [i_1])))));
    }
    var_30 = ((/* implicit */unsigned int) ((((unsigned long long int) ((unsigned short) var_3))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((11314011578992433073ULL) * (((/* implicit */unsigned long long int) var_13)))))))))));
}
