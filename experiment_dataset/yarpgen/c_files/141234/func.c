/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141234
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
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 3])) | (((/* implicit */int) arr_4 [i_0 - 3])))))));
            var_13 |= ((/* implicit */long long int) max((((((((/* implicit */int) arr_2 [i_0 - 2])) ^ (((/* implicit */int) arr_3 [i_0] [i_0])))) % (((/* implicit */int) arr_0 [i_0 - 3])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_1] [i_0 - 2])), (min((var_0), (((/* implicit */unsigned short) arr_3 [(short)9] [i_1])))))))));
            var_14 = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [(short)14] [i_0])))), (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_3 [(short)10] [i_1])))))))));
            var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 2])) % (((/* implicit */int) arr_0 [i_0 + 1])))))));
        }
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_16 = ((short) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 4])) >> (((var_3) + (1449664220)))));
            arr_10 [(unsigned char)11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 4] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_7 [i_0 - 4] [i_0] [i_0])))))));
        }
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
        var_18 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_0] [(signed char)9])) : (((/* implicit */int) arr_4 [i_0 - 3])))) | (((/* implicit */int) min((var_12), (arr_2 [i_0 + 1])))))) <= (min((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_7 [i_0] [(short)17] [i_0 + 1])))), ((+(((/* implicit */int) arr_3 [i_0] [i_0 + 1]))))))));
    }
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_7))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (-(((/* implicit */int) (short)28901)))))) - (((/* implicit */int) var_10))));
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_3)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (var_9)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_2)))))))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) ((short) (_Bool)0))) != ((~(((/* implicit */int) var_6)))))))));
}
