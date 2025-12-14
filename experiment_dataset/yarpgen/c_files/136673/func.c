/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136673
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
    var_18 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned int) (unsigned char)228)), (var_1))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_10 [8LL] [20U] [0U] [20U] &= ((/* implicit */unsigned char) -7712979141103350708LL);
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) var_7);
                    arr_12 [i_0 - 1] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_9 [(signed char)14] [i_1] [2LL] [i_2 - 1]))));
                }
            } 
        } 
        var_19 = 18446744073709551608ULL;
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    arr_19 [(signed char)12] [i_0] [i_4] [(unsigned char)5] = ((/* implicit */unsigned int) ((long long int) max(((+(var_1))), (min((var_16), (var_2))))));
                    arr_20 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) max((max((var_2), (((/* implicit */unsigned int) (unsigned short)65534)))), (arr_16 [10U] [i_0] [i_4] [i_4])))) : (arr_14 [i_0 - 3] [(short)21] [i_0 - 3])));
                    arr_21 [i_0] [0] [i_4] [i_0 - 2] = ((/* implicit */_Bool) ((((((unsigned int) arr_5 [i_0] [i_0])) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)31)) & (((/* implicit */int) var_11))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)0)), (arr_0 [i_0])))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0 + 1]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 22; i_5 += 2) 
    {
        arr_24 [i_5] [i_5 + 1] = ((/* implicit */unsigned short) var_11);
        var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -6752326218191965352LL))))));
    }
    var_21 = ((/* implicit */long long int) var_15);
}
