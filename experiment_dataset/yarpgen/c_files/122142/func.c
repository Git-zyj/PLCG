/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122142
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
    var_13 -= ((((((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (short)384)) && (((/* implicit */_Bool) var_11))))))) ? (max((((/* implicit */unsigned long long int) var_10)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) > (var_0))))));
    var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((((/* implicit */int) var_10)) + (89))) - (4)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31))) : (134217727U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */unsigned long long int) var_11)) * (var_3))) : (((/* implicit */unsigned long long int) 1148417904979476480LL))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_15 = (+(4086641285402205318LL));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_16 += ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_0]))));
            var_17 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
            arr_7 [i_0] [5LL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))) : (arr_4 [i_0 + 1] [16LL] [5ULL])));
            arr_8 [(signed char)1] [i_0] = ((/* implicit */long long int) ((_Bool) (unsigned char)12));
        }
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1148417904979476506LL))))))))));
            var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_2])) ? ((-((+(var_3))))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_9 [i_0])))), (((/* implicit */int) ((((/* implicit */int) (signed char)-111)) != (((/* implicit */int) (_Bool)1))))))))));
            var_19 ^= ((/* implicit */unsigned short) arr_5 [i_0] [i_2]);
            var_20 = ((/* implicit */unsigned int) var_1);
        }
    }
    var_21 = ((/* implicit */unsigned int) max((var_21), (var_0)));
}
