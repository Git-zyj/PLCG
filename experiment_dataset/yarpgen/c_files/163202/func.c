/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163202
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
    var_13 = ((/* implicit */short) var_7);
    var_14 = ((/* implicit */unsigned short) (-(3937734723287386953LL)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)41672)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = arr_3 [i_0];
            arr_4 [i_0] = ((/* implicit */_Bool) (-(-3937734723287386963LL)));
        }
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            arr_7 [(short)14] [i_0] = ((/* implicit */unsigned int) (-(3937734723287386951LL)));
            var_17 = ((/* implicit */short) (~((~(arr_6 [i_2 + 1])))));
            var_18 = ((/* implicit */unsigned int) (-(arr_0 [(unsigned char)2] [i_2])));
        }
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)7)), ((-(-5394730425524544926LL)))));
        arr_8 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_1 [i_0]))), (((/* implicit */unsigned int) var_8))));
    }
    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)143)));
        var_21 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(4294967285U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_3] [i_3])))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_3 - 2]))));
    }
    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 3) 
    {
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [18])) ? ((-((-(arr_10 [i_4 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)87), (((/* implicit */unsigned char) var_11))))))));
        var_24 = ((/* implicit */int) arr_12 [i_4 + 1]);
    }
}
