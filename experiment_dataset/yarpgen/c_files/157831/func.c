/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157831
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
    var_12 = ((/* implicit */unsigned char) var_6);
    var_13 *= ((/* implicit */unsigned int) (~(11680573855385674367ULL)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [14ULL] &= ((/* implicit */unsigned int) min((min((11680573855385674367ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((-1LL), (((/* implicit */long long int) arr_1 [i_0]))))) & ((~(359325930346229911ULL)))));
        var_14 |= (+((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_0 [i_0] [i_0]))))));
        arr_5 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) 9223372036854775796LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_10))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6)))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) max((arr_7 [i_1]), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_7 [i_1]))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (signed char)55)), (4U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1543820108)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_6 [i_1]))))))))));
        arr_8 [10U] |= ((/* implicit */unsigned int) 17135428883351199100ULL);
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (unsigned short i_3 = 2; i_3 < 23; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_18 [1LL] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_12 [i_3 - 2] [i_3 - 1] [i_3 - 2])) : (((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 1] [i_3 - 2])))), (((/* implicit */int) max((arr_12 [i_3 - 1] [i_3 + 2] [i_3 + 2]), (arr_12 [i_3 - 1] [i_3 - 1] [i_3 + 2]))))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)15023))))))))));
                        var_17 = ((/* implicit */unsigned char) max((min(((+(((/* implicit */int) arr_6 [i_4])))), (((/* implicit */int) var_9)))), ((~(min((((/* implicit */int) var_2)), (arr_14 [i_1] [i_1] [i_1] [i_1])))))));
                    }
                } 
            } 
        } 
    }
}
