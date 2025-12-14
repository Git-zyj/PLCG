/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178323
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) & (var_6))), (max((var_7), (((/* implicit */int) var_10))))))), (((unsigned long long int) ((((/* implicit */int) var_0)) != (var_6)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 2] [22ULL])) - (((/* implicit */int) arr_1 [i_0] [(unsigned short)18])))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_5 [i_0 - 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_1])) < (((/* implicit */int) arr_3 [i_1])))))));
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((unsigned long long int) arr_1 [i_1] [17])))));
            var_13 = ((/* implicit */long long int) ((_Bool) ((arr_0 [(unsigned char)24] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))));
        }
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned char) ((int) arr_4 [i_0 - 1] [i_0 - 1]))))));
    }
}
