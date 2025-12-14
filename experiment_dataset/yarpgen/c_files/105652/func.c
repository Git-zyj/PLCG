/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105652
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
    var_12 = ((/* implicit */short) ((((/* implicit */long long int) var_7)) >= (((((/* implicit */_Bool) -882402488)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) (-(12966510909315060181ULL)));
                        var_15 *= ((/* implicit */short) (~(((/* implicit */int) var_4))));
                    }
                } 
            } 
            var_16 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))));
        }
        for (short i_4 = 4; i_4 < 16; i_4 += 1) 
        {
            var_17 *= ((/* implicit */int) ((arr_1 [i_4 - 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [(short)14] [i_0]))))))));
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_4))));
        }
        for (int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            arr_13 [(unsigned char)16] [i_5] [(unsigned char)16] = max((((/* implicit */unsigned short) arr_4 [i_5] [i_5] [i_0])), (arr_9 [i_0] [i_0]));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((((/* implicit */int) arr_7 [i_5] [i_0] [i_0] [i_5])) * (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_11))));
        }
        /* LoopSeq 1 */
        for (short i_6 = 3; i_6 < 16; i_6 += 1) 
        {
            var_20 = ((/* implicit */short) (+(((int) var_3))));
            arr_17 [i_0] [i_6] = ((/* implicit */unsigned int) (unsigned char)129);
        }
        arr_18 [i_0] = ((/* implicit */unsigned short) var_11);
        /* LoopNest 2 */
        for (signed char i_7 = 3; i_7 < 16; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) arr_8 [i_0] [i_7] [i_0] [i_7] [i_7] [(signed char)2]);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_8 + 1] [i_8 + 1] [(unsigned short)12])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_8 + 1] [i_8 + 1] [6])) ? (((/* implicit */int) arr_14 [i_8 + 1] [i_8 + 1] [0])) : (((/* implicit */int) arr_14 [i_8 + 1] [i_8 + 1] [(unsigned char)14]))))) : (((((/* implicit */_Bool) arr_14 [i_8 + 1] [i_8 + 1] [(short)6])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8 + 1] [i_8 + 1] [(unsigned short)16])))))));
                }
            } 
        } 
    }
    var_23 -= ((/* implicit */signed char) var_0);
}
