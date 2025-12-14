/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167437
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (-(arr_3 [i_1 - 2] [12U])));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) 973684220673918962ULL))));
            var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-32))));
        }
        var_16 = ((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1]);
        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1 + 1])) & (((/* implicit */int) arr_6 [i_1 + 1]))));
    }
    var_17 = ((int) (-(((/* implicit */int) var_4))));
    var_18 = ((/* implicit */signed char) var_9);
    var_19 = ((/* implicit */unsigned char) (!(((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (var_3)))))));
}
