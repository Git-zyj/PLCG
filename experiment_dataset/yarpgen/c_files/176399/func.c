/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176399
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
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] &= ((/* implicit */int) (-(((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_3 [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1 - 1])) ? (((/* implicit */unsigned int) -1)) : (var_16))))))));
                    var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_7 [i_1 + 1] [i_0] [i_1 - 1]))))) ? ((~(((/* implicit */int) arr_7 [i_1 + 1] [i_0] [i_1 - 1])))) : (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_0] [i_1 + 1])) : (((/* implicit */int) var_2))))));
                    arr_10 [i_0] [i_1] [i_0] [i_2] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 11)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_4 [i_2] [i_1 - 1] [i_0]))))))), ((-(((((/* implicit */int) (signed char)-1)) % (var_6)))))));
                    arr_11 [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (9940359014827149924ULL)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_18);
}
