/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170812
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
    var_19 = ((/* implicit */long long int) ((var_10) != ((-(((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) var_16))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
        arr_3 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? ((+(arr_2 [(signed char)2]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_1)))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0 - 1]) & (((/* implicit */long long int) arr_4 [i_0]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7))))))));
            var_21 = ((/* implicit */short) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (short)-11)), ((unsigned short)30423))), (((/* implicit */unsigned short) (short)26))))))));
            var_22 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)30110))))), (arr_4 [i_0 - 1]))) | (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_6)))))))));
        }
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4288)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)2])))))) ? (max((var_10), (((/* implicit */int) (unsigned short)9442)))) : (((/* implicit */int) var_13))))))))));
    }
}
