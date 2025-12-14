/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11932
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
    var_18 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((unsigned int) (unsigned char)85))) ? (((((/* implicit */int) (unsigned char)104)) | (((/* implicit */int) (signed char)-6)))) : (((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)152)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_0 - 1] [i_0]));
    }
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1 - 1] = ((/* implicit */unsigned char) (((~(((arr_5 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (short)3491))))))) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))));
        arr_8 [i_1 - 1] = ((/* implicit */long long int) max((((((/* implicit */int) arr_1 [i_1 + 1])) < (((/* implicit */int) var_1)))), (((((/* implicit */long long int) -1419283027)) != (5882979507063444156LL)))));
        arr_9 [i_1 + 2] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_1 [i_1 - 2]))))));
    }
    var_20 = (+((-(((/* implicit */int) var_12)))));
}
