/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129606
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
    var_14 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) (+(((arr_0 [i_0 - 3]) / (((/* implicit */int) var_9))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) -6722245673143750560LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) arr_2 [i_0] [i_1])))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166)))))))));
            var_17 = (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))));
            var_18 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
        }
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_19 += ((/* implicit */unsigned char) (~((~(-231208292)))));
            var_20 = ((/* implicit */int) ((max((12216927910561987746ULL), (((/* implicit */unsigned long long int) (unsigned char)15)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        var_21 &= ((/* implicit */_Bool) ((((unsigned long long int) arr_4 [i_0] [i_0])) & (((/* implicit */unsigned long long int) var_13))));
    }
    for (int i_3 = 3; i_3 < 16; i_3 += 3) 
    {
        var_22 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)125)) <= ((~(var_0)))))), (6722245673143750556LL)));
        var_23 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_6)))) >> ((((-(var_0))) - (2084149555)))));
    }
    var_24 = ((/* implicit */unsigned short) var_1);
}
