/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159888
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) var_4);
        var_11 = arr_0 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2879400269U)))))), (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
        var_12 &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_13 ^= ((/* implicit */signed char) var_3);
        arr_9 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) ? ((+(arr_8 [i_1]))) : ((~(arr_1 [i_1]))));
    }
    var_14 = ((/* implicit */_Bool) (~(((((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) var_10))))) / (var_10)))));
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                arr_15 [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) (_Bool)1)) : ((~(arr_0 [i_2 - 1])))))) ? (((((/* implicit */_Bool) (signed char)-10)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (1415567040U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)10287)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 166635661U))))))));
                arr_16 [i_3] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_2 + 1])), (arr_6 [i_2 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(2879400276U)))) ? (arr_0 [i_3]) : (((/* implicit */int) ((unsigned short) 166635666U)))))) : (arr_11 [i_2])));
                var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_2 - 1])) ? (27ULL) : (((/* implicit */unsigned long long int) arr_12 [i_3]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (var_3) : ((-(((/* implicit */int) (_Bool)1))))))));
                var_16 = ((/* implicit */int) (+(((unsigned long long int) var_5))));
            }
        } 
    } 
    var_17 &= ((/* implicit */long long int) var_6);
}
