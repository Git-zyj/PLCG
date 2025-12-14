/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116888
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
    var_19 -= ((/* implicit */unsigned long long int) (unsigned short)45934);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        var_20 -= ((/* implicit */short) var_4);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 + 3])), (var_4)))) << (((((arr_8 [i_0] [i_1] [i_1]) + (6063001760145915681LL))) - (25LL)))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) max(((unsigned short)7097), (((/* implicit */unsigned short) (_Bool)1))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */long long int) arr_3 [i_0] [4LL] [i_0 + 4])) & (((long long int) min((((/* implicit */int) arr_7 [i_0] [i_0])), (arr_4 [i_0 + 1] [(unsigned short)3] [i_0 - 1]))))));
        arr_10 [(unsigned char)0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (10167050812534476033ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_23 -= ((/* implicit */long long int) (unsigned char)221);
        arr_13 [i_3] [i_3] &= ((/* implicit */unsigned short) arr_11 [i_3]);
        arr_14 [i_3] [11ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)34)) ? (((((/* implicit */_Bool) 650612358U)) ? (1739278410) : (835537904))) : (((/* implicit */int) (unsigned short)19613))));
    }
}
