/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166973
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
    var_13 = ((/* implicit */unsigned int) var_10);
    var_14 &= ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_15 = max((((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_1 [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) ((arr_1 [i_0] [i_0 - 1]) != (arr_1 [11] [i_0 - 1])))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)33054)) >= (((/* implicit */int) arr_2 [i_0])))))));
        var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
    }
    for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */signed char) arr_3 [i_1] [i_2 - 1]);
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_3 [(signed char)2] [(signed char)2])))) ? ((-(1320350125394765863LL))) : (arr_3 [10LL] [i_2]));
                        var_19 = ((/* implicit */unsigned char) arr_5 [i_1] [i_4]);
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
        arr_13 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_1] [i_1 + 4] [i_1 + 2] [i_1]))));
    }
    var_21 += ((/* implicit */unsigned short) 62914560U);
    var_22 = max((var_8), (var_12));
}
