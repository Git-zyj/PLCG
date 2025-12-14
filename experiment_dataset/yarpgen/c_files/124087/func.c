/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124087
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)33)) == (((/* implicit */int) (unsigned short)21))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 11373203699183535659ULL)) || (((/* implicit */_Bool) 268303609))))) & (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) <= ((+(((/* implicit */int) (signed char)0)))))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_9 [20] [1U] = ((((arr_7 [i_1]) / (arr_7 [i_1]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_1] [i_1])))));
        var_18 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) & (1481988433286196984ULL))) ^ (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)244)) & (((/* implicit */int) arr_0 [i_1] [(unsigned char)8])))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 4; i_2 < 22; i_2 += 1) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15872)) ^ (((/* implicit */int) (unsigned short)35124))));
            var_19 = ((/* implicit */long long int) -109330254);
            arr_13 [i_1] [i_1] [i_1] &= ((/* implicit */short) (~(((/* implicit */int) ((((var_15) + (var_15))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24251)) && ((_Bool)1))))))))));
            arr_14 [i_1] [i_2] |= ((/* implicit */unsigned short) 1998873503);
            var_20 = ((/* implicit */unsigned short) arr_6 [i_2] [i_1]);
        }
    }
    var_21 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)38889)) == (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-14)) || (((/* implicit */_Bool) (short)13405)))) && (((/* implicit */_Bool) (unsigned short)40057)))))));
}
