/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125232
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (var_6))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
        var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) || (((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_10 [(_Bool)1] [i_0 - 2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_2 [i_0] [19LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (6129090670064559336ULL)));
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_1 + 1])))) : ((+(((/* implicit */int) var_5))))));
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) << (((((/* implicit */int) arr_0 [i_0 - 2])) - (20292)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 23; i_3 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) arr_11 [i_3 + 1]);
        var_14 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_12 [i_3] [i_3]))))));
        var_15 |= ((/* implicit */signed char) arr_12 [i_3] [i_3]);
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        arr_15 [i_4] [(unsigned short)2] &= ((/* implicit */unsigned long long int) ((((arr_11 [i_4]) << (((((/* implicit */int) var_2)) - (31589))))) == (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_4])) > (((/* implicit */int) arr_9 [i_4] [i_4])))))) - (arr_1 [i_4] [(signed char)2]))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4]))));
    }
    var_17 = ((min((((((/* implicit */long long int) 65535U)) < (var_4))), (((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) ? (min((((/* implicit */int) min(((short)0), (((/* implicit */short) var_1))))), (((((/* implicit */int) var_1)) * (((/* implicit */int) (short)-1)))))) : (((/* implicit */int) var_8)));
    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_3), (var_8))))))) ? (min((((((/* implicit */int) var_5)) * (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) var_9))));
}
