/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144672
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
    var_18 = ((/* implicit */unsigned int) (~(min((280925220896768LL), (((/* implicit */long long int) -2116297434))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)14)), (-2116297434)))) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (unsigned char)233)))), (max((((/* implicit */int) arr_1 [i_0])), (max((arr_0 [i_0]), (((/* implicit */int) (unsigned short)19589))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max(((unsigned short)19589), (((/* implicit */unsigned short) ((max((140737488224256LL), (((/* implicit */long long int) (short)-13686)))) != (((/* implicit */long long int) ((((/* implicit */_Bool) 3766924451U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))) : (3766924470U)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(arr_0 [i_0])));
        arr_4 [i_0] = ((528042845U) << (((1759002256U) - (1759002243U))));
    }
    for (unsigned short i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((long long int) arr_7 [i_1 - 2] [i_1 - 3])) >> (((/* implicit */int) min((arr_7 [i_1 + 3] [i_1 - 1]), (arr_7 [i_1 - 1] [i_1 - 2]))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(17884923885939425623ULL)))) ? (((/* implicit */int) ((_Bool) 2075348325))) : (((int) arr_7 [i_1] [i_1 - 1]))));
            arr_12 [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2]))) : (arr_11 [i_1 - 3] [i_1 - 3] [i_1]));
        }
    }
    var_21 = ((/* implicit */signed char) 1097693024);
}
