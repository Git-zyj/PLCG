/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153739
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
    var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((int) ((arr_2 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6249387464735716595ULL)) ? (6249387464735716612ULL) : (((/* implicit */unsigned long long int) 0))));
    }
    var_20 = ((/* implicit */signed char) ((var_6) | (((/* implicit */unsigned long long int) (((-(-1030752524))) & (1555516473))))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-8931708049255668618LL), (((/* implicit */long long int) 1555516473))))) ? (((/* implicit */int) ((short) ((arr_2 [i_1]) ? (1897246422) : (((/* implicit */int) (signed char)0)))))) : ((-(((/* implicit */int) ((signed char) (unsigned char)82)))))));
                arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 + 1] [i_2])) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1])))) : (((((/* implicit */int) arr_0 [i_1 - 1])) + (((/* implicit */int) arr_0 [i_1 + 1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((int) var_13)) != (((/* implicit */int) var_13))));
}
