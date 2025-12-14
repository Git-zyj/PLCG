/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121701
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
    var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(15297298588923298050ULL))), (((var_10) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-120)) && (((/* implicit */_Bool) 15297298588923298060ULL))));
        var_15 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_6)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */signed char) (-(((((/* implicit */int) arr_1 [i_1] [i_1])) | (((/* implicit */int) arr_1 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_17 += ((/* implicit */_Bool) var_5);
            arr_9 [i_1] [i_1] &= ((/* implicit */long long int) ((((((_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1])) : (arr_3 [i_1]))) == (((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) arr_6 [i_2])) - (29221)))))));
        }
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((max((((((/* implicit */int) (short)4975)) | (((/* implicit */int) var_7)))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_0)))))) & (((((/* implicit */int) ((short) var_6))) % (((/* implicit */int) arr_2 [i_1])))))))));
    }
}
