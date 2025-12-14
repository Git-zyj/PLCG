/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152279
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_20 |= (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) / (3846163465U)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(3846163467U)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_21 ^= (!(((/* implicit */_Bool) ((long long int) var_12))));
            arr_10 [i_2] = ((/* implicit */long long int) arr_0 [i_1]);
        }
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_22 ^= ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_3] [i_1]))) | (448803831U));
            var_23 *= (!(((/* implicit */_Bool) 448803831U)));
            var_24 &= ((/* implicit */long long int) arr_5 [5ULL]);
            arr_15 [i_3] = ((/* implicit */unsigned char) var_14);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_1] [i_4] [i_1])) + (((/* implicit */int) (!(var_14))))));
            var_26 = ((/* implicit */int) ((_Bool) var_18));
            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_1])) ? (((/* implicit */unsigned int) arr_3 [i_1] [i_1])) : (arr_12 [i_4] [i_1] [i_1])));
        }
        arr_19 [i_1] &= ((/* implicit */unsigned long long int) (+(arr_8 [i_1] [i_1] [i_1])));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [(signed char)1] [i_1])) : (arr_7 [i_1] [i_1])));
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (((((/* implicit */long long int) ((/* implicit */int) var_16))) + (var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) > (448803831U))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (3846163459U)))) ? ((-(3349638553270926194ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
}
