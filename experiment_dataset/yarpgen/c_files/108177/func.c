/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108177
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [i_0] [9]))))) % (var_6)));
        var_10 = arr_1 [i_0];
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned char) (~(((max((var_5), (((/* implicit */long long int) var_3)))) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [4] [i_1])))))));
            var_12 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) (short)-32617))))) ? (var_6) : (var_9)))));
            arr_6 [(short)6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_6))))));
        }
    }
    for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */short) var_6);
        var_13 ^= ((/* implicit */unsigned char) max((arr_8 [i_2] [i_2 + 2]), (((/* implicit */int) arr_7 [i_2 + 1]))));
    }
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        var_14 ^= ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_4)) % (((/* implicit */int) arr_11 [i_3])))) << (((((var_9) << (((((/* implicit */int) arr_10 [i_3])) - (49372))))) - (14021272568257708029ULL)))))));
        arr_13 [i_3] [i_3] = ((((/* implicit */int) ((((/* implicit */int) (short)21726)) < (((/* implicit */int) (short)-32617))))) % (arr_12 [(unsigned short)8] [i_3]));
    }
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (((-(var_8))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) != (var_8)))))))) + (((/* implicit */int) var_2))));
}
