/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112403
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
    var_19 = ((/* implicit */short) -596711412);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [(signed char)0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 596711407)) || (((/* implicit */_Bool) (unsigned char)222)))) ? (arr_1 [i_0 - 3] [i_2 - 1]) : (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_2 [i_1]))))))) | (((/* implicit */int) ((_Bool) ((1231137566) + (((/* implicit */int) (unsigned char)247))))))));
                    arr_8 [i_2] [i_1] [9] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_10)), (arr_6 [i_0] [i_1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_2 + 1] [i_0 - 3] [i_0]))))));
                    arr_9 [i_0 - 3] [i_1] = ((/* implicit */signed char) 1921082344);
                    var_20 ^= ((/* implicit */short) ((int) (!(((/* implicit */_Bool) 16711680)))));
                }
            } 
        } 
        var_21 |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [(signed char)20] [i_0] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_5 [16] [i_0] [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) (unsigned short)3))))));
    }
    for (signed char i_3 = 3; i_3 < 21; i_3 += 4) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */short) (-(arr_1 [i_3 - 2] [i_3 - 2])));
        var_22 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_12 [(unsigned char)3])) : (((/* implicit */int) arr_12 [i_3]))))) ? (((/* implicit */int) arr_2 [(short)6])) : (((/* implicit */int) arr_3 [i_3] [i_3] [i_3])))) >> (((2123146993) - (2123146978)))));
    }
    for (signed char i_4 = 3; i_4 < 21; i_4 += 4) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [16] [i_4 - 1] [i_4 + 1] [i_4])) >> (((((/* implicit */int) arr_5 [(signed char)8] [i_4] [i_4 - 1] [i_4])) - (19)))))), (arr_0 [i_4])));
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) var_7);
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((((/* implicit */int) (signed char)15)) / (((/* implicit */int) arr_15 [i_4 - 2])))), (max((((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) arr_5 [(unsigned char)8] [i_4] [i_4] [i_4 - 1])) : (((/* implicit */int) var_11)))), (((((/* implicit */int) (unsigned short)45231)) / (((/* implicit */int) (signed char)15)))))))))));
        arr_20 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) & ((-(max((arr_0 [i_4]), (arr_0 [i_4])))))));
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) arr_3 [i_4] [i_4 + 1] [i_4]);
    }
    var_24 = ((/* implicit */signed char) var_3);
}
