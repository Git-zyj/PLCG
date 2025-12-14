/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150564
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
    var_10 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-1561760511) - (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) 31U)) : (var_6))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))));
            var_12 = ((/* implicit */int) ((long long int) arr_2 [i_0]));
            arr_6 [i_0] [2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_6)))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_13 = ((/* implicit */_Bool) (+((-(-98403991)))));
            var_14 = ((/* implicit */unsigned char) ((-98403991) / (((/* implicit */int) (unsigned char)42))));
        }
    }
    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3 + 1])) - (((/* implicit */int) arr_10 [i_3 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (((/* implicit */int) arr_10 [i_3 + 1])) : (arr_9 [i_3 + 1])))) : (max((((/* implicit */unsigned int) arr_10 [i_3 - 1])), (arr_11 [i_3 + 1]))))))));
        var_16 = ((/* implicit */unsigned char) (-(-930450992)));
        arr_12 [i_3] [2] = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (long long int i_4 = 3; i_4 < 21; i_4 += 2) 
    {
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4 + 1])) ? (((/* implicit */unsigned int) arr_14 [i_4 - 1])) : (1741686721U)))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (arr_14 [i_4 + 1])))));
        arr_16 [i_4] = ((/* implicit */int) ((((/* implicit */int) var_7)) < (((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((-98403991) * (((/* implicit */int) var_9))))))));
        var_18 = ((/* implicit */unsigned char) (_Bool)1);
        var_19 = ((/* implicit */unsigned char) (((((~(arr_13 [i_4]))) << ((((((~(((/* implicit */int) arr_15 [i_4])))) + (188))) - (1))))) & (max((arr_13 [i_4]), (((/* implicit */int) arr_15 [i_4 + 1]))))));
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_4]) <= (((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */long long int) var_4)), (-2572485988035720842LL)))))) ? ((-(arr_14 [i_4]))) : ((~(arr_14 [i_4 + 1]))));
    }
    var_21 = ((/* implicit */_Bool) ((var_4) + (var_1)));
    var_22 = ((/* implicit */long long int) (unsigned char)255);
}
