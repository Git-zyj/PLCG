/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136077
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)33168)) | (((/* implicit */int) (unsigned short)46719))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24676)) ? (((/* implicit */int) arr_5 [(unsigned short)12] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40854))))) : (((/* implicit */int) arr_0 [i_2])))))));
                        var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (((/* implicit */int) (unsigned short)33168)))) - (34008)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) << (((((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (((/* implicit */int) (unsigned short)33168)))) - (34008))) + (6329))) - (17))))));
                        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)33165))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)24540))));
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44825)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [(unsigned short)0]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [(unsigned short)6]))));
        var_21 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [(unsigned short)15] [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)6]))))));
    }
}
