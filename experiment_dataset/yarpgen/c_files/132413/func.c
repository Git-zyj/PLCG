/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132413
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_0 [i_0 + 1]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_14 ^= ((/* implicit */long long int) ((unsigned short) arr_4 [i_1] [i_0 - 1]));
            var_15 = ((/* implicit */unsigned short) (+(arr_0 [i_0 + 2])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_3] [i_2])) + (((/* implicit */int) var_4)))) | (arr_3 [i_3]))))));
                var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_3] [i_2])) : (((/* implicit */int) (unsigned char)127))))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                arr_9 [i_3] = ((/* implicit */short) ((long long int) (+(arr_3 [i_3 + 2]))));
                var_19 -= ((/* implicit */unsigned char) (signed char)93);
            }
            var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned short)63599)) : (((/* implicit */int) (signed char)19))))));
            var_21 ^= ((/* implicit */signed char) ((unsigned long long int) 4294967295U));
        }
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) var_0))))))))));
        arr_10 [i_0] = ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_6 [i_0 + 2]))))) > (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) > (((/* implicit */int) arr_1 [i_0 - 1]))))));
        arr_11 [i_0 + 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)82)) >= (((/* implicit */int) (unsigned char)83)))))))), (((unsigned long long int) arr_7 [(unsigned char)0] [i_0] [(unsigned char)0]))));
    }
    for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
    {
        arr_14 [(short)6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_12 [i_4 + 1]), (arr_12 [i_4 + 1])))) || (((((/* implicit */_Bool) arr_12 [i_4 + 1])) && (((/* implicit */_Bool) arr_12 [i_4 + 1]))))));
        arr_15 [i_4] = ((/* implicit */unsigned short) arr_12 [(unsigned char)7]);
    }
    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
    var_24 = ((/* implicit */signed char) ((long long int) -7297327982569386332LL));
}
