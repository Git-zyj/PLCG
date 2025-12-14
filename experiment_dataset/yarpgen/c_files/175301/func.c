/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175301
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
    var_15 = ((/* implicit */unsigned char) var_13);
    var_16 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) var_13)) : (-1574780596)))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_2 [i_0 - 4])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) var_9))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 2])))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)299)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))))))));
            arr_5 [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_4 [i_0 - 3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (arr_4 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (var_5) : (((/* implicit */long long int) arr_4 [i_0 - 1]))))));
        }
        arr_6 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    }
}
