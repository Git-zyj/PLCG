/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17529
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) var_10)))) > (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [(signed char)1] = ((/* implicit */_Bool) (-(arr_1 [i_1])));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) 437689387U);
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [2U]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [2]))) : (arr_3 [(unsigned short)1] [i_1])))))))));
            var_17 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_2 [i_0]))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_1 [(unsigned char)9]))) ? ((+(var_0))) : (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_12 [i_0] [i_2] = ((arr_1 [i_0]) << (((((((/* implicit */_Bool) var_5)) ? (arr_10 [1U] [i_2]) : (arr_10 [3U] [i_0]))) - (5287762270280733815ULL))));
            arr_13 [0U] = var_3;
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_23 [i_3] [i_2] = ((/* implicit */short) ((arr_0 [i_3 - 1]) ? (((/* implicit */int) arr_0 [i_3 - 1])) : (((/* implicit */int) var_10))));
                            var_18 = ((/* implicit */unsigned int) (_Bool)1);
                            var_19 -= ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) arr_11 [0LL] [i_2] [i_2])) == (((/* implicit */int) var_5)))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+((+(3930940478074829105ULL))))))));
                        }
                    } 
                } 
            } 
        }
        var_21 = ((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [(unsigned char)2]);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_6])) <= (((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
        var_22 = ((/* implicit */long long int) (~(arr_10 [i_6] [i_6])));
    }
}
