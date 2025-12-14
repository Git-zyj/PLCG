/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144002
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (var_9)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [1ULL] = arr_1 [i_0] [i_0];
        var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_13 ^= ((/* implicit */unsigned char) (short)24006);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [(unsigned char)7])) : (((/* implicit */int) var_7))))))) ? ((~(((unsigned long long int) arr_11 [12ULL] [i_3] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_1])))));
                    arr_13 [8] [i_1] |= ((((/* implicit */_Bool) (short)24014)) ? (((/* implicit */int) (short)-24003)) : (((/* implicit */int) (_Bool)1)));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)24006)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [14ULL] [i_3]))) : (arr_2 [i_3]))) & (((/* implicit */unsigned int) 2147483647))))) ? (((((/* implicit */_Bool) ((unsigned short) var_1))) ? (arr_2 [i_2 + 1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)23984))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
                }
            } 
        } 
    }
}
