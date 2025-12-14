/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114226
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) (-(((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [(signed char)6] [1LL])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1])))))));
            var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])));
            arr_6 [(signed char)6] [i_0] [0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)0] [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                var_21 = ((/* implicit */int) var_0);
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1]))));
            }
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                var_23 -= ((/* implicit */short) arr_8 [i_0] [i_1] [i_3]);
                var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3]))) : (var_17)))));
                var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_14))))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_3])) : (((/* implicit */int) arr_4 [i_0]))))));
            }
        }
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [3U])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))));
        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_7 [i_0] [i_0 + 1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    }
    var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((((/* implicit */long long int) var_11)), (var_0))))))));
}
