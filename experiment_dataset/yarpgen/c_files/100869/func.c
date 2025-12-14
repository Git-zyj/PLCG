/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100869
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (arr_0 [i_0] [i_0])));
        var_16 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_2 [3] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) / ((+(((/* implicit */int) arr_0 [14] [i_0]))))))) * (((((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)7])) ? (281474976710655ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) / ((-(var_0)))))));
        var_17 ^= (((~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) arr_1 [i_0] [i_0]))))))) > (((((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_0 [0U] [i_0])))) / ((-(var_10))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((_Bool) var_0));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_1] [(short)0] [i_1] &= ((/* implicit */int) arr_7 [(signed char)24]);
                    var_18 += ((/* implicit */unsigned long long int) (~((-((-(((/* implicit */int) arr_10 [i_3] [i_2 + 1]))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_1] [15ULL]);
        var_20 = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_1]);
    }
    var_21 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
    var_22 -= ((/* implicit */signed char) var_2);
}
