/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150589
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
    var_10 = ((/* implicit */signed char) 16327332787706507609ULL);
    var_11 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (unsigned short)7197)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned short)26588)) ? (((/* implicit */int) (unsigned short)18753)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (signed char)-95)))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (unsigned short)27610)) : (((/* implicit */int) var_1))))) || ((!(((/* implicit */_Bool) 3106019983U)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))) : (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [(unsigned short)0] &= ((/* implicit */_Bool) arr_0 [8LL] [i_0]);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_12 ^= ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [(unsigned short)0]))))), (min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (1669503916) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (17493150375169968547ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))));
        var_13 ^= ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_5 [i_1] [i_1])))) + (2147483647))) << (((((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) % (((((/* implicit */_Bool) arr_4 [(signed char)12])) ? (1456385845U) : (((/* implicit */unsigned int) arr_4 [10])))))) - (1U)))));
        var_14 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */int) arr_5 [i_1] [i_1]))))) || (((/* implicit */_Bool) ((2369014002U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))))))))));
        var_15 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (signed char)-91)), (((unsigned int) (signed char)-30)))), (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)22460)) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_5 [i_1] [i_1])))))));
    }
}
