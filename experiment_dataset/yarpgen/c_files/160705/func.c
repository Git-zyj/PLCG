/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160705
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
    var_14 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [(_Bool)1])), ((-(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) arr_4 [i_0] [i_0] [4ULL]))), (arr_5 [i_0] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_1 - 1])) : ((~(((/* implicit */int) arr_2 [i_0]))))))) : (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) 0)) : (3536063377U))) / (((/* implicit */unsigned int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_0 [6ULL] [i_1 + 1])))))))));
            var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-12239))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) arr_4 [i_0] [i_0] [9ULL])), ((+(arr_5 [i_0] [i_0] [i_1])))))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)9])))) | (0)));
    }
}
