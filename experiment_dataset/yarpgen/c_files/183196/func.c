/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183196
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
    var_14 = (+(((var_11) + ((-(-1))))));
    var_15 = ((/* implicit */unsigned int) (-(((int) min((var_7), (((/* implicit */unsigned int) var_11)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned short)511)), (arr_1 [i_0] [i_0]))) & (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))) ? ((-(((long long int) (signed char)-99)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) (-((+(((/* implicit */int) (unsigned short)64492))))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~(min((((/* implicit */long long int) var_5)), (arr_4 [i_1 + 2] [i_1 - 1] [i_0]))))))));
            var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((arr_6 [i_0]) - (961947940)))))), (((((/* implicit */_Bool) 125916072)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (6619089106212615397LL)))))));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (unsigned char)237);
        }
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4834903783997299388LL))));
        var_19 = ((/* implicit */unsigned short) (~(max((-4834903783997299388LL), (-6619089106212615408LL)))));
    }
}
