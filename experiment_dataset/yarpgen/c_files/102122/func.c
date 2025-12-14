/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102122
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
    var_10 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)116))))) ? (max((((arr_3 [i_0]) ^ (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) (signed char)80))))) : ((~(((/* implicit */int) (signed char)-1))))));
            var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)147)));
            var_13 = ((/* implicit */unsigned char) (-(((arr_0 [i_1 - 1]) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 2]))))));
        }
        arr_6 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((arr_3 [i_0]) + (arr_3 [i_0]))));
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_4 [i_0] [i_0] [i_0]))))));
        arr_8 [i_0] = ((/* implicit */signed char) var_8);
    }
}
