/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151875
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
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0 - 1]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_3 [i_0 - 3])));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_18 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 3])) && (((/* implicit */_Bool) var_11)));
                var_19 = ((/* implicit */long long int) arr_4 [i_0] [16] [i_2]);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) ((unsigned char) ((arr_9 [i_0]) - (((/* implicit */int) var_10)))));
                arr_10 [i_3] = ((/* implicit */long long int) 2478831974538162201ULL);
            }
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (unsigned int i_6 = 1; i_6 < 22; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) (+(((var_12) ? (-394762116) : (((/* implicit */int) var_12))))));
                        var_22 = ((/* implicit */_Bool) var_7);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_7 = 2; i_7 < 22; i_7 += 4) 
            {
                for (int i_8 = 1; i_8 < 20; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7]))) + (arr_17 [i_0] [i_0] [i_8] [i_8 + 2])));
                        arr_24 [i_8] = ((/* implicit */unsigned long long int) ((arr_17 [i_0 - 4] [i_4 + 1] [i_8] [i_8 + 3]) >= (arr_6 [i_0 + 1] [i_4 + 1] [i_7 - 1] [i_8 + 3])));
                    }
                } 
            } 
            arr_25 [(short)15] [(short)15] = ((((((/* implicit */int) var_11)) > (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_0] [i_0]))) : (((var_12) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))))));
        }
    }
    var_24 *= ((/* implicit */short) var_10);
    var_25 = ((/* implicit */unsigned char) -1905033924);
}
