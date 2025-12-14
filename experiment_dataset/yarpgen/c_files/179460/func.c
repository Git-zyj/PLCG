/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179460
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) min((min((arr_0 [i_0 + 1] [i_0]), (arr_0 [i_0 - 2] [i_0]))), (max((arr_0 [i_0 - 1] [i_0]), (arr_0 [i_0 + 1] [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_2] [i_0] = arr_9 [i_0] [i_2];
                    arr_11 [i_0 + 2] [i_0] = ((unsigned short) min((((/* implicit */int) ((unsigned char) 948342671))), ((~(((/* implicit */int) var_7))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) max((((int) (unsigned char)35)), ((((-(((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2])))) & (((/* implicit */int) var_4))))));
        arr_13 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0 + 1])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [1LL] [1LL] [1LL]))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_7 [i_0 - 1] [i_0] [i_0] [i_0])), (arr_8 [i_0] [i_0 - 1] [i_0]))))));
    }
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1484617402216250118LL))));
}
