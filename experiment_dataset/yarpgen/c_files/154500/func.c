/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154500
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
    var_20 = ((/* implicit */int) (unsigned short)12);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
            var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1302669626)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))), (var_11)));
            var_23 = ((/* implicit */unsigned int) arr_1 [i_0]);
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
        }
        var_25 ^= ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)227)) && (((/* implicit */_Bool) 511))))) / (((/* implicit */int) arr_0 [6])))) | (((/* implicit */int) (unsigned short)64490))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) 10968374234287250296ULL);
        var_27 = ((/* implicit */unsigned char) var_6);
        var_28 = ((/* implicit */unsigned int) min((var_28), (((((/* implicit */_Bool) (unsigned short)65524)) ? (4294967295U) : (((/* implicit */unsigned int) 1622506230))))));
    }
    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_29 = ((/* implicit */long long int) ((770735745) >= (arr_8 [i_3] [i_3])));
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -450362810)) ? (893143365U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) >= (3422258180U)))) : (arr_9 [i_3] [i_3]))))));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) : (var_2)))) ? (arr_9 [i_3] [i_3]) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_9 [9] [i_3]) : (arr_9 [i_3] [i_3])))));
        var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_8 [i_3] [4]) & (((/* implicit */int) (unsigned char)166)))) ^ (((/* implicit */int) (signed char)-8))))) ? (((/* implicit */int) var_19)) : ((~(((arr_8 [i_3] [10U]) - (((/* implicit */int) var_18))))))));
    }
    var_33 = ((/* implicit */int) (-(((((unsigned int) 2527135595U)) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned char)40)))))))));
}
