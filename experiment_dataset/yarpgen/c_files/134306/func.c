/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134306
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+((-(((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65526)))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((signed char) arr_4 [i_1 - 1] [i_1 + 1]))) : (((/* implicit */int) arr_1 [9ULL]))));
        }
    }
    for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        arr_9 [i_2 + 1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_2] [(signed char)3])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)130)), (arr_8 [i_2])))) : (((((/* implicit */_Bool) (unsigned short)20413)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (unsigned short)20415))))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (unsigned short)65527))));
        arr_10 [i_2] |= ((((/* implicit */_Bool) arr_0 [i_2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_2 + 1]))))) : (((((/* implicit */_Bool) arr_0 [i_2] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16808393610463434242ULL))));
        arr_11 [1ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 1])) + (((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 1]))))) ? ((-(((/* implicit */int) (unsigned short)20412)))) : ((-(((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 2]))))));
    }
    var_16 *= ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 15; i_3 += 1) 
    {
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_3 + 3])) <= (((/* implicit */int) (unsigned char)194))));
        arr_14 [i_3 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned char)32))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_0 [i_3 + 2] [i_3]))));
    }
}
