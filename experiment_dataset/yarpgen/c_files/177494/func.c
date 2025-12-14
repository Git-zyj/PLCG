/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177494
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)30716))));
    var_21 = ((/* implicit */int) (unsigned short)30716);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */_Bool) (((~((~(((/* implicit */int) arr_0 [i_0] [i_0])))))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) < (max((-5298670587047193128LL), (((/* implicit */long long int) arr_1 [i_0])))))))));
        var_22 = ((/* implicit */unsigned int) (-(((((((((((/* implicit */_Bool) (unsigned short)30737)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34842))))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30693)))))))));
        var_23 ^= ((/* implicit */unsigned int) var_6);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_24 &= ((/* implicit */unsigned short) (short)-15782);
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_12 [i_1] [i_2] = (signed char)125;
                        var_25 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_6 [i_1]))))));
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_15 [i_5] [i_3] [15U] [i_2] [i_1] [i_1] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (-(arr_8 [i_3] [i_5])))) : ((-(((arr_13 [(signed char)13] [(signed char)13]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33918))))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_13) != (((/* implicit */long long int) arr_1 [i_5])))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-57)))) : (((((/* implicit */_Bool) (unsigned short)30694)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_3] [i_2])))))))) : (((((/* implicit */_Bool) 3086213082U)) ? (max((((/* implicit */unsigned int) arr_10 [i_5] [10U] [i_2] [i_1] [i_1])), (550818659U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_2] [i_3])))))))));
                    }
                    arr_16 [i_1] [i_2] [i_3] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                }
            } 
        } 
    }
}
