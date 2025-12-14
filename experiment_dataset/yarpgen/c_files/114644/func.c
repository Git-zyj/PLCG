/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114644
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
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_2)), (max((max((var_10), (var_7))), (max((var_7), (var_9)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
        var_13 = ((/* implicit */unsigned long long int) ((unsigned char) min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [(signed char)11] [i_0])))));
        var_14 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned int) arr_1 [i_0]))), ((-(arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (562949953388544LL)));
        var_15 = ((/* implicit */int) arr_5 [i_1]);
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((short) (short)-20673)))));
        var_17 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_2]))))) : (((562949953388544LL) << (((((((/* implicit */int) (short)-68)) + (125))) - (45))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            arr_13 [i_3] = ((/* implicit */unsigned char) (signed char)-66);
            var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (short)68))) | (((/* implicit */int) arr_9 [i_3] [i_3 - 1]))));
            arr_14 [i_2] [i_3] = ((unsigned short) (_Bool)1);
        }
        arr_15 [(short)9] = ((/* implicit */int) ((unsigned short) arr_0 [i_2] [i_2]));
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (unsigned short)3974))));
        arr_18 [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_9 [i_4] [1U])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_4] [i_4])))), (((((/* implicit */int) (_Bool)1)) / (32704)))));
        arr_19 [(_Bool)1] = ((/* implicit */signed char) 1457121004590153687LL);
    }
    var_20 = ((/* implicit */unsigned short) (+(16777215)));
}
