/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125164
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1654903591U)) ? (1654903591U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 451996183U))))));
        arr_3 [20] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) + (2640063714U)));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)253)) ? (1506311651U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 2] [9U])))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2] [i_2 - 1])))))));
            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)26))));
            var_21 = ((/* implicit */long long int) (-(arr_8 [i_2] [i_2 + 1] [5])));
        }
        var_22 = ((/* implicit */_Bool) max((min((((unsigned long long int) (unsigned char)5)), (min((13382526843832951183ULL), (((/* implicit */unsigned long long int) (signed char)-27)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))));
        arr_9 [i_1] |= ((/* implicit */int) (~((~(min((((/* implicit */unsigned long long int) -1)), (arr_7 [(unsigned char)0])))))));
        var_23 ^= ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_24 *= ((/* implicit */_Bool) arr_11 [i_3]);
        var_25 = ((/* implicit */signed char) min(((-(869260585U))), (((/* implicit */unsigned int) arr_2 [i_3]))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(1654903584U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))) : (min((4294967282U), (1654903568U)))));
        var_27 += ((/* implicit */short) 3490299894201161927LL);
    }
    var_28 = 490829313U;
    var_29 = ((/* implicit */signed char) min((13382526843832951183ULL), (((/* implicit */unsigned long long int) 834836660U))));
    var_30 = ((/* implicit */unsigned int) max((var_12), (var_8)));
}
