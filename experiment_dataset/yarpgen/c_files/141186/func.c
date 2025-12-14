/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141186
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_11 |= ((/* implicit */signed char) arr_0 [4] [i_0]);
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned short) var_9);
        var_12 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        var_13 = ((/* implicit */signed char) max((((short) arr_2 [1U] [i_0])), (((/* implicit */short) (!(var_1))))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), (var_5)));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) arr_5 [i_1])))) != ((~(((/* implicit */int) arr_5 [i_1]))))))), ((+(((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_6 [i_1])))))))));
        arr_7 [i_1] [(_Bool)1] = ((unsigned int) arr_6 [i_1 - 1]);
    }
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) (signed char)-62))), (min((var_7), (((/* implicit */int) var_8))))))) ? (((((/* implicit */int) var_6)) - (((((/* implicit */int) var_8)) - (var_4))))) : (((/* implicit */int) ((unsigned short) var_4)))));
    var_16 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
        var_17 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_9 [(signed char)8] [(signed char)8]))))));
        arr_11 [i_2 - 1] [i_2 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(signed char)12])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)79)) * (((/* implicit */int) var_2))))) : (arr_9 [i_2] [i_2])));
        arr_12 [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? ((~(((/* implicit */int) (signed char)40)))) : (((/* implicit */int) (unsigned short)22814))));
    }
}
