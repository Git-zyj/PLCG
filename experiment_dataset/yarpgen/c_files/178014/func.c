/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178014
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
    var_16 = ((/* implicit */int) max((var_5), (var_2)));
    var_17 |= ((/* implicit */short) (+(((/* implicit */int) max((max((var_13), (((/* implicit */unsigned char) var_14)))), (((/* implicit */unsigned char) var_6)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) != ((~(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
            arr_7 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_5 [i_1] [i_0]))), (arr_5 [i_0] [i_0])));
        }
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        arr_8 [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0]);
    }
    var_20 = ((/* implicit */_Bool) var_9);
}
